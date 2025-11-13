
#include <stdio.h>//program to display a number if it is negative

int main()
{
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
    {

        printf("You entered %d.\n",n);
    }
    return 0;
}
