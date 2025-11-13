
#include <stdio.h>
int main()
{
    float m1,m2,m3,total,average;
    char G;
    printf("enter the marks for three subjects(out of 100):");
    scanf("%f%f%f",&m1,&m2,&m3);
    total=m1+m2+m3;
    average=total/3;
    printf("\nThe total marks =%.2f",total);
    printf("\nThe average marks = %.2f",average);
    if(average>=90)
        G='A';
    else if (average>=80)
        G='B';
    else if(average>=70)
        G='C';
    else if(average>=60)
        G='D';
    else if(average>=50)
        G='E';
    else
        G='F';
    printf("\nGrade=%c",G);
    if (average<=50)
       {
           if(m1>=50||m2>=50||m3>=50)
        printf("\nResult:FAIL");
       }
        else printf("\nResult:PASS");


  return 0;
}
