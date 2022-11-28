#include <iostream>
using namespace std;
int main()
{
    // Entering size of array from user
    cout << "Enter the size of the array" << endl;
    int n;
    cin >> n;
    // entering values of array from the user
    cout << "Enter values in the array ";
    int arr[n];
    // loop to enter values
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //taking a var to store max value
    int max = 0;
    //loop to evaluate all the nos of the array
    for (int i = 0; i < n; i++)
    {
        //while loop for evaluating all the digits after the current value of i
        int j = i + 1;
        while (j < n)
        {
            if (arr[i] > arr[j])
            {
                max = arr[i];
            }
            else
            {
                max = arr[j];
            }
            j++;
        }
    }
    cout << max;
}