// code to convert the given numeric string into maximunm possible number
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "567923498764982";
    // function to sort the numeric string
    sort(str.begin(), str.end(),greater<int>()); // function to sort in the descending order( if this is not used the string will be sorted in ascending order)
    cout << str << endl;
}