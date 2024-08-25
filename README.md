This is how internally clang builds.
Syntax: clang-cl.exe main.cpp -o main.exe

Info:
clang-cl.exe is a version of the Clang compiler designed to be compatible with the Microsoft Visual C++ compiler (cl.exe). It allows developers to use Clang with the same command-line arguments and environment as cl.exe, making it easier to integrate Clang into existing Visual Studio projects12.

Essentially, clang-cl.exe provides the benefits of Clang’s modern compiler technology while maintaining compatibility with the MSVC toolchain3. This includes support for MSVC flag syntax, library search paths, and ABI (Application Binary Interface)3.
