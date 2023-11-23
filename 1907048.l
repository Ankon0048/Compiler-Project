chars [a-zA-Z]
digits [0-9]
special [$_@]
space " "
newline "\n"
Datatype "poornank"|"doshomik"|"akkhar"|"doshomik_big"|"shoonya"
Relation_operator "khudro"|"brihat"|"soman"|"brihat_ya_soman"|"khudro_ya_soman"|"ashoman"
Assignment_operator "="|"+="|"-="|"/="|"*="
integer (-|+)?[0-9]+
float [+-]?[0-9]+[.][0-9]+|[+-]?[0-9]+[.][0-9]|[1-9]+e[-+][0-9]+
double [+-]?[0-9]+[.][0-9]+{6,12}|[+-]?[.][0-9]+|[1-9]+e[+-][0-9]+{6,12}
char [A-Za-z]+
Identifiers [a-zA-Z][a-zA-Z0-9]*
Arithmatic_operator "+"|"-"|"/"|"*"|"&"|"|"|"vagsesh"
Logical_operator "&&"|"||"
Unary_operator "#++"|"#--"|"!#"
ek_line_comment [/][/]~.*
ekadhik_line_comment [ ]*[/][~][a-zA-Z0-9!@#*(){}_+-,.:\|?><\n\t ]*[~][/]

%{
	#include "1907048.tab.h"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	int varindex(char *var);
%}

%%


{ek_line_comment} { printf("single line comment\n"); }
{ekadhik_line_comment} { printf("multiple_line_comment\n"); }


"shuruaat" { return main_function; }
"shonga"     { return define; }


"poornank"		{ return INT; }
"doshomik"	{ return FLOAT; }
"akkhar"	{ return CHAR; }
"doshomik_big"	{ return DOUBLE; }
"bakko"    { return STRING; }



"(("	  { return '('; }
"))"	  { return ')'; }
"{"	  { return '{'; }
"}"	  { return '}'; }
"["	  { return '['; }
"]"	  { return ']'; }
";#"    { return END; }
","     { return ','; }

"+"	{ return '+'; }
"-"	{ return '-'; }
"*"	{ return '*'; }
"/"	{ return '/'; }
"^"	{ return '^'; }
"vagsesh"	{ return MOD; }
"&" { return '&'; }
"|" { return '|'; }
"="	{ return '='; }
":"  { return ':';}
"#++" { return INC; }
"#--"	{ return DEC; }
"!#"	{ return NOT; }


"vengeFel"    			{ return BREAK; }
"chalo"				{ return CONT; }
"option"      			{ return CASE; }
"parivartan"      	{ return SWITCH;	}
"standby"     			{ return DEFAULT;	}


"jab_tak" { return WHILE; }
"jab_tak_for"  { return FOR; }
"baaro"   { return POS_STEP; }
"komo"   { return NEG_STEP; }


"agar"			{ return IF; }
"nahito"		{ return ELIF; }
"nahi"			{ return ELSE; }


"khudro"	{ return LT; }
"brihat"	{ return GT; }
"soman"	{ return EQ; }
"brihat_ya_soman"	{ return GEQ; }
"khudro_ya_soman"	{ return LEQ; }
"ashoman"	{ return NEQ; }


"sin"				{ return SIN; }
"cos"				{ return COS; }
"log10"			{ return LOG10; }
"jorbijor"		{ return ODDEVEN; }
"facto"			{ return FACTORIAL;  }
"sobar_boro"	{ return MAX; }
"sobar_choto"	{ return MIN; }
"gosagu"		{ return GCD; }
"losagu"		{ return LCM; }
"moulik"		{ return PRIME; }
"borgomul"		{ return SQRT; }


"likho"      { return WRITE; }
"dekho"         { return READ; }


"\""(.)*"\"" 	{ 
						yylval.string = strdup(yytext);
					  	return STRING;
					}
					
{double} 	   { 
						yylval.flt = atof(yytext);
					  	return DOUBLE;
 					}

"-"?{digits}+  {
						yylval.num = atoi(yytext);
					  	return NUMBER;
					}
"-"?{digits}+?"."{digits}+ {
						yylval.num=atoi(yytext);
						return NUMBER;
					}


[ \t]*	;

"#songjukto"  { return IMPORT; }
{Identifiers}".h" { return HEADER; }
{Identifiers} { 
	yylval.string = strdup(yytext);
	return VARIABLE; 
	}


%%

int yywrap()
{
	return 1;
}

int main()
{
	
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
	return 0;
}