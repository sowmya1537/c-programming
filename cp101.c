//Program : enum example weekdays
#include<stdio.h>
enum Week{Sunday,Monday,Tuesday,Wednesday,Thusday,Friday,Saturday};
int main(){
enum Week day;
day=Wednesday;
printf("Numeric value of wednesday is:%d\n",day);
return 0;
}
