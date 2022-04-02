# Targets visibility example

**IMPORTANT:**
PUBLIC, PRIVATE, INTERFACE is not part of the GCC/G++ Compiler, they do not have such
mechanism. CMake uses those keywords for the user to create a building graph that has
clear and explicit dependencies. The building graph translates to normal building commands using gcc and g++.

## Steps to compile

1. Create a `build` directory for building put of sources:

   ```
   $ mkdir build && cd build
   ```

2. Configure the CMake project. In this case we are building the libraries as shared

   - For static library build:

     ```
     $ cmake ..
     ```

   - For shared library build:

     ```
     $ cmake .. -DBUILD_SHARED_LIBS=TRUE
     ```

     **Note:** To compile shared libraries in Windows, you should enable the following
     variable so symbols are exported to the binary interface:

     ```
     -DCMAKE_WINDOWS_EXPORT_ALL_SYMBOLS=TRUE
     ```

3. Build the example:

   ```
   $ cmake --build . --config Release
   ```

## Exercise 1: The `song` executable has no visibility of `firstDay`

If the library `firstDay` is used in the `main.cpp` of our `song` executable, the
compilation fails as it has no visibility of that target.

See lines marked as `Exercise 1` and compile again with the steps at the beginning of
this document.

## Exercise 2: The `firstDay` library should be publicly linked to `secondDay`

To make `firstDay` library functions visible through `secondDay`, it should be linked as `PUBLIC`.

See lines marked as `Exercise 2` and compile again with the steps at the beginning of
this document.
