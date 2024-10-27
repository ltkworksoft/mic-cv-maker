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
| `8 &= 2;`  | Bitwise AND Assign `// binary: 8 = 1000 and 2 = 0010, result is 0`                                          |
| `8 ^= 2;`  | Bitwise XOR Assign `// binary: 8 = 1000 and 2 = 0010, result is 1010 = 10`                                  |
| `8 \|= 2;` | Bitwise OR Assign `// binary: 8 = 1000 and 2 = 0010, result is 1010 = 10`                                   |                                                                                                             |

## Increment and decrement (++, --)
Some expression can be shortened even more: the increase operator (++) and the decrease operator (--) increase or reduce 
by one the value stored in a variable. They are equivalent to +=1 and to -=1, respectively. Thus:
```c++
++x;
x += 1;
x = x + 1;
```

A peculiarity of this operator is that it can be used both as a prefix and as a suffix. That means that it can be 
written either before the variable name (++x) or after it (x++). Although in simple expressions like x++ or ++x, 
both have exactly the same meaning; in other expressions in which the result of the increment or decrement operation 
is evaluated, they may have an important difference in their meaning: In the case that the increase operator is used 
as a prefix (++x) of the value, the expression evaluates to the final value of x, once it is already increased. 
On the other hand, in case that it is used as a suffix (x++), the value is also increased, but the expression evaluates 
to the value that x had before being increased. Notice the difference:

| Example 1                     | Example 2                     |
|-------------------------------|-------------------------------|
| x = 3;                        | x= 3;                         |
| y = ++x;                      | y = x++;                      |
| // x contains 4, y contains 4 | // x contains 4, y contains 3 |

## Relational and comparison operators (==, !=, >, <, >=, <=)
| operator | description              |
|----------|--------------------------|
| ==       | Equal to                 |
| !=       | No equal to              |
| <        | less than                |
| >        | greater than             |
| <=       | less than or equal to    |
| >=       | greater than or equal to |

Some Examples:
```c++
(7 == 5)     // evaluates to false
(5 > 4)      // evaluates to true
(3 != 2)     // evaluates to true
(6 >= 6)     // evaluates to true
(5 < 5)      // evaluates to false
(a == 5)     // evaluates to false, since a is not equal to 5
(a*b >= c)   // evaluates to true, since (2*3 >= 6) is true
(b+4 > a*c)  // evaluates to false, since (3+4 > 2*6) is false
((b=2) == a) // evaluates to true 
```

## Logical operators (!, &&, ||)
The operator ! is the C++ operator for the Boolean operation NOT. It has only one operand, to its right, and inverts 
it, producing false if its operand is true, and true if its operand is false. Basically, it returns the opposite 
Boolean value of evaluating its operand. For example:
```c++
!(5 == 5)   // evaluates to false because the expression at its right (5 == 5) is true
!(6 <= 4)   // evaluates to true because (6 <= 4) would be false
!true       // evaluates to false
!false      // evaluates to true 
```

## Conditional ternary operator (?)
The conditional operator evaluates an expression, returning one value if that expression evaluates to true, 
and a different one if the expression evaluates as false. Its syntax is:
*condition ? result1 : result2*

```c++
7==5 ? 4 : 3     // evaluates to 3, since 7 is not equal to 5.
7==5+2 ? 4 : 3   // evaluates to 4, since 7 is equal to 5+2.
5>3 ? a : b      // evaluates to the value of a, since 5 is greater than 3.
a>b ? a : b      // evaluates to whichever is greater, a or b. 
```

For Example:
```c++
// conditional operator
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    a = 2;
    b = 7;
    c = (a > b) ? a : b;
    cout << c << '\n';
}
```

## Comma operator (,)
The comma operator (,) is used to separate two or more expressions that are included where only one expression is 
expected. When the set of expressions has to be evaluated for a value, only the right-most expression is considered.

For example, the following code:

