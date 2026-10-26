# C++ Practice Repository

This repository contains beginner level C++ exercises and small examples. The files are grouped by topic so you can explore language fundamentals first and object-oriented programming next.

## Contents

### `C++ Fundamentals/`

Core language and problem-solving practice:

- **Basic** — output, input, data types, strings, and simple calculations
- **Statement** — conditionals, calculator, leap year, prime number, and vowel checks
- **Loop** — number patterns and problems such as factorial, GCD/LCM, palindrome, and digit sums
- **Function** — functions, default arguments, overloading, recursion, and small games
- **Series** — Fibonacci, Lucas, and other number sequences
- **Array** — searching, matrices, transpose, and array-based exercises
- **String** — string length, copy, comparison, case conversion, reverse, and palindrome
- **Pointer** — pointers, pass by value/reference, and swapping
- **Operator** — increment, `sizeof`, and scope resolution

### `OOP/`

Examples and exercises focused on object-oriented programming and related C++ features:

- Classes, objects, constructors, destructors, and encapsulation
- Abstraction, inheritance, and polymorphism
- Function and class templates, and exception handling
- File handling examples for reading and writing text files
- Small student-related exercises/projects

## Compile and run an example

Each `.cpp` file is a separate program or part of a small example. For a standalone file, open a terminal in the repository and compile the file you want with a C++ compiler such as `g++`:

```bash
g++ "C++ Fundamentals/Basic/hello.cpp" -o hello
./hello
```

On Windows, run the generated executable with:

```powershell
g++ "C++ Fundamentals/Basic/hello.cpp" -o hello.exe
./hello.exe
```

Some examples use multiple source files or a header file. Compile all required `.cpp` files for that example together, and run the program from the directory expected by its file operations. For instance, the file-reading example looks for `student.txt` in its current working directory.

## Notes

- This is a learning repository; examples are organized by topic rather than as one combined application.
- A few folders contain generated `.exe` files or sample output files alongside source code.
- Filenames are kept as they appear in the repository, including some spelling inconsistencies.
