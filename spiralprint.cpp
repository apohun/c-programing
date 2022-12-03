// code to print the nos in a matrix in spiral format
#include <iostream>
using namespace std;
int main()
{
    // entering rows and columns
    cout << "Enter the values of rows and columns";
    int n, m;
    cin >> n >> m;
    cout << "Enter the values of matrix";
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
    // initialising 4 temporary variables to track the limits in the  spiral print
    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;
    // condition till when the spiral print will continue i.e. till the last block (the one in the centre)
    while (row_start <= row_end && col_start <= col_end)
    {
        // loop for 1st row
        // while printing the 1st row the row no. will be constant i.e. 0 but column no. will be continously changing
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }
        // now update the value of row_start as we have nothing to do with the first row now
        row_start++; // value of row_start changed from 0 to 1
        // loop for last column
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }
        // same as above update the value of col_end as we now have nothing to do with the last column
        col_end--; // value of col_end changed from m-1 to m-2
        // loop for last row
        for (int col = col_end; col >= col_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }
        // updating value of row_end
        row_end--;
        // loop for 1st column
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][col_start] << " ";
        }
        // updating value of col_start
        col_start++;
    }
}