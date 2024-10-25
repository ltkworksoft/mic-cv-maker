# What is a compiler?
Computers understand only one language and that language consists of sets of instructions made of "1" and "0"s. It's 
called: **machine language**.
A single instruction to a computer could look like this:

|       |          |
|-------|----------|
| 00000 | 10011110 |

It's very hard to program directly in machine language. So to make it easier, high level languages have been developed.
Example of a code in C++:
```c++
int a, b, sum;

cin >> a;
cin >> b;
cout << sum << endl;
```

Because computer can only understand **machine language**, programs written in human understanding language should be 
re-written (translated) into machine language. This is done by special programs called compilers, interpreters or 
assemblers that are built into the various programming applications.

C++ is designed to be a compiled language, meaning that it is generally translated into machine language that can 
be understood directly by the system, making the generated program highly efficient. Fot that, a set of tools are needed, 
known as the development toolchain, whose core are a compiler and its linker.

# Console Program
Console programs are programs that use text to communicate with the user and the environment, such as printing text to 
the screen or reading input from a keyboard. The way to compile console programs depends on the particular tool you are
using.

# Structure of a program
A first program example:
```c++
// my first program in c++
#include <iostream>

int main()
{
    std::cout << "Hello World!";
}
```

Let's analyse the code:
- Line 1: `// my first program in c++`<br>
Two slash signs indicate that the rest of the line is a comment inserted by the programmer but which has no effect on 
the behavior of the program. They are used usually to leave some explanations concerning the code or program.
- Line 2: `#include <iostream>`<br>
Lines beginning with a hash sign (#) are directives read and interpreted by what is known as the **preprocessor**. They 
are special lines interpreted before compilation of the program itself begins. In this case, the directive 
`#include <iostream>` instructs the preprocessor to include a section of standard C++ code, known as **header iostream**, 
that allows to perform standard input and output operations, such as writing the output of this program (Hello World) to 
the screen.
- Line 3: Blank Line
- Line 4: `int main()`<br>
This line initiates the declaration of a function. Function is a group of code statements which are given a name: in this 
case, this gives the name "main" to the group of code statements that follow. Its type an integer (int).
- Line 5 and 7: `{` and `}`<br>
The open brace (`{`) indicates the beginning of main's function definition, and the closing brace (`}`) indicates its end.
- Line 6: `std::cout << "Hello World!"`<br>
This line is a C++ statement. A statement is an expression that can actually produce some effect. It is the meat of a 
program, specifying its actual behavior. Statements are executed in the same order that they appear within a function's 
body.
This statement has three parts: 
  - First, `std::cout`, which identifies the **st**andar**d** **c**haracter **out**put device (usually, this is the 
  computer screen).
  - Second, the insertion operator (`<<`), which indicates that the follows is inserted into `std::cout`.
  - Finally, a sentence within quotes (`"Hello World!"`), is the content inserted into the standard output.
<br>

Notice that statement ends with a semicolon (;). This character marks the end of the statement, just as the period ends 
a sentence in English. All C++ statements must ends with semicolon. **One of the most common syntax errors in C++ is 
forgetting end a statement with a semicolon.
<br>

The program has been structured in different lines and properly indented, in order to make it easier to understand for 
the humans reading it. But C++ does not have strict rules on indentation or on how to split instructions in different 
lines. For example, instead of writing the code above, we can also have the same result with:
```c++
// my first program in c++
#include <iostream>
int main() { std::cout << "Hello World!"; }
```

# Comments
