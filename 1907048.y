
%{
#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>

   char var_name[1000][1000];

   int store_value[1000];

	//variable counter
	int var_cnt = 1;

	//variable checking
    int chkVariable(char *s){
        int i;
        for(i=1; i<var_cnt; i++){
            if(strcmp(var_name[i],s) == 0)
					return 1;
        }
		  return 0;
    }
	int initial_assign(char *s)
    {
      if(chkVariable(s)==1)
		{
			return 0;
		}
      strcpy(var_name[var_cnt],s);
		store_value[var_cnt]=0;
		var_cnt++;
		return 1;
    }

	//switch counting
	int sw_var_val=0,case_ex=0;

	//if counting
	int ifcnt = 0;
	int ifcomplete[1000];

	//getting value
    int getValue(char *s)
    {
        int pos=-1;
        int i;
        for( i=1; i<var_cnt; i++)
        {
            if(strcmp(var_name[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
    }

	//assigning values
    int setValue(char *s,int val)
    {
        if(chkVariable(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<var_cnt; i++)
        {
            if(strcmp(var_name[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        store_value[ok]=val;
        return 1;
    }
    

%}

%union
{
   char *string;
   int num;
   double flt;
}
%error-verbose
%token <num>  NUMBER
%token <string>  VARIABLE
%type  <num> expression
%type  <num> SIN
%type  <num> COS
%type  <num> LOG10
%type  <num> ODDEVEN
%type  <num> FACTORIAL
%type  <num> MAX
%type  <num> MIN
%type  <num> GCD
%type  <num> LCM
%type  <num> PRIME
%type  <num> SQRT
%type  <num> END
%type  <num> more
%type  <num> morestat
%type  <num> param

%token main_function define INT FLOAT CHAR DOUBLE STRING INC DEC POS_STEP NEG_STEP READ END BREAK CONT CASE SWITCH DEFAULT WHILE FOR IF ELIF ELSE SIN COS LOG10 ODDEVEN FACTORIAL MAX MIN GCD LCM PRIME SQRT LT GT EQ GEQ LEQ NEQ WRITE IMPORT NOT MOD HEADER

%left LT GT GEQ LEQ EQ NEQ
%left '&' '|'
%left '+' '-'
%left '*' '/' MOD
%left '^'



%%
program:
        import functions  main_function '(' ')' '{' statements '}'  {printf("Compilation DONE\n");}
        | /* NULL */
        ;

import: IMPORT HEADER { printf("Header Library Detected\n"); }
		| /* NULL */
		;


functions:
    /* NULL */
    | functions func
    ;


func: define VARIABLE '(' param ')' '{' statements '}'
	{
		printf("Function Detected\n");		
	}
	;


param	:
		param ',' type pid	{ printf("With Parameter\n"); } 
	|	type pid 	{ printf("With Parameter\n"); }
	
	| { printf("Without Parameter\n");} 
	;


pid	:
		 VARIABLE
		{
		   if(chkVariable($1)==1)
      		printf("Duplicate Declaration\n");
   		else
      	  initial_assign($1);
		}
	;



/* function ends */


statements	:  /* NULL */
	|statements morestat
	| declare 
	;


declare	:
	type id END  
	;


type	:
	INT

	| FLOAT

	| STRING
	;


id	:
	id ',' VARIABLE
		{
   		 if(chkVariable($3)==1)
      			printf("Duplicate Declaration!\n");
   		 else{
				initial_assign($3);
				{ printf("(%s) Variable declaration\n", $3); }
		 	}
		}

	| VARIABLE
		{
		   if(chkVariable($1)==1)
      			printf("Duplicate Declaration!\n");
   		 else{
				initial_assign($1);
				{ printf("(%s) Variable declaration\n", $1); }
		 	}
		}
	
	| VARIABLE '=' expression
		{
		   if(chkVariable($1)==1)
      			printf("Duplicate Declaration!\n");
   		 else
      			initial_assign($1);
			
			if( setValue($1,$3) == 0 )
			{
				printf("(%s) Variable not declared\n", $1);
			}
			else{
				printf("(%s) Variable assigned with value %d\n", $1, $3);
			}
		}
	;

morestat: 
	morestat more

	| more
	;

more:
	END
	| declare
	| expression END
		{
			$$=$1;
		}
	| WRITE '(' VARIABLE ')' END
	{
		if(chkVariable($3)==0)
			{
				printf("Can't print, (%s) Variable is not declared.\n", $3);
			}
			else 
			{
				printf("Displaying on console (Value of the variable %s:  %d)\n",$3, store_value[getValue($3)]);
			}
	}
	| READ '(' VARIABLE ',' expression ')' END 
	{
      if(chkVariable($3)==1)
            {
            printf("READ from console.\n");
			printf("(%s) Variable now has value %d.\n", $3, $5);
        }
		  }
	| VARIABLE '=' expression END 
	{
		if( setValue($1,$3) == 0 )
		{
			$$ = 0;
			printf("Variable not declared\n");
		}
		else
		{
			$$=$3;
			printf("(%s) Variable has value : %d\n", $1, $3);
		}
	}
	| IF '(' expression ')' '{' morestat '}'
	{
		ifcnt++;
		if( $3 == 1 )
		{
			ifcomplete[ifcnt] = 1;
			printf("if condition executed \n");
		}
	}
	| ELIF '(' expression ')' '{' morestat '}' 
	{
		if( $3 == 1 && ifcomplete[ifcnt] == 0)
		{
			ifcomplete[ifcnt] = 1;
			printf("elseif condition executed \n");
		}
	}
	| ELSE '{' morestat '}'
	{
		if( ifcomplete[ifcnt] == 0)
		{
			ifcomplete[ifcnt] = 1;
			printf("else condition executed \n");
		}
	}

	| FOR '(' VARIABLE '=' NUMBER ',' VARIABLE LEQ NUMBER ',' VARIABLE POS_STEP NUMBER  ')' '{' morestat '}'
		{			
			if( setValue($3,$5) == 0 )
			{
				printf("Variable not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= $5 ; i <= $9 ; i+=$13)
				{
					setValue($3,i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		}
	| FOR '(' VARIABLE '=' NUMBER ',' VARIABLE LT NUMBER ',' VARIABLE POS_STEP NUMBER  ')' '{' morestat '}'
		{			
			if( setValue($3,$5) == 0 )
			{
				printf("\nvar not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= $5 ; i < $9 ; i+=$13)
				{
					setValue($3,i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		}
	| FOR '(' VARIABLE '=' NUMBER ',' VARIABLE GEQ NUMBER ',' VARIABLE NEG_STEP NUMBER  ')' '{' morestat '}'
		{			
			if( setValue($3,$5) == 0 )
			{
				printf("\nvar not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= $5 ; i >= $9 ; i-=$13)
				{
					setValue($3,i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		}
	| FOR '(' VARIABLE '=' NUMBER ',' VARIABLE GT NUMBER ',' VARIABLE NEG_STEP NUMBER  ')' '{' morestat '}'
		{			
			if( setValue($3,$5) == 0 )
			{
				printf("\nvar not declared loop cant be execute \n");
			}
			else
			{
			   int i;
				for(i= $5 ; i > $9 ; i-=$13)
				{
					setValue($3,i);
					printf("for loop increasing %d\n",i);
				} 
				printf("\n");	
			} 			    
		}
	| WHILE '(' VARIABLE LT NUMBER ')' '{' morestat '}'
		{
			int a = store_value[getValue($3)];
			while((a+=1)< $5)
			{
				printf("While loop increasing %s : %d\n", $3, a);
			}
		}
	| SWITCH SwitchValue '{' SwitchStatement '}'
	;

SwitchValue :
	expression
		{
    		case_ex = 0;
    		sw_var_val = $1;
		}
	;

SwitchStatement: /* empty */

	| SwitchStatement CASE expression ':' morestat BREAK END
		{
    		if($3 == sw_var_val && case_ex == 0 )
    		{
        			printf("Executed option %d\n",$3);
        			case_ex = 1;
   			}
		}

	| SwitchStatement DEFAULT ':' morestat 
		{
  		  if(case_ex == 0)
   			 {
    			   case_ex = 1;
     			   printf("Default Block executed\n");
    			}
		}
	;

expression:
	NUMBER		   		  
	{
		$$ = $1;
	}

	| VARIABLE
		{
  		  if( chkVariable($1) == 0)
   			 {
    			    $$=0;
     			   printf("Variable not declared!\n");
   			 }
    		else
       			 $$=store_value[getValue($1)];
		}
	| VARIABLE '=' expression
    	{
        	if (chkVariable($1) == 1)
        	{
            	setValue($1, $3);
            	$$ = store_value[getValue($1)];
        	}
        	else
        	{
            	$$ = 0;
            	printf("Variable not declared\n");
        	}
    	}
	| VARIABLE INC
		{
  		  if( chkVariable($1) == 0)
   		{
    			$$=0;
     			printf("Variable not declared for increament!\n");
   		}
    		else
			{
				int tmp = store_value[getValue($1)];
				tmp = tmp+1;
				store_value[getValue($1)] = tmp;
				$$=store_value[getValue($1)];
			}

		}
	| VARIABLE DEC
		{
  		  if( chkVariable($1) == 0)
   		{
    			$$=0;
     			printf("Variable not declared for decreament!\n");
   		}
    		else
			{
				int tmp = store_value[getValue($1)];
				tmp = tmp-1;
				store_value[getValue($1)] = tmp;
				$$=store_value[getValue($1)];
			}
		}
	| VARIABLE NOT
		{
  		  if( chkVariable($1) == 0)
   		{
    			$$=0;
     			printf("Variable not declared of not!\n");
   		}
    		else
			{
				int tmp = store_value[getValue($1)];
				tmp = !tmp;
				store_value[getValue($1)] = tmp;
				$$=store_value[getValue($1)];
			}

		}
	
	| expression '+' expression	  	
		 { 	
			$$ = $1 + $3; 
			printf("Sum value of (%d and %d): %d\n",$1, $3, $$);
		 }

	| expression '-' expression	 	  
		{
  			$$ = $1 - $3; 
			printf("Subtraction value of (%d and %d): %d\n",$1, $3, $$);
		}

	| expression '*' expression
		{
 			   $$ = $1 * $3;
 			   printf("Multiplication value of (%d and %d): %d\n",$1, $3, $$);
		}

	| expression '/' expression	 	  
		{ 	
			if($3)
 			   {
  			      $$ = $1 / $3;
     				printf("Division value of (%d and %d): %d\n",$1, $3, $$);
  			   }
   			 else
    			{
      				 $$ = 0;
       				 printf("Division by zero not possible\n");
    			}
		}

	| expression '^' expression 		
		{ 	
			$$=pow($1,$3); 
			printf("Power value of (%d and %d): %d\n",$1, $3, $$);
		}

	| expression MOD expression 		
		{	 
			$$=$1 % $3; 
			printf("Remainder value of (%d and %d): %d\n",$1, $3, $$);
		}

	| '(' expression ')'		  
    		 { $$ = $2 ;}
	| expression LT expression	
		{
			//  $$ = $1 < $3; 
			 if( $1 < $3 )
			 {
				printf("less check for values (%d , %d) is True \n",$1, $3);
				$$ = 1;
			 }
			 else{
				printf("less check for values (%d , %d) is False \n",$1, $3);
				$$ = 0;
			}
		}

	| expression GT expression	
		{
			$$ = $1 > $3;
			if($1 > $3){
				printf("greater check for values (%d , %d) is True \n",$1, $3);
			}
			else{
				printf("greater check for values (%d , %d) is False \n",$1, $3);
			}
		}

	| expression LEQ expression  
		{ 
			$$ = $1 <= $3;
			if ($1 <= $3) printf("less equal check for values (%d , %d) is True \n",$1, $3);
			else printf("less equal check for values (%d , %d) is False \n",$1, $3);
		}

	| expression GEQ expression   
 		{ 
			$$ = $1 >= $3; 
			if ($1 >= $3) printf("greater equal check for values (%d , %d) is True \n",$1, $3);
			else printf("greater equal check for values (%d , %d) is False \n",$1, $3);
		}
	
	| expression EQ expression   
 		{ 
			$$ = $1 == $3; 
			if($1 == $3) printf("equal check for values (%d , %d) is True \n",$1, $3);
			else printf("equal check for values (%d , %d) is False \n",$1, $3);
		}
	
	| expression NEQ expression   
 		{ 
			$$ = $1 != $3; 
			if ($1 != $3) printf("Not equal check for values (%d , %d) is True \n",$1, $3);
			else printf("Not equal check for values (%d , %d) is False \n",$1, $3);
		}

	| expression '&' expression
		{
			int val = $1&$3;
			$$ = $1&$3;
			printf("Bitwise AND of values (%d, %d): %d\n", $1, $3, val);
		}
	| expression '|' expression
		{
			int val = $1|$3;
			$$ = $1|$3;
			printf("Bitwise OR of values (%d, %d): %d\n", $1, $3, val);
		} 
	| SIN '(' expression ')' 			
		{
			printf("Value of Sin(%d) is %lf\n",$3,sin($3*3.1416/180)); $$=sin($3*3.1416/180);
		}

	| COS '(' expression ')' 	 			
		{
			printf("Value of Cos(%d) is %lf\n",$3,cos($3*3.1416/180)); $$=cos($3*3.1416/180);
		}

	| LOG10 '(' expression ')'			
		{
			printf("Value of Log10(%d) is %lf\n",$3,(log($3*1.0)/log(10.0))); $$=(log($3*1.0)/log(10.0));
		}

	|ODDEVEN '(' expression ')'         
		{
			if($3%2==0)
			{
				$$ = 0;
				printf("value provided for OddEven function is %d which is even\n",$3);
			} 
			else
			{
				$$ = 1;
				printf("value provided for OddEven function is %d which is odd\n",$3);
			} 
				
		}

	|FACTORIAL '(' expression ')'           
		{
			int ans = 1;
			int i; 
			for(i=1; i<=$3; i++)
			{
				ans*=i;
			}
			printf("Factorial of %d is %d\n",$3,ans);
			$$ = ans;
		}
	
	|SQRT '(' expression ')' 
		{
			float ans = sqrt($3 * 1.0);
			$$ = ans;
			printf("Square root of %d is %0.2lf\n",$3,ans);
		}

	|MAX '(' expression ',' expression ')'           
		{
			if( $3 < $5 )
			{
				$$ = $5;
				printf("MAX of (%d,%d): %d \n",$3,$5, $5);
			}
			else
			{
				$$ = $3;
				printf("MAX of (%d,%d): %d \n",$3,$5, $3);
			}
		}
	|GCD '(' expression ',' expression ')'
		{
			int n1, n2;
			n1 = $3;
			n2 = $5;
    		while(n1!=n2)
    		{
        		if(n1 > n2)
            		n1 -= n2;
        		else
            		n2 -= n1;
    		}
			$$ = n1;
			printf("GCD of (%d, %d): %d \n",$3, $5, n1);
		}
	|MIN '(' expression ',' expression ')'           
		{
			if( $3 < $5 )
			{
				$$ = $3;
				printf("MIN of (%d,%d): %d \n",$3,$5, $3);
			}
			else
			{
				$$ = $5;
				printf("MIN of (%d,%d): %d \n",$3,$5, $5);
			}
		}
	
	|LCM '(' expression ',' expression ')'
		{
			int n1, n2;
			n1 = $3;
			n2 = $5;
			int result = n1 * n2;
    		while(n1!=n2)
    		{
        		if(n1 > n2)
            		n1 -= n2;
        		else
            		n2 -= n1;
    		}
			n1 = result / n1;
			$$ = n1;
			printf("LCM of (%d, %d): %d \n",$3, $5, n1);
		}
	
	|PRIME '(' expression ')'           
		{
			int x = $3;
			int ck = 0;
			int i; 
			for(i=2; i*i<=x; i++)
			{
				if( x%i == 0 )
				{
					ck = 1;
					break;
				}
			}
			if( ck )
			{
				$$ = 0;
				printf("%d is Not prime \n",x);
			}
			else
			{
				$$ = 1;
				printf("%d is prime \n",x);
			}
		}
	;

%%

int yyerror(char *s)
{
    printf( "%s\n", s);
}
