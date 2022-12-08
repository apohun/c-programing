// code to convert the given string into all upper case and all lower case
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "BaCgfOHijk";
    // function to convert the string into uppercase
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << str << endl;
    // function to convert string into all lower case
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << str << endl;
}
