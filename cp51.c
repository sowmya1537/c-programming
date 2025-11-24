#include<stdio.h>//Array of pointers to structres (Book search)
#include<string.h>
struct Book{
int id;
char title[50];
char author[50];
};
int main(){
struct Book b1={101,"C Programming","Dennis Ritchie"};
struct Book b2={102,"Data Structures","Mark Weiss"};
struct Book b3={103,"Oprating Systems","Silberschatz"};

struct Book*books[3]={&b1,&b2,&b3};

int searchID,i,found=0;
printf("Enter Book ID to search:");
scanf("%d",&searchID);
for(i=0;i<3;i++){
}
return 0;
}
