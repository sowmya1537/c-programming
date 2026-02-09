#include <stdio.h>
struct student {
int id;
char name[20];
float marks;
};
int main(){
struct student s1={101,"priya",88.8};
printf("id:%d\n",s1.id);
printf("name:%s\n",s1.name);
printf("marks:%2f\n",s1.marks);

struct student s2={109,"Mahendra singh dhoni",85.3};
printf("id:%d\n",s2.id);
printf("name:%s\n",s2.name);
printf("marks:%2f\n",s2.marks);

struct student s3={120,"hasini",81.3};
printf("id:%d\n",s3.id);
printf("name:%s\n",s3.name);
printf("marks:%2f\n",s3.marks);

return 0;
}
