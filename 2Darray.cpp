//code to find an element in a n*m matrix
#include <iostream>
using namespace std;
int main()
{
    //taking value of rows and columns from the user
    cout << "Enter the value of rows and columns" << endl;
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    //loop for rows
    for (int i = 0; i < n; i++)
    {
        //loop for columns
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    cout << "Enter the number to be searched for";
    //number to be searched for
    int num;
    cin >> num;
    //temp variable for storing the number of times a value has been used in the matrix
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == num)
            {
                check++;
                //condition to register all the points at where the number was present in the given matrix
                if (check == 1 || check > 1)
                {
                    cout << "Element found at " << i << "*" << j << endl;
                }
            }
        }
    }
    //if element is not found print not found
    if (check == 0)
    {
        cout << "not found";
    }
}

