#include "helper.hpp"  // With "whatever" notation, the preprocessor will look for the file in the same directory as the source file.
// with <whatever> notation, the preprocessor will look in the standar directory
// first and the current directory after. So for custom headers, it's more
// optimal to use "whatever" notation.

int suma(int a, int b) { return a + b; }
// These are overloaded functions. They have the same name but different amount
// of parameters. Similar to how we use different constructors.
int suma(int a, int b, int c) { return a + b + c; }
int suma(int a, int b, int c, int d) { return a + b + c + d; }
std::string saludar(std::string nombre) { return "Hola " + nombre; }
