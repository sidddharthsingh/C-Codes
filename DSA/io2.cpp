#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    string name; // variable declaration.
    std::cout << "Enter your name :" << std::endl;
    getline(cin, name); // implementing a getline() function
    cout << "\nHello " << name;
    return 0;
}