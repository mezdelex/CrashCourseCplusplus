#include "ClassTest2.hpp"

// After the ':' notation, we specify which constructor we want to use from the
// father class.
ClassTest2::ClassTest2() : ClassTest1(){};
ClassTest2::ClassTest2(int a, int b, int c) : ClassTest1(a, b) { this->c = c; };
int ClassTest2::getC() { return this->c; };