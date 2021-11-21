#pragma once
#include "ClassTest1.hpp"

class ClassTest2 : public ClassTest1 {  // Inheritance w/ public access modifier
 private:
  int c;

 public:
  ClassTest2();
  ClassTest2(int a, int b, int c);

  int getC();
};