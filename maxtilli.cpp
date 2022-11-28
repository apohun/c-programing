// code to compare each value till ith index and give the max till that position
#include <iostream>
#include <math.h>
#include <climits>
using namespace std;
int main()
{
    cout << "Enter the size of the array";
    int n;
    cin >> n;
    cout << "Enter values in the array";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = -199999;
    // storing the value of max after every iteration or comparison
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        cout << mx;
    }
}
