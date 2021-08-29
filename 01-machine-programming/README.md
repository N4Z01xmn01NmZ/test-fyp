<<<<<<< HEAD
# Machine Programming

## Prerequisite

- Visual Studio Code
- C/C++ Compiler
    - Linux/macOS: GCC
    - Windows: Mingw
=======
# Bare Machine Programming

## Prerequisite

[Slide](./slide.html)

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
>>>>>>> f1e85d1e1573c7b4ee6ad70225b3578d32b6cfe5

## Content

- Visual Studio Code
- [C/C++](./cpp)
- PlatformIO

## Visual Studio Code
