# CFFI-Haxelib-Example
An example library to learn how to create a custom NDLL for your Haxe project using both Haxe and C++. This are the same bindings I use for [Spoopy Engine](https://github.com/Project-Ever-Changing/spoopy).

One major problem that this approach solves is leveraging the power and performance of native C++ code in a Haxe project. Haxe, being a high-level, cross-platform programming language, has the advantage of simplicity and easy development, but it may not offer the same level of low-level control and performance optimization that C++ provides.

Haxe and C++ have different data types, memory management systems, and error-handling mechanisms, among other disparities. Binding both languages involves creating an interface layer that can translate data types and function calls between the two languages, handling memory management, errors, and exceptions, and ensuring efficient and correct operation.

## Requirements
[Lime](https://lib.haxe.org/p/lime/)


## Building

    cd backend
    haxelib run hxcpp Build.xml
