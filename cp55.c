#include<stdio.h>//1a prgm to define a stuructre and access it members
 struct Student{
    int id;
    char name[20];
    float marks;
 };
 int main(){
 struct Student s1={172,"Manu Priya SM",89.5};
 printf("ID:%d\n",s1.id);
 printf("Name:%s\n",s1.name);
 printf("Marks:%.2f\n",s1.marks);
 struct Student s2={4036,"Sowmya E",89.5};
 printf("ID:%d\n",s2.id);
 printf("Name:%s\n",s2.name);
 printf("Marks:%.2f\n",s2.marks);
 struct Student s3={4033,"Shamili N",89.5};
 printf("ID:%d\n",s3.id);
 printf("Name:%s\n",s3.name);
 printf("Marks:%.2f\n",s3.marks);
 return 0;
 }

