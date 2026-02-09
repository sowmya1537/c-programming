#include <stdio.h>
#include <string.h>
int main(){
    char str1[50] = "Hello";
    char str2[50] = "world";
    int choice;
    printf("string Operation:\n");
    printf("1.strlen\n");
    printf("2.strcat\n");
    printf("3.strcpy\n");
    printf("4.strcmp\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Length of str1:%lu\n",strlen(str1));
            break;
        case 2:
            strcat(str1,str2);
            printf("After concatenation:%s\n",str1);
            break;
        case 3:
            strcpy(str2,str1);
            printf("Copied string:%s\n",str2);
            break;
        case 4:
           printf("Comparison result:%d\n",strcmp(str1,str2));
           int result=strcmp(str1,str2);
           if(result>0)
            printf("%s is greater",str1);
           else if(result==0)
            printf("%s and %s are equal",str1,str2);
           else
            printf("%s is greater",str2);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}



