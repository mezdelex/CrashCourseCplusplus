#pragma once

class ClassTest1 {  // There's no need to name the file and the class same way.
  // We could remove 'private' directive because class scope is private by
  // default.
 private:
  int a;
  int b;

  // Since this is the class header, we don't define the implementations yet.
 public:
  ClassTest1();              // Emtpy constructor.
  ClassTest1(int a, int b);  // Constructor with parameters.

  int getA();
  int getB();
};