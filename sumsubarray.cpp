//code to find the sum of each subarray which can be obtained from the given array
#include <iostream>
using namespace std;
int main()
{
    //entering size of the array from the user
    cout << "Enter the size of the array";
    int n;
    cin >> n;
    //entering values of the array from the user
    cout << "Enter values in the array";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //calculating sum of each subarray
    int sum = 0;
    //first loop to act as a reference point
    for (int i = 0; i < n; i++)
    {
        //second loop to extract the subarrays
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            //key point= to print the new arr[j] formed and not the sum
            cout << arr[j] << " ";
        }
    }
}