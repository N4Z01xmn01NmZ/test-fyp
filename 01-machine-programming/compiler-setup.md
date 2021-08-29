# Compiler Setup

## Install Windows Mingw

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

## Install Linux GCC

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

## Install macOS GCC

1. Install [Homebrew](https://brew.sh) package manager.

    ```bash
    /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrewinstall/    HEAD/install.sh)"
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
