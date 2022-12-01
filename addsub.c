
#include <stdio.h>
int add(int z,int h)
{
    int va=z+h;
    return va;
}
int sub(int x,int y)
{
    if(x>y)
    {
         int val=(x-y);
           return val;
    }
    else{
        int val=-(x-y);
          return val;
    }
}
int main()
{
    int a,b;
    printf("enter 2 values");
    scanf("%d%d",&a,&b);
    int f=sub(a,b);
    int k=add(a,b);
    printf("added %d",k);
    printf("\nsubstract %d",f);
    
}