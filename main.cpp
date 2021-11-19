#include <algorithm>  // A library with a lot of useful math functions like max, min, abs, sqrt, ceil, floor, etc.
#include <iostream>
#include <string>
using namespace std;  // We add std namespace to avoid having to write
                      // std::<function> all the time.
main() {
  cout << "Please enter your fullname:" << endl;
  string fullname;
  getline(cin, fullname);  // std::cin only allows us to read characters until a
                           // blank space. To be able to read more than 1 word,
                           // we need to use 'getline' from 'string' library.

  cout << "Enter your age:" << endl;
  int age;
  cin >> age;

  // 'if' statement example
  if (age >= 18)
    cout << "Hello " << fullname << "!"
         << " You are " << age << " years old, welcome." << endl;
  else
    cout << "Hello " << fullname << "!"
         << " You are " << age << " years old, so you can't join us yet."
         << endl;

  // Same of the above using ternary operator:
  cout << "Hello " << fullname << "!"
       << " You are " << age << " years old, "
       << (age >= 18 ? "welcome." : "so you can't join us yet.") << endl;
  // Note that if we would've needed to concatenate text with other elements
  // inside a ternary operator expression, we would've use '+' like in many
  // other languages.

  // 'switch' statement is exactly the same as in Java

  // 'algorithm' library has many useful math functions.
  // Not gonna use it here, just for the record.

  // logical operators are used the same way as in Java.

  // 'while' loop example
  cout << "Enter the number of iterations:" << endl;
  int countdown;
  cin >> countdown;
  while (countdown > 0)
    cout << "Iteration number: " << countdown-- << "." << endl;

  cout << "Enter the number of iterations:" << endl;
  // 'for' loop allows us to use cin as first expression
  for (cin >> countdown; countdown > 0; --countdown)
    cout << "Iteration number: " << countdown << "." << endl;

  printf("This is a %s\n", "formatted text.");
  printf("We can add blank spaces %20s\n", "like so.\n");
  printf("Or justify the %-20s %s\n", "text,",
         "so we would add 20 spaces between the first and second text.\n");
  printf("Or the number of decimals to show %.2f\n", 3.14159265);
}
