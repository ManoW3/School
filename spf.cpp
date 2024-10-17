#include <iostream>
using namespace std;


int main()
{
    char name[100];
    printf("Name: ");
    scanf("%[^\n]%*c", name);

    int age;
    printf("age: ");
    scanf("%d", &age);

    char initial;
    printf("Initial: ");
    scanf("\n");
    scanf("%c", &initial);

    float grade;
    printf("Grade: ");
    scanf("%f", &grade);

    printf("\nI will now make some predictions about you... \n\n");

    printf("Your name is %s \nYou are 15 years old%d \nYour first initial is %c \nYour grade average is %.2f", name, age, initial, grade);
}