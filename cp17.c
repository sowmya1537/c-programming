
#include <stdio.h>
int main()
{
    int arr[100];
    int n,sum,pos_C,neg_C;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
     inputArray(arr,n);
    sum=sumArray(arr,n);
    printf("\nSum of all elements=%d",sum);
    return 0;
}
