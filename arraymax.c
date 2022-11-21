#include <stdio.h>
void main()
{
    int n, array[n],max;
    printf("give array size");
    scanf("%d", &n);
    printf("enter value of array");
    for (int j = 0; j < n; j++)
    {
        scanf("%d", &array[j]);
    }
    max = array[0];
    for (int i = 0; i < n; i++)
    {
        
        if (max < array[i])
        {
            max = array[i];
            
        }
    }
     printf("%d",max);
}