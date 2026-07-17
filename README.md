# C Calculator

A simple command-line calculator written in C.

This repository contains a small C program that performs basic arithmetic operations (addition, subtraction, multiplication, and division). It's intended as a learning project for practicing C programming and working with standard input/output.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Power
- Square
- Cube
- Square Root
- Cube Root
- Input validation
- Division by zero handling
- Repeat calculations using a loop 

- Clear, easy-to-read code suitable for beginners

## Prerequisites

- A C compiler such as GCC
- A POSIX-compatible shell (Linux, macOS, WSL on Windows) or an appropriate terminal on Windows

## Build

Compile the program using GCC. If your main source file is `main.c`, run:

```bash
gcc -o calculator main.c
```

If the project has multiple `.c` files, you can compile them all at once:

```bash
gcc -o calculator *.c
```

If your source file has a different name, replace `main.c` with the correct filename.

## Run

Start the calculator from the command line:

```bash
./calculator
```

Then follow the on-screen prompts to enter numbers and operations. Example (interactive session):

```
$ ./calculator
Enter first number: 12
Enter operator (+ - * /): *
Enter second number: 3
Result: 36
```

If your implementation accepts command-line expressions or arguments, use those instead — check the source code for supported usage.

## Example

A simple example workflow:

1. Build: `gcc -o calculator main.c`
2. Run: `./calculator`
3. Enter number 1: 9
   Enter operation: s
   Square Root = 3.00

## Contributing

Contributions, suggestions, and bug reports are welcome. To contribute:

1. Fork the repository
2. Create a feature branch (git checkout -b feature/your-feature)
3. Commit your changes
4. Open a pull request describing your changes

Please keep changes small and focused. If you're unsure about design decisions, open an issue to discuss first.

## Contact

Created by @Arhan-tech786. For questions or feedback, open an issue or contact me through my GitHub profile: https://github.com/Arhan-tech786
