
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,arr[n];
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter value of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

     for(int j=n-1;j<=0;j--)
     {
         printf("%d",arr[j]);
        
     }
     getch();
}

