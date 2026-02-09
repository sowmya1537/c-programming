#include <stdio.h>//write a c  program to display any four car company details using the nested structure and the elements of the structure and company name mode price and manufacturing date
struct Date{
    int day;
    int month;
    int year;
};
struct Car{
    char companyName[30];
    char model[30];
    float price;
    struct Date mfgDate;
};
int main(){
    struct Car cars[4] ={
        {"Toyota", "Corolla", 25000.50, {12, 5, 2021}},
        {"Honda", "Civic", 27000.75, {23, 8, 2020}},
        {"Ford", "Mustang", 55000.00, {15, 3, 2019}},
        {"BMW", "X5", 72000.99, {30, 11, 2022}}
    };
    printf("Car Company Details:\n\n");
    for (int i = 0; i < 4; i++) {
        printf("Company Name: %s\n", cars[i].companyName);
        printf("Model: %s\n", cars[i].model);
        printf("Price: %.2f\n", cars[i].price);
        printf("Manufacture Date: %02d-%02d-%04d\n\n",
               cars[i].mfgDate.day,
               cars[i].mfgDate.month,
               cars[i].mfgDate.year);
    }
return 0;
}