`a = (b=3, b+2);`

would first assign the value 3 to b, and then assign b+2 to variable a. So, at the end, variable a would contain the 
value 5 while variable b would contain value 3.

## Bitwise operators (&, |, ^, ~, <<, >>)

| operator | asm equivalent | description                     |
|----------|----------------|---------------------------------|
| &        | AND            | Bitwise AND                     |
| \|       | OR             | Bitwise OR                      |
| ^        | XOR            | Bitwise exclusive OR            |
| ~        | NOT            | Unary complement (bit inversion |
| <<       | SHL            | Shift bits left                 |
| >>       | SHR            | Shift bits right                |

## Explicit type casting operator
Type casting operators allow to convert a value of a given type to another type. There are several ways to do this in 
C++. The simplest one, which has been inherited from the C language, is to precede the expression to be converted by 
the new type enclosed between parentheses (()):

```c++
int i;
float f = 3.14;
i = (int) f; // i = int (f);
```

## sizeof
This operator accepts one parameter which can be either a type or a variable, and returns the size in bytes of that 
type or object:
`x = sizeof(char);`
Here, x is assigned the value 1, because char is a type with a size of one byte.
The value returned by sizeof is a compile-time constant, so it is always determined before program execution.

## Precedence of operators
This table outlines the precedence of operators in C++ from highest to lowest.

| Level | Precedence Group             | Operator                          | Description                      | Grouping                      |
|-------|------------------------------|-----------------------------------|----------------------------------|-------------------------------|
| 1     | Scope                        | `::`                              | Scope qualifier                  | Left-to-right                 |
| 2     | Postfix (unary)              | `++`, `--`                        | Postfix increment / decrement    | Left-to-right                 |
|       |                              | `()`                              | Functional forms                 |                               |
|       |                              | `[]`                              | Subscript                        |                               |
|       |                              | `.` , `->`                        | Member access                    |                               |
| 3     | Prefix (unary)               | `++`, `--`                        | Prefix increment / decrement     | Right-to-left                 |
|       |                              | `~`, `!`                          | Bitwise NOT / Logical NOT        |                               |
|       |                              | `+`, `-`                          | Unary prefix                     |                               |
|       |                              | `&`, `*`                          | Reference / Dereference          |                               |
|       |                              | `new`, `delete`                   | Allocation / Deallocation        |                               |
|       |                              | `sizeof`                          | Size / Parameter pack            |                               |
|       |                              | `(type)`                          | C-style type casting             |                               |
| 4     | Pointer-to-member            | `.*`, `->*`                       | Access pointer                   | Left-to-right                 |
| 5     | Arithmetic: scaling          | `*`, `/`, `%`                     | Multiply, divide, modulo         | Left-to-right                 |
| 6     | Arithmetic: addition         | `+`, `-`                          | Addition, subtraction            | Left-to-right                 |
| 7     | Bitwise shift                | `<<`, `>>`                        | Shift left, shift right          | Left-to-right                 |
| 8     | Relational                   | `<`, `>`, `<=`, `>=`              | Comparison operators             | Left-to-right                 |
| 9     | Equality                     | `==`, `!=`                        | Equality / Inequality            | Left-to-right                 |
| 10    | And                          | `&`                               | Bitwise AND                      | Left-to-right                 |
| 11    | Exclusive or                 | `^`                               | Bitwise XOR                      | Left-to-right                 |
| 12    | Inclusive or                 | `                                 | `                                | Bitwise OR                    | Left-to-right   |
| 13    | Conjunction                  | `&&`                              | Logical AND                      | Left-to-right                 |
| 14    | Disjunction                  | `                                 |                                  | `                             | Logical OR                               | Left-to-right   |
| 15    | Assignment-level expressions | `=`, `*=`, `/=`, `%=`, `+=`, `-=` | Assignment / Compound assignment | Right-to-left                 |
|       |                              | `>>=`, `<<=`, `&=`, `^=`, `       | =`                               | Compound assignment operators |                 |
|       |                              | `?:`                              | Conditional operator             |                               |
| 16    | Sequencing                   | `,`                               | Comma separator                  | Left-to-right                 |

# Basic Input/Output

C++ uses a convenient abstraction called streams to perform input and output operations in sequential media such as the 
screen, the keyboard or a file. A stream is an entity where a program can either insert or extract characters to/from. 
There is no need to know details about the media associated to the stream or any of its internal specifications. All we 
need to know is that streams are a source/destination of characters, and that these characters are provided/accepted 
sequentially (i.e., one after another).

| stream | description                      |
|--------|----------------------------------|
| cin    | standard input stream            |
| cout   | standard output stream           |
| cerr   | standard error (output) stream   |
| clog   | standard logging (output) stream |

## Standard output (cout)
```c++
cout << "Outpur sentence";
cout << 120;
```

## Standard input (cin)
```c++
int age;
cin >> age;
```

In a code example:
```c++
// i/o example
# include <iostream>
using namespace std;
int main()
{
    int i;
    cout << "Please enter a integer value: ";
    cin >> i;
    cout << "The value you entered is " << i << " and its double is " << i*2 << "." << endl;
}
```

We can also write
```c++
cin >> a >> b;
```

in place of:
```c++
cin >> a;
cin >> b;
```

## cin and strings
The extraction operator can be used on `cin` to get strings of characters in the same way as with fundamental data types:
```c++
string mystring;
cin >> mystring;
```
However, `cin` extraction always considers spaces (whitespaces, tabs, new-line) as terminating the value being extracted, 
and thus extracting a string means to always extract a single word, not a phrase or an entire sentence.
To get an entire line from `cin`, there exists a function, called `getline`, that takes the stream (`cin`) as first 
argument, and the string variable as second. For example:
```c++
// cin with strings
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystr;
    cout << "What's your name? ";
    getline(cin, mystr);
    cout << "Hello " << mystr << ".\n";
    cout << "What is yout favorite team? ";
    getline(cin, mystr);
    cout << "I like " << mystr << " too!\n";
    return 0;
}
```

## stringstream
The standard header <sstream> defines a type called <u>stringstream</u> that allows a string to be treated as a stream, 
and thus allowing extraction or insertion operations from/to strings in the same way as they are performed on `cin` and 
`cout`. This feature is useful to convert strings to numerical values and vice versa.
```c++
string mystr("1204");
int myint;
stringstream(mystr) >> myint;
```
Example
```c++
//stringstreams
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
  string mystr;
  float price = 0;
  int quantity = 0;
  
  cout << "Enter price: ";
  getline(cin, mystr);
  stringstream(mystr) >> price;
  cout << "Enter quantity: ";
  getline(cin, mystr);
  stringstream(mystr) >> quantity;
  cout << "Total price: " << price * quantity << endl;
  return 0;
}
```

# Statements and flow control
## Selection statements: if and else
*if (condition) statement*

Examples
```c++
if (x == 100)
  cout << "x is 100";
```
```c++
if (x == 100) {
    cout << "x is ";
    cout << x;
}
```
```c++
if (x > 0)
  cout << "x is positive";
else if (x < 0)
  cout << "x is negative";
else
  cout << "x is 0";
```

## Iteration statements (loops)
### while Loop
example:
```c++
// custom countdown using while
#include <iostream>
using namespace std;

int main() {
    int n = 100;
    
    while (n > 0) {
        cout << n << ", ";
        --n;
    }
    
    cout << "liftoff!\n";
}
```

### do-while loop
It behaves like a while-loop, except that condition is evaluated after the execution of statement instead of before, 
guaranteeing at least one execution of statement, even if condition is never fulfilled. For example, the following 
example program echoes any text the user introduces until the user enters goodbye:

example:
```c++
// echo machine
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    do {
        cout << "Enter text: ";
        getline(cin, str);
        cout << "Yout entered: " << str << '\n';
    } while (str != "goodbye");
}
```

### for loop
example:
```c++
// countdown using a for loop
#include <iostream>
using namespace std;

int main() {
    for (int i = 10; n > 0; --i) {
        cout << i << ", ";
    }
    cout << "Good Bye!" << endl;
}
```

Because each of the fields is executed in a particular time in the life cycle of a loop, it may be useful to execute 
more than a single expression as any of initialization, condition, or statement. Unfortunately, these are not statements, 
but rather, simple expressions, and thus cannot be replaced by a block. As expressions, they can, however, make use of 
the comma operator (,): This operator is an expression separator, and can separate multiple expressions where only one 
is generally expected. For example, using it, it would be possible for a for loop to handle two counter variables, 
initializing and increasing both:
```c++
for (int n=0, i=100 ; n!=i ; ++n, --i )
{
   // whatever here...
}
```

This loop will execute 50 times if neither n or i are modified within the loop:
n starts with a value of 0, and i with 100, the condition is n!=i (i.e., that n is not equal to i). Because n is 
increased by one, and i decreased by one on each iteration, the loop's condition will become false after the 50th 
iteration, when both n and i are equal to 50.

### Range-based for loop
This kind of for loop iterates over all the elements in range, where declaration declares some variable able to take 
the value of an element in this range.
`for ( declaration : range ) statement;`

example:
```c++
// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str{"Hello!"};
    for (char : str) {
      cout << "[" << char << "]";
    }
    cout << endl;
}
```

Note how what precedes the colon (:) in the for loop is the declaration of a char variable 
(the elements in a string are of type char). We then use this variable, c, in the statement block to represent 
the value of each of the elements in the range.

This loop is automatic and does not require the explicit declaration of any counter variable.

Range based loops usually also make use of type deduction for the type of the elements with auto. Typically, the 
range-based loop above can also be written as:

```c++
for (auto c : str)
  cout << "[" << c <<"]"
```

## Jump statements
### break statement
```c++
// break loop example
#include <iostream>
using namespace std;

int main() {
    for (int n = 10; n > 0; n--) {
        cout << n << ", ";
        if (n == 3) {
            cout << "countdown aborted!";
            break;
        }
    }
}
```

### continue statement
```c++
// continue loop example
#include <iostream>
using namespace std;

int main() {
    for (int n = 10; n > 0; n--) {
        if (n == 5) continue;
        cout << n << ", "
    }
    cout << "Stop!\n";
}
```

### goto statement
```c++
#include <iostream>
using namespace std;

int main() {
    int n = 10;
myLabel:
    cout << n << ", ";
    n--;
    if (n > 0) {
        goto myLabel;
    }
    cout << "Good Bye!" << endl;

    return 0;
}

```

## Another selection statement: switch
```c++
switch (x) {
  case 1:
  case 2:
  case 3:
    cout << "x is 1, 2 or 3";
    break;
  default:
    cout << "x is not 1, 2 nor 3";
}
```

# Functions
Functions allow to structure programs in segments of code to perform individual tasks.
In C++, a function is a group of statements that is given a name, and which can be called from some point of the 
program. The most common syntax to define a function is:

`type name (parameter1, parameter2, ...) { statements }`

example:
```c++
// function example
#include <iostream>
using namespace std;

int addition(int a, int b) {
    int r;
    r = a + b;
    return r;
}


int main() {
    int z;
    z = addition(5, 3);
    cout << "The resultis " << z;
}
```

## Functions with no type. The use of void
```c++
// void function example
// functions that does not return any value
#include <iostream>
using namespace std;

void printMessage() { // or also void printMessage(void) ...
  cout << "Bonjour!" << endl;
}

int main() {
    printMessage();
}
```

## The return value of main
You may have noticed that the return type of `main` is `int`, but most example in this and earlier chapters did not actually 
return any value from `main`. `return 0;`

Note that this only applies to function main for historical reasons. All other functions with a return type shall end 
with a proper return statement that includes a return value, even if this is never used.

When main returns zero (either implicitly or explicitly), it is interpreted by the environment as that the program 
ended successfully. Other values may be returned by main, and some environments give access to that value to the 
caller in some way, although this behavior is not required nor necessarily portable between platforms. The values 
for main that are guaranteed to be interpreted in the same way on all platforms are:

| value        | description                                                                            |
|--------------|----------------------------------------------------------------------------------------|
| 0            | The program was successful                                                             |
| EXIT_SUCCESS | The program was successful (same as above). This value is defined in header <cstdlib>. |
| EXIT_FAILURE | The program failed. This value is defined in header <cstdlib>                          |

Because the implicit return 0; statement for main is a tricky exception, some authors consider it good practice to 
explicitly write the statement.

## Arguments passed by value and by reference
In the functions seen earlier, arguments have always been passed by value. This means that, when calling a function, 
what is passed to the function are the values of these arguments on the moment of the call, which are copied into the 
variables represented by the function parameters. For example, take:
```c++
int x = 5, y = 3, z;
z = addition(x, y);
```

In this case, function addition is passed 5 and 3, which are copies of the values of x and y, respectively. 
These values (5 and 3) are used to initialize the variables set as parameters in the function's definition, but any
modification of these variables within the function has no effect on the values of the variables x and y outside it, 
because x and y were themselves not passed to the function on the call, but only copies of their values at that moment.

In certain cases, though, it may be useful to access an external variable from within a function. To do that, 
arguments can be passed by reference, instead of by value. For example, the function duplicate in this code duplicates 
the value of its three arguments, causing the variables used as arguments to actually be modified by the call:

```c++
// passing prameters by reference
#include <iostream>
using namespace std;

void duplicate(int& a, int& b, int& c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

int main() {
  int x = 1, y = 3, z = 7;
  duplicate(x, y, z);
  cout << "x=" << x << ", y=" << y << ", z=" << z;
 // output is: x=2, y=6, z=14
  
  return 0;
}
```

## Efficiency considerations and const references
Arguments by reference do not require a copy. The function operates directly on (aliases of) the strings passed as 
arguments, and, at most, it might mean the transfer of certain pointers to the function. In this regard, the version 
of concatenate taking references is more efficient than the version taking values, since it does not need to copy 
expensive-to-copy strings.

On the flip side, functions with reference parameters are generally perceived as functions that modify the arguments 
passed, because that is why reference parameters are actually for.

The solution is for the function to guarantee that its reference parameters are not going to be modified by this 
function. This can be done by qualifying the parameters as constant:

```c++
string concatenate (const string& a, const string& b) {
    return a + b;
}
```

## Inline functions
Calling a function generally causes a certain overhead (stacking arguments, jumps, etc...), and thus for very short 
functions, it may be more efficient to simply insert the code of the function where it is called, instead of 
performing the process of formally calling a function.

Preceding a function declaration with the inline specifier informs the compiler that inline expansion is preferred 
over the usual function call mechanism for a specific function. This does not change at all the behavior of a 
function, but is merely used to suggest the compiler that the code generated by the function body shall be inserted 
at each point the function is called, instead of being invoked with a regular function call.

For example, the concatenate function above may be declared inline as:
```c++
inline string concatenate(const string& a, const string& b) {
    return a + b;
}
```
It's good for small functions.

## Declaring functions
```c++
// declaring functions prototypes
#include <iostream>
using namespace std;

void odd(int x);
void even(int x);

int main() {
    int i;
    do {
        cout << "Please, enter number (0 to exit): ";
        cin >> i;
        odd(i);
    } while(i!=0);
    return 0;
}

void odd(int x) {
    if ((x % 2) != 0) cout << "It is odd.\n";
    else even(x);
}

void even(int x) {
    if ((x % 2) == 0) cout << "It is even.\n";
    else odd(x);
}
```

## Recursivity
Recursivity is the property that functions have to be called by themselves. It is useful for some tasks, such as 
sorting elements, or calculating the factorial of numbers. For example, in order to obtain the factorial of a 
number (n!) the mathematical formula would be:

`n! = n * (n-1) * (n-2) * (n-3) ... * 1`
More concretely, 5! (factorial of 5) would be:

5! = 5 * 4 * 3 * 2 * 1 = 120
And a recursive function to calculate this in C++ could be:
```c++
// factorial calculator
#include <iostream>
using namespace std;

long factorial(long a) {
    if (a > 1) {
        return (a * factorial(a - 1))
    } else {
        return 1;
    }
}

int main() {
    long number = 9;
    cout << number << "!" << factorial(number);
    return 0;
}
```

# Overloads and templates
## overloaded functions
In C++, two different functions ca have the same name if their parameters are different; either because, they have 
different number of parameters or because any of their parameters are of a different type. For example:
```c++
// overloading functions
#include <iostream>
using namespace std;

int operate(int a, int b) {
    return a * b;
}

double operate(double a, double b) {
    return a / b;
}

int main() {
    int x = 5, y = 2;
    double n = 5.0, m = 2.0;
    cout << operate(x, y) << endl;
    cout << operate(n, m) << endl;
    
    return 0;
}
```

## Function templates
template <template-parameters> function-declaration
The template parameters are a series of parameters separated by commas. These parameters can be generic template 
types by specifying either the class or typename keyword followed by an identifier. This identifier can then be used 
in the function declaration as if it was a regular type. For example, a generic sum function could be defined as:
```c++
template <class SomeType>
SomeType sum(SomeType a, SomeType b) {
    return a + b;
}
```

```c++
// function templates
#include <iostream>
using namespace std;

template<class T>
T sum(T a, T b) {
    T result;
    result = a + b;
    return result;
}

int main() {

    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i, j);
    h = sum<double>(f, g);

    cout << k << endl;
    cout << h << endl;

    return 0;
}
```

Templates are a powerful and versatile feature. They can have multiple template parameters, and the function can still 
use regular non-templated types. For example:
```c++
// function templates
#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal (T a, U b)
{
  return (a==b);
}

int main ()
{
  if (are_equal(10,10.0))
    cout << "x and y are equal\n";
  else
    cout << "x and y are not equal\n";
  return 0;
}
```

## Non-Type template arguments
The template parameters can not only include types introduced by class or typename, but can also include expressions 
of a particular type:
```c++
// template arguments
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply (T val)
{
  return val * N;
}

int main() {
  std::cout << fixed_multiply<int,2>(10) << '\n';
  std::cout << fixed_multiply<int,3>(10) << '\n';
}
```

# Name visibility
## Scopes
```c++
int foo;        // global variable

int some_function ()
{
  int bar;      // local variable
  bar = 0;
}

int other_function ()
{
  foo = 1;  // ok: foo is a global variable
  bar = 2;  // wrong: bar is not visible from this function
}
```
In each scope, a name can only represent one entity. For example, there cannot be two variables with the same name in 
the same scope:
```c++
int some_function ()
{
  int x;
  x = 0;
  double x;   // wrong: name already used in this scope
  x = 0.0;
}
```

The visibility of an entity with block scope extends until the end of the block, including inner blocks. 
Nevertheless, an inner block, because it is a different block, can re-utilize a name existing in an outer scope to 
refer to a different entity; in this case, the name will refer to a different entity only within the inner block, 
hiding the entity it names outside. While outside it, it will still refer to the original entity. For example:

```c++
// inner block scopes
#include <iostream>
using namespace std;

int main () {
  int x = 10;
  int y = 20;
  {
    int x;   // ok, inner scope.
    x = 50;  // sets value to inner x
    y = 50;  // sets value to (outer) y
    cout << "inner block:\n";
    cout << "x: " << x << '\n';
    cout << "y: " << y << '\n';
  }
  cout << "outer block:\n";
  cout << "x: " << x << '\n';
  cout << "y: " << y << '\n';
  return 0;
}
```

## Namespaces
Namespaces are particularly useful to avoid name collisions. For example:
```c++
// namespaces
#include <iostream>
using namespace std;

namespace foo {
    int value() { return 5; }
}

namespace bar {
    const double pi = 3.1416;
    double value() {
        return 2 * pi;
    }
}

int main() {
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    return 0;
}
```

## using
The keyword using introduces a name into the current declarative region (such as a block), thus avoiding the need to 
qualify the name. For example:
```c++
// using
#include <iostream>
using namespace std;

namespace first {
    int x = 5;
    int y = 10;
}

namespace second {
    double x = 3.1416;
    double y = 2.7183;
}

int main() {
    using first::x;
    using second::y;

    cout << x << endl;
    cout << y << endl;
    cout << first::y << endl;
    cout << second::x << endl;
    return 0;
}
```

Another Example

```c++
// using namespace example
#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
}

namespace second
{
  double x = 3.1416;
}

int main () {
  {
    using namespace first;
    cout << x << '\n';
  }
  {
    using namespace second;
    cout << x << '\n';
  }
  return 0;
}
```

## Namespace aliasing
Existing namespaces can be aliased with new names, with the following syntax:
`namespace new_name = current_name;`

## The std namespace
All entities (variables, types, constants, and functions) of the standard C++ library are declared within the `std` 
namespace. Most examples in these tutorials, in fact, include the following line:
`using namespace std;`


# Arrays
An array is a series of elements of the same type placed in contiguous memory locations that can be individually 
referenced by adding an index to a unique identifier.

For example, an array containing 5 integer values of type int called foo could be represented as:
foo |0  |  1|  2|  3|  4|

    |int|int|int|int|int|

## Initializing arrays
`int foo[5] = {16, 2, 5, 77, 40}`;
This statement declares an array that can be represented like this:

|0 |1|2|3 |4 |

|16|2|5|77|40|

`int foo[5] = {1, 2, 3} // [1][2][3][0][0]`

## Accessing the values of an array
`foo[2] = 75;` will store 75 in the element of `foo`.

## Multidimensional arrays
Multidimensional arrays can be described as "arrays of arrays".
example: `int jimmy[3][5]` is an array of 3 rows and 5 columns

|   | 0 | 1 | 2 | 3 | 4 |
|---|---|---|---|---|---|
| 0 |   |   |   |   |   |
| 1 |   |   |   | x |   |
| 2 |   |   |   |   |   |

la position de x est `jimmy[1][3];`

## Arrays as parameters
example
```c++
// arrays as parameters
#include <iostream>
using namespace std;

void printArray(int arg[], const int length) {
    for (int i = 0; i < length; ++i) {
        cout << arg[i] << " ";
    }
    cout << endl;
}

int main() {
    int firstArray[] = {5, 10, 15};
    int secondArray[] = {2, 4, 6, 8, 10};
    printArray(firstArray, 3);
    printArray(secondArray, 2);
}
```

# Character sequences
Example: `char foo [20]`, is an array that can store up to 20 elements of type `char`.

Therefore, this array has a capacity to store sequences of up to 20 characters. But this capacity does not need to be 
fully exhausted: the array can also accommodate shorter sequences. For example, at some point in a program, either 
the sequence "Hello" or the sequence "Merry Christmas" can be stored in foo, since both would fit in a sequence with 
a capacity for 20 characters.

By convention, the end of strings represented in character sequences is signaled by a special character: 
the null character, whose literal value can be written as '\0' (backslash, zero).
