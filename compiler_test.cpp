#include <iostream>

main()
{
    std::cout << "This is a compiler test" << std::endl;
}

// Standalone cpp compiler (debugger, etc.) to work with VS Code without any VS installation.
// Download the .zip from latest releases, unzip it and add the folder 'bin' to Windows PATH variable.
// You can use Powershell or whatever shell you want, no need to use the embeded VS Command Line shell anymore :)
// First time you launch the compiler/debugger with F5, select 'C++ (GDB/LLDB)' and 'g++.exe' compiler.
// https://github.com/skeeto/w64devkit