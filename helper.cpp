#include "helper.hpp"  // With "whatever" notation, the preprocessor will look for the file in the same directory as the source file.
// with <whatever> notation, the preprocessor will look in the standar directory
// first and the current directory after. So for custom headers, it's more
// optimal to use "whatever" notation.

int suma(int a, int b) { return a + b; }
std::string saludar(std::string nombre) { return "Hola " + nombre; }
