#include<stdio.h>
int value,m=0;
int max(int);
int max(int y)
{
        if(m<y) //comparing first value with second
        {
            m=y; //transfering max value between two- to m
        }
    return m;
} 


int main()
{
    int a=4;    //limit for array
    int arr[a];
    printf("enetr 4 values");
    for(int i=0;i<4;i++)    // loop for value from user
    {
        scanf("%d",&arr[i]);
        int x=arr[i];
       value=max(x);  //calling fun max
    }
      printf("%d",value); // printing max value of the array
}
