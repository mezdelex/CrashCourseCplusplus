#pragma once  // Non standar directive to include header file only once.
// Headers in C++ work as interfaces where you define the functions but not
// their implementation. These are defined in the associated cpp file.

#include <iostream>

int suma(int a, int b);
// These are overloaded functions. They have the same name but different amount
// of parameters. Similar to how we use different constructors.
int suma(int a, int b, int c);
int suma(int a, int b, int c, int d);
std::string saludar(std::string nombre);
