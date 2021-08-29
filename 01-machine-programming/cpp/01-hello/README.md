# Hello Sekai

## Compiled vs Interpreted

C++ is a compiled language, the sources needs to be compiled to machine code before it can be run. On the other hand interpreted language such as Python calls the interpreter to execute the code line by line during runtime.

## Create New File

When creating new source file, C++ commonly uses `.cpp` extention while C uses `.c` extension. The same can be said with header file which contain declaration used in the sources. Although both `.hpp` and `.h` were available, it is okay to use `.h` for both C++ and C code. But don't try to feed header containing C++ statement into C compiler.

Here is an example of `hello.cpp`, this program prints a single `string` to the terminal and waits for a character to be entered.

```c++
#include <iostream>

int main() {
    std::cout << "Hello Sekai!" << std::endl;
    std::cin.get();
}
```

The main focus of this codeblock are the preprocessor statement and the entry point. The preprocessor statement (marked by `#`) are excecuted before compilation, in this case `include` means include/copy the contents of the `iostream` header file. Entry points indicates where should the program begin executing, the function `int main()` acts in such manner.

## Build From Source

As a compiled language C++ needs to build the sources into executable binaries. To do this we need to run the compiler `gcc` for C code, `g++` for C++ code.

```bash
g++ {source-files}
```

Multiple source files can be inserted into the argument separated by whitespace to be compiled into a single binary. The default output name is `a`.To change the output name use the `-o`.

```bash
g++ {source-files} -o {output}
```

## Running the Build

Just double-click or type the name in the terminal. Make sure to `cd` change directory to where the file is.
