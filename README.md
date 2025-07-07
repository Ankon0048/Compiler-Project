# Mini Compiler

This project emphasizes on building a compiler using C language and other tools like flex and bison. The project contains customized language with the help of Context Free Grammer.

## Getting Started

Follow these instructions to get the project up and running on your local machine.

### Prerequisites

Make sure you have the following tools installed on your system:

- Bison
- Flex
- GCC (GNU Compiler Collection)

### Installation

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/your-username/your-repository.git
   cd your-repository

   Then run these following commands on the terminal in the same folder
   
   bison -d 1907048.y

   flex 1907048.l

   gcc 1907048.tab.c lex.yy.c -o output

   ./output
