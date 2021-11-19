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
  cout << "Hello " << fullname << "!" << endl;
}