# Bare Machine Programming

## Prerequisite

- Download and install [Visual Studio Code](https://code.visualstudio.com/docs/setup/setup-overview)

- C/C++ compiler:
  - Mingw: Windows
  - GCC: Linux/macOS
  - clang(optional): macOS

  <details>
  <summary><b>Install Windows Mingw</b></summary>

  1. Download Mingw-w64 via [MSYS2](https://www.msys2.org).
  2. Follow the instruction provided by the website.
    Command summary (run with "MSYS2 MSYS" from Start menu):
      - Update the package database and base packages.

        ```bash
        pacman -Syu
        ```

      - Update the rest of the base packages.

        ```bash
        pacman -Su
        ```

      - Install some tools and mingw-w64 GCC needed for compilation.

        ```bash
        pacman -S --needed base-devel mingw-w64-x86_64-toolchain
        ```

  3. Add the path to Mingw-w64 installation directory `bin` folder to system `PATH`.

  4. Validate installation by calling `mingw32-make` or `gcc`. (Do this after adding  to system `PATH`)

        ```bash
        mingw32-make -v
        ```

      ```bash
      g++ -v
      gdb -v
      ```

  </details>

  <details>
  <summary><b>Install Linux GCC</b></summary>

  1. Update the package-list.

      ```bash
      sudo apt-get update
      ```

  2. Install GNU compiler tools and the GDB debugger.

      ```bash
      sudo apt-get install build-essential gdb
      ```

  3. Optional install manual pages about using GNU/Linux

      ```bash
      sudo apt-get install manpages-dev
      ```

  4. Validate installation

      ```bash
      make -v
      ```

      ```bash
      g++ -v
      gdb -v
      ```

  </details>

  <details>
  <summary><b>Install macOS GCC</b></summary>

  1. Install [Homebrew](https://brew.sh) package manager.

      ```bash
      /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/    HEAD/install.sh)"
      ```

  2. Update Homebrew

      ```bash
      brew update
      brew upgrade
      ```

  3. Install GCC and the GDB debugger via Gomebrew

      ```bash
      brew info gcc
      brew install gcc
      brew install gdb
      ```

  4. Removes previous application/dependency revisions saving considerable space.

      ```bash
      brew cleanup
      ```

  5. Validate installation

      ```bash
      make -v
      ```

      ```bash
      g++ -v
      gdb -v
      ```

  </details>

## Visual Studio Code

A lightweight, open source, and powerful code editor.

## C++

This chapter will cover the basics of C++ programming language in the context of machine programming. However it is not only applied to machine programming, but to programming in general.

### Create New File

1. On your chosen working directory create an empty file titled `hello.cpp` and open it in VS Code.
2. Copy the code bellow

    ```c++
    #include <iostream>

    int main() {
        std::cout << "Hello Sekai!" << std::endl;
        std::cin.get();
    }
    ```

Preprocessor statement (marked by hash `#` symbol) are excecuted before compilation process. In this case the compiler `include` (copy) the content of iostream to the current file.

```c++
#include <iostream>
```

The `main` function is the entry point. The entry point is the **start** of the program. The code are executed line by line (per instruction). The end of a single instruction is marked by semicolon `;`.

```c++
int main();
```

The cout function will print the following string `Hello Sekai!` followed by a endline character `endl`.

The function `cin.get` is included so that the program will not imediately close after execution. This function waits for an character.

### Build From Source

Run the following command in terminal:

```bash
g++ <filename>.cpp
# OR
gcc <filename>.c
```

This will produce an executable `a`. To produce an executable with custom name add the following argument `-o <desired-name>`:

```bash
g++ <filename>.cpp -o <desired-name>
#OR
gcc <filename>.c -o <desired-name>
```

Run the executable by double clicking or:

```bash
cd <program-directory>
./<filename> # add .exe for windows user
```

### Variable

Data on a machine is represented as a variable inside the souce code. A variable is declared by first writing the type followed by the variable name. An example of declaring an interger type variable called number.

```c++
int number;
```

Multiple variable of the same type can be declared together.

```c++
int x, y, z;
```

A variable can be assigned to a value.

```c++
number = 10;
```

An initialization means declaring and assigning at the same time.

```c++
int number = 10;
```

### Data Type

Commonly used data types are `char`, `int`, and `float`.

- `char` is **single** byte, representing a character (ASCII). 
- `int` is **four** bytes, storing an interger.
- `float` is **four** bytes, storing a rational number.

### Branch

```c++
if (/* condition */)
    {
        /* code */
    }
else
    {
        /* code */
    }
```

If the `condition` evaluates to true then the `if` code block will be run, otherwise run the `else` code block.

```c++
else if (/* condition */)
    {
        /* code */
    }
```

Another if statement can be added after an else statement enabling more condition to be evaluated.

### Loop

```c++
for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
```

For loop consist of three arguments:

- initializer, create a new variable that only exist inside the loop
- loop condition, keep running the loop if it is true.
- instruction, will be executed at the end of each iteration.

```c++
while (/* condition */)
    {
        /* code */
    }
```

While loop will run the code block if the condition is true.

### Switch

```c++
switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
```

This is another form of branching. The `switch` statement take an expression and compares it with its matching case. If no match were found the default case is executed.

---

## PlatformIO

PlatformIO is a cross-platform compiler and IDE for embedded systems. Available as an extension to VS Code or downloaded as a command line application.

### Create New Project

1. Using the command pallete `ctrl+shift+p`, select `PlatformIO: Home`.
2. In PIO Home menu select `New Project`.
3. Select a development board from the list and choose project folder location.

### Building Project

1. Using the command pallete `ctrl+shift+p`, select `PlatformIO: Build`. This will compile the source code.
2. To upload use the command pallete `ctrl+shift+p`, select `PlatformIO: Upload`.
