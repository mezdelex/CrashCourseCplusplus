#include "ClassTest1.hpp"

// We implement each declared method in the header file.
ClassTest1::ClassTest1(){};
ClassTest1::ClassTest1(int a, int b) {
  this->a = a;
  this->b = b;
};
int ClassTest1::getA() { return this->a; };
int ClassTest1::getB() { return this->b; };