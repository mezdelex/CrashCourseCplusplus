#include <algorithm>  // A library with a lot of useful math functions like max, min, abs, sqrt, ceil, floor, etc.
#include <list>
#include <string>

// We need to change the compile parameters in 'tasks.json' from ${file} to
// ${fileDirname}\\*.cpp to include our headers and their implementations.
// If there were more folders to include, we could've used
// ${fileDirname}\\**\\*.cpp instead to include those subfolders.
#include "ClassTest1.hpp"  // We include our class header linked to its implementation.
#include "ClassTest2.hpp"  // We include our child class header linked to its implementation.
#include "helper.hpp"  // Since 'helper.hpp' includes <iostream> itself, we don't need to include it again.

main() {
  std::cout << "Please enter your fullname:" << std::endl;
  std::string fullname;
  std::getline(std::cin,
               fullname);  // std::cin only allows us to read characters until a
                           // blank space. To be able to read more than 1 word,
                           // we need to use 'getline' from 'string' library.

  std::cout << "Enter your age:" << std::endl;
  int age;
  std::cin >> age;

  // 'if' statement example
  if (age >= 18)
    std::cout << "Hello " << fullname << "!"
              << " You are " << age << " years old, welcome." << std::endl;
  else
    std::cout << "Hello " << fullname << "!"
              << " You are " << age << " years old, so you can't join us yet."
              << std::endl;

  // Same of the above using ternary operator:
  std::cout << "Hello " << fullname << "!"
            << " You are " << age << " years old, "
            << (age >= 18 ? "welcome." : "so you can't join us yet.")
            << std::endl;
  // Note that if we would've needed to concatenate text with other elements
  // inside a ternary operator expression, we would've use '+' like in many
  // other languages.

  // 'switch' statement is exactly the same as in Java

  // 'algorithm' library has many useful math functions.
  // Not gonna use it here, just for the record.

  // logical operators are used the same way as in Java.

  // 'while' loop example
  std::cout << "Enter the number of iterations:" << std::endl;
  int countdown;
  std::cin >> countdown;
  while (countdown > 0)
    std::cout << "Iteration number: " << countdown-- << "." << std::endl;

  std::cout << "Enter the number of iterations:" << std::endl;
  // 'for' loop allows us to use cin as first expression
  for (std::cin >> countdown; countdown > 0; --countdown)
    std::cout << "Iteration number: " << countdown << "." << std::endl;

  std::vector<std::string> names = {"Alex", "Paco", "Juan", "Miguel"};

  // Pre C++11 way to manage iterables.
  // Lambda notation => [](<type> <value>){ <expression w/o <value>> }
  for_each(names.begin(), names.end(),
           [](std::string name) { std::cout << name << std::endl; });

  // Post C++11 way to manage iterables.
  for (std::string name : names) std::cout << name << std::endl;

  // A vector is a dynamic array. The values are allocated in contiguous memory
  // locations, so we can access each position specifying the index in f(1) time
  // complexity. On the other hand, the insertion or deletion has a f(n) time
  // complexity if it's not the last element because it has to reasign each
  // position.
  std::cout << names[2] << std::endl;
  // A list is a doubly linked list. We cannot access each position directly
  // like we do in a vector, we need to iterate instead. On the other hand,
  // insertion and deletion are way faster than in vectors.

  // Also something important to note is the iteration validation. In vectors,
  // since we reasign memory positions each time we insert/delete, the iteration
  // gets invalidated whenever this happens. In lists, since the positions
  // remain the same, iteration doesn't get invalidated.

  // So, if we are using a vector, we might need to iterate over a copy of the
  // actual iterable to avoid mutation problems.

  printf("This is a %s\n", "formatted text.");
  printf("We can add blank spaces %20s\n", "like so.\n");
  printf("Or justify the %-20s %s\n", "text,",
         "so we would add 20 spaces between the first and second text.\n");
  printf("Or the number of decimals to show %.2f\n", 3.14159265);

  std::cout << suma(1, 2) << std::endl;
  // We use overloaded functions to avoid the use of variadic arguments.
  std::cout << suma(1, 2, 3) << std::endl;
  std::cout << suma(1, 2, 3, 4) << std::endl;
  std::cout << saludar("Alex") << std::endl;

  std::string nombre = "Alex";
  // Everytime we define a variable, we allocate memory for it. To access that
  // memory address, we can use '&' operator.
  std::cout << &nombre << std::endl;
  // We can also asign a pointer to that address so that we can retrieve the
  // value and/or reallocate the address dinamycally if needed.
  std::string* pNombre = &nombre;  // Another naming convention -> 'ptr_nombre'
  std::cout << "Address: " << pNombre << "\nValue: " << *pNombre << std::endl;

  // This is how we define and populate an array.
  std::string carList[] = {"Ford", "Chevrolet", "Toyota"};
  // Different ways to iterate over it.
  for (std::string car : carList) std::cout << car << std::endl;
  for (int i = 0; i < size(carList); ++i) std::cout << carList[i] << std::endl;

  // Note that in this case, since the value that we are assigning to the
  // pointer is an array, we don't need to use any '&' because the array itself
  // is a data structure that works by reference.
  std::string* pCarList = carList;
  // So, we can access the same values in two ways:
  std::cout << pCarList[0] << std::endl;  // We don't need the '*'.
  std::cout << carList[0] << std::endl;
  // Just for the record, doesn't make much sense.

  // This is a multidimensional array (3D in this case).
  int numbers[3][3][2] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  ClassTest1 classTest1(42, 23);  // Father class
  std::cout << "First attribute: " << classTest1.getA()
            << "\nSecond attribute: " << classTest1.getB() << std::endl;

  ClassTest2 classTest2(46, 54, 12);  // Child class
  std::cout << "First attribute: " << classTest2.getA()
            << "\nSecond attribute: " << classTest2.getB()
            << "\nThird attribute: " << classTest2.getC() << std::endl;
}
