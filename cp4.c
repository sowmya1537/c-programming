#include <stdio.h>//if els econdition :check whetner an integer is odd or even
int main()
{
   int n;
    printf("enter a integer: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is an even integer.",n);

    }
    else
    {
        printf("%d is an odd integer.",n);
    }
    return 0;
}
