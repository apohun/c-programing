#include<stdio.h>


int max(int val[],int size)
{
    int m=val[0];   //storing first value of array
    for(int j=0;j<size;j++)   
    {
        if(max<val[j]) //comparing first value with second
        {
            m=val[j]; //transfering max value between two- to m
        }
    }
    printf("%d",m); // printing max value of the array
} 


int main()
{
    int a=4;    //limit for array
    int arr[a];
    for(int i=0;i<4;i++)    // loop for value from user
    {
        scanf("%d",&arr[i]);
      int value=max(arr[i],a);  //calling fun max
    }
}