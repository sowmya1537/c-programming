#include<stdio.h>
int main()
{

    char timetable;
    printf("Enter any period(1/2/3)\n");
    scanf("%c",&timetable);
    switch(timetable)
    {

    case '1':
        printf("Subject name:cmat\n");
        printf("timing:7:15-8:15");
        break;
    case '2':
        printf("Subject name:Linux\n");
        printf("timing:8:15-9:15");
        break;
    case '3':
        printf("Subject name:CO\n");
        printf("timing:10:00-11:00");
        break;
    default:
        printf("you entered wrong input\n");
        break;
    }
    return 0;
}
