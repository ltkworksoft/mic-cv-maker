# C++ Tutorial

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
C++ supports two wats of commenting code:
1. `// line comment`
2. `/* block comment */`

Example:
```c++
/* my second program in C++ 
   with more comments */
   
#include <iostream>

int main() {
    std::cout << "Hello world!";  // prints Hello World!
    std::cout << "I'm a C++ program"; // prints I'm a C++ program
}
```

# Using namespace std
`cout` is part of the standard library, and all the elements in the standard C++ library are declared within what is 
called a *namespace*: the namespace std.
In order to refer to the elements in the `std` namespace a program shall either qualify each and every use of elements 
of the library or introduce visibility of its components. The most typical way to introduce visibility of these components 
is by means of using declarations:
`using namespace std;`

Example:
```c++
// my second program in C++
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World!";
    cout << "I'm a C++ program";
}
```

# Variables and types
## Identifiers
A valid identifier is a sequence of one or more letters, digits, or underscore characters (`_`).

| Not Allowed in identifier     |
|-------------------------------|
| Spaces                        |
| Punctuation marks (. , ; ...) |
| Symbols (@, $, %...)          |

In addition, identifier must always begin with a letter. They can also begin with underscore character (`_`), but such 
identifiers are -on most cases- considered reserved for compiler-specific keywords or external identifiers, as well as 
identifiers containing two successive underscore characters anywhere. In no case can they begin with a digit.

Identifiers created by a programmer cannot match these keywords. The standard reserved keywords that cannot be used for 
programmer created identifiers are:
`alignas, alignof, and, and_eq, asm, auto, bitand, bitor, bool, break, case, catch, char, char16_t, char32_t, class, 
compl, const, constexpr, const_cast, continue, decltype, default, delete, do, double, dynamic_cast, else, enum, 
explicit, export, extern, false, float, for, friend, goto, if, inline, int, long, mutable, namespace, new, noexcept, 
not, not_eq, nullptr, operator, or, or_eq, private, protected, public, register, reinterpret_cast, return, short, 
signed, sizeof, static, static_assert, static_cast, struct, switch, template, this, thread_local, throw, true, 
try, typedef, typeid, typename, union, unsigned, using, virtual, void, volatile, wchar_t, while, xor, xor_eq`

#### Specific compilers may also have additional specific reserved keywords.
#### C++ is a case-sensitive language, that means: the identifier `player` is different from `Player` or `plaYER`

# Fundamental data types
The value of variables are stored somewhere in an unspecified location in the computer memory as zeros and ones. Our 
program does not need to know the exact location where a variable is stored; it can simply refer to it by its name. 
What the program needs to be aware of is the kind of data stored in the variable. It's not the same store a simple 
integer as it is to store a letter or a large floating-point number; event though they are all represented using zeros 
and ones, they are not interpreted in the same way, and in many cases, they don't occupy the same amount of memory.

Fundamental data types can mainly be classified into:
* Character types: they can represent a single character, such as 'A' or '$'
* Numerical integer types: they can store a whole number value such as 7 or 10958. They exist in a variety of sizes, 
and can either be **signed** or **unsigned**
* Floating-point types: they can represent real values, such as 3.14 or 0.01, with different level of precision.
* Boolean type: The boolean type, known in C++ as bool, can only represent two states, true or false.

This table provides an overview of fundamental data types in C++, grouped by category and with notes on their size 
and precision.

| Group                        | Type Names               | Notes on Size / Precision                          |
|------------------------------|--------------------------|----------------------------------------------------|
| **Character Types**          | `char`                   | Exactly one byte in size. At least 8 bits.         |
|                              | `char16_t`               | Not smaller than `char`. At least 16 bits.         |
|                              | `char32_t`               | Not smaller than `char16_t`. At least 32 bits.     |
|                              | `wchar_t`                | Can represent the largest supported character set. |
| **Integer Types (signed)**   | `signed char`            | Same size as `char`. At least 8 bits.              |
|                              | `signed short int`       | Not smaller than `char`. At least 16 bits.         |
|                              | `signed int`             | Not smaller than `short`. At least 16 bits.        |
|                              | `signed long int`        | Not smaller than `int`. At least 32 bits.          |
|                              | `signed long long int`   | Not smaller than `long`. At least 64 bits.         |
| **Integer Types (unsigned)** | `unsigned char`          | Same size as signed counterpart.                   |
|                              | `unsigned short int`     | Same size as signed counterpart.                   |
|                              | `unsigned int`           | Same size as signed counterpart.                   |
|                              | `unsigned long int`      | Same size as signed counterpart.                   |
|                              | `unsigned long long int` | Same size as signed counterpart.                   |
| **Floating-Point Types**     | `float`                  |                                                    |
|                              | `double`                 | Precision not less than `float`.                   |
|                              | `long double`            | Precision not less than `double`.                  |
| **Boolean Type**             | `bool`                   |                                                    |
| **Void Type**                | `void`                   | No storage.                                        |
| **Null Pointer**             | `decltype(nullptr)`      |                                                    |


