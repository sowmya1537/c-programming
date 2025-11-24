#include <stdio.h>
int main()
{
    int arr[100], n,value,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for(int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    printf("The array elements are:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nEnter the element to be inserted:");
    scanf("%d", &value);
    for(i=n-1;i>=0&&arr[i]>value;i--)
    arr[i+1]=arr[i];
    arr[i+1]=value;
    n++;
    printf("Array after insertion:");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
return 0;
}
