// code for get bit in bit manipulation
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your no.";
    // value to be entered by the user
    int org, i, newbit;
    cin >> org;
    // the position to be checked
    cout << "Enter your position";
    cin >> i;
    // bit masking
    newbit = 1 << i;
    // AND operation
    if (newbit & org == 0)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}