Type sizes above are expressed in bits; the more bits a type has, the more distinct values it can represent, but as the 
time, also consumes more space in memory:

| Size   | Unique representable values | Notes                        |
|--------|-----------------------------|------------------------------|
| 8-bit  | 256                         | = 2^8                        |
| 16-bit | 65536                       | = 2^16                       |
| 32-bit | 4294967296                  | = 2^32 (~4 billion)          |
| 64-bit | 18446744073709551616        | = 2^64 (~18 billion billion) |

The properties of fundamental types in a particular system and compiler implementation can be obtained by using the 
<u>numeric_limits</u> classes (see standard header [limits](https://cplusplus.com/%3Climits%3E)). If for some reason, 
types of specific sizes are needed, the library defines certain fixed-size type aliases in header 
[cstdint](https://cplusplus.com/%3Ccstdint%3E).

The types described above are collectively known as arithmetic types. But two additional fundamental types exist: `void`, 
which identifies the lack of type; and the type `nullptr`, which is a special type of pointer. Both types will be discussed 
further in a coming chapter about pointers.

# Declaration of variables
C++ is a strongly-typed language, and requires every variable to be declared with its type before its first use.
EXAMPLE:
```c++
int a;
float mynumber;
```

We can declare variables of the same type in a single statement.
Example:
```c++
int a, b, c;
```
This same as
```c++
int a;
int b;
int c;
```

An example of usage:
```c++
// operating with variables;

#include <iostream>
using namespace std;

int main() {
    // declaring variables
    int a, b;
    int result;
    
    // process
    a = 5;
    b = 2;
    a = a + 1;
    result = a - b;
    
    // print out the result:
    cout << result;
    
    // terminate the program1:
    return 0;
}
// output is: 4
```

# Initialization of variables
When variables in the example above are declared, they have an undetermined value until they are assigned a value for 
the first time. But it is possible for a variable to have a specific value from the moment is declared. This is called 
the initialization of the variable.

There are three ways to initialize variables in C++:

| Initialization                   | Form                               | Example       |
|----------------------------------|------------------------------------|---------------|
| c-like (inherited from C)        | `type identifier = initial_value;` | `int x = 0';` |
| constructor                      | `type identifier(initial_value);`  | `int x(0);`   |
| uniform (introduced in C++ 2011) | `type identifier{initial_value};`  | `int x{0};`   |

Example:
```c++
// Initialization of variables

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b(3);
    int c{2};
    int result;
    
    a = a + b;
    result = a - c;
    cout << result;
    
    return 0;
}
```

# Type deduction: auto and decltype
When a new variable is initialized, the compiler can figure out what the type of the variable is automatically by the 
initializer. For this, it suffices to use `auto` as the type specifier for the variable:
```c++
int foo = 0;
auto bar = foo; // the same as: int bar = foo;
```

Variables that are not initialized can also make use of the type deduction with the `decltype` specifier:
```c++
int foo = 0;
decltype(foo) bar; // the same as: int bar;
// Here, bar is declared as having the same type as foo.
```

auto and decltype are powerful features recently added to the language. But the type deduction features they introduce 
are meant to be used either when the type cannot be obtained by other means or when using it improves code readability. 
The two examples above were likely neither of these use cases. In fact, they probably decreased readability, since, when 
reading the code, one has to search for the type of foo to actually know the type of bar.

# Introduction to strings
On of the major strengths of the C++ language is its rich set to compound types, of which the fundamental types are mere 
building blocks.

An example of compound type is the `string` class. Variables of this type are able to store sequences of characters 
such as words or sentences. A very useful feature!

In order to declare and use objects (variables) of this type, the program needs to include the header where the type is 
defined within the standard library (header <string>):
```c++
// my first string
#include <iostream>
#include <string>
using namespace std;

int main() {
  string myString;
  myString = "This is a string";
  cout << myString << endl;
  return 0;
}
```

As with fundamental types, all initialization formats are valid with strings (c-like, constructor or uniform).
#### <u>Note:</u> inserting the `endl` manipulator **end**s the **l**ine (printing a newline character and flushing the 
stream).

# Constants
Constants are expressions with a fixed value.

## Literals
Literals are the most obvious kind of constants. They are used to express particular values within the source code of a 
program. We have already used some in previous chapters to give specific values to variables or to express messages we 
wanted our programs to print out, for example, when we wrote: `a = 5;`, the `5` in this piece of code was a literal 
constant.

Literal constants can be classified into: integer, floating-point, characters, strings, Boolean, pointers, and 
user-defined literals.

In addition to decimal numbers, C++ allows the use of octal numbers (base 8) and hexadecimal (base 16) as literal 
constants. For octal literals, the digits are preceded with a 0 character. And for hexadecimal, they are preceded by the 
characters 0x. For Example:
```c++
75 // decimal
0113 // octal
0x4b // hexadecimal
```

All of these represent the same number: 75.

These literal constants have a type, just like variables. By default, integer literals are of type `int`. However, 
certain suffixes may be appended to an integer literal to specify a different integer type:

| Suffix   | Type modifier |
|----------|---------------|
| u or U   | unsigned      |
| l or L   | long          |
| ll or LL | long Long     |

Unsigned may be combined with any of the other two in any order to form `unsigned long` or `unsigned long long`.
For Example:
```c++
75 // int
75u // unsigned int
75l // long
75ul // unsigned long
75lu // unsigned long
```

#### Floating Point Numerals
They express real values, with decimals and/or exponents. They can include either a decimal point, an e character 
(that expresses "by ten at the Xth height", where X is an integer value that follows the e character), or both a 
decimal point and an e character:
```c++
3.14159    // 3.14159
6.02e23    // 6.02 x 10^23
1.6e-19    // 1.6 x 10^-19
3.0        // 3.0  
```

The default type for floating-point literals is double. Floating-point literals of type float or long double can be 
specified by adding one of the following suffixes:

| Suffix | Type        |
|--------|-------------|
| f or F | float       |
| l or L | long double |

For example:
```c++
3.14159L   // long double
6.02e23f   // float
```

#### Character and string literals
Character and string literals are enclosed in quotes:
```c++
'z'
'p'
"Hello world"
"How do you do?"
```

Here you have a list of the single character escape codes:

| Escape code | Description           |
|-------------|-----------------------|
| \n          | newline               |
| \r          | carriage return       |
| \t          | tab                   |
| \v          | vertical tab          |
| \b          | backspace             |
| \f          | form feed (page feed) |
| \a          | alert (beep)          |
| \'          | single quote (')      |
| \"          | double quote (")      |
| \?          | question mark (?)     |
| \\          | backslash (\)         |

