#include <stdio.h>
struct book{
    char title[20];
    char author[20];
    float price;
};
int main() {
    struct book b1 = {"THE LIFE", "Manupriya", 100};
    printf(" Title: %s\n Author: %s\n Price: %.2f\n ", b1.title,b1.author,b1.price);
    struct book b2 = {"PEACE IS PEAK", "Sowmya", 850};
    printf("Title: %s\n Author: %s\n Price: %.2f\n ", b2.title,b2.author,b2.price);
    struct book b3 = {"STORY OF MAN", "Shamili", 900};
    printf("Title: %s\n Author: %s\n Price: %.2f\n ", b3.title,b3.author,b3.price);
    return 0;
}
