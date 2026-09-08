# guess-the-number.c
# Guess the Number

A simple console-based number guessing game written in C.

The program generates a random number and asks the player to guess it. The game keeps track of the number of attempts until the correct number is guessed.

## Features

* Random number generation
* Interactive console input
* Attempt counter
* Typewriter-style welcome message
* Simple and beginner-friendly C implementation

## How It Works

1. The program generates a random number.
2. The player enters a guess.
3. The program checks whether the guess is correct.
4. If the guess is incorrect, the player can try again.
5. The game ends when the correct number is guessed.
6. The total number of attempts is displayed.

## Technologies Used

* C
* Standard C libraries
* Windows API (`windows.h`)

## How to Run

### Using GCC

Compile the program:

```bash
gcc main.c -o guess

```

Then run it:

```bash
guess.exe
```

### Using an IDE

Open `main.c` in a C-compatible IDE such as Code::Blocks, Dev-C++, or Visual Studio Code with a C compiler installed, then compile and run the program.

## Example

```text
Welcome to Guess the Number!

Guess The Number : 50
50 was not the number! Trial number : 1!

Guess The Number : 129

You have guessed the number! It took you a total of 2 try(s)!
```

## What I Learned

This project helped me practice:

* Variables and data types
* `if` / `else` statements
* `while` loops
* `for` loops
* `scanf()`
* Strings and the null character (`\0`)
* Random number generation using `rand()` and `srand()`
* Basic console output formatting
* Using `Sleep()` to create a typewriter effect

## Future Improvements

Planned improvements include:

* [ ] Add difficulty levels
* [ ] Add higher/lower hints
* [ ] Add input validation
* [ ] Improve the console interface

## Status

**Version 1.0 — Basic Guessing Game**

This project will be updated as I continue learning C.