All the character literals and string literals described above are made of characters of type char. A different 
character type can be specified by using one of the following prefixes:

|Prefix|Character type|
|------|--------------|
|u|char16_t|
|U|char32_t|
|L|wchar_t|

Note that, unlike type suffixes for integer literals, these prefixes are case-sensitive: lowercase for char16_t and 
uppercase for char32_t and wchar_t.

For string literals, apart from the above u, U and L, two additional prefixes exist:

| Prefix | Description                                                 |
|--------|-------------------------------------------------------------|
| u8     | The string literal is encoded in the executable using UTF-8 |
| R      | The string literal is a raw string                          |

# Typed constant expressions
Sometimes, it is just convenient to give a name to a constant value:
```c++
const double pi = 3.1415926;
const char tab = '\t';
```

# Preprocessor definitions (#define)
Another mechanism to name constant values is the use of preprocessor definitions. They have the following form:
`#define identifier replacement`

example:
```c++
#include <iostream>
using namespace std;

#define PI 3.14159
#define NEWLINE '\n'

int main ()
{
  double r=5.0;               // radius
  double circle;

  circle = 2 * PI * r;
  cout << circle;
  cout << NEWLINE;

}
```

# Operators
## Assignment operator (=)
example: `x = 5;`<br>
example: `y = 2 + (x = 5);`<br>
example: `x = y = z = 5;`

## Arithmetic operators (+, -, *, /, %)

| operator | description    |
|----------|----------------|
| +        | addition       |
| -        | subtraction    |
| *        | multiplication |
| /        | division       |
| %        | modulo         |

example: `x = 11 % 3; // x = 2`

## Compound assignment (+=, -=, *=, /=, %=, >>=, <<=, &=, ^=, |=)

| expression | equivalent to                                                                                               |
|------------|-------------------------------------------------------------------------------------------------------------|
| `y += x;`  | `y = y + x;`                                                                                                |
| `y -= 5;`  | `y = y - 5;`                                                                                                |
| `y *= 3;`  | `y = y * 3;`                                                                                                |
| `y /= x;`  | `y = y / 3;`                                                                                                |
| `y %= 10`  | `y = y % 10;`                                                                                               |
| `8 >>= 2;` | Right shift and Assign: shift the bits of the variable to the right by 2, `// binary: 8 = 1000 → 2 = 0010`  |
| `8 >>= 2;` | Left shift and Assign: shift the bits of the variable to the left by 2, `// binary: 8 = 1000 → 32 = 100000` |
|            |                                                                                                             |

