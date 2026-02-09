//write  a c program to open a same file a file can be text word file pdf or any folder link which contain user information
#include<stdio.h>
#include<stdlib.h>
int main() {
    char path[100];
    printf("Enter the folder path: ");
    scanf("%s",path);
    system(path);
    return 0;
}
