#include<stdio.h>
#include<string.h>
int main(){
char a[100],b[100];
printf("Enter two string to compare:");
scanf("%s %s",&a,&b);
int result=strcmp(a,b);
if(result>0)
    printf("%s is greater",a);
    else if (result==0)
        printf("%s and %s are equal",a,b);
    else
        printf("%s is greater",b);
    return 0;
}
