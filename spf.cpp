#include <iostream>
using namespace std;


int main()
{
    char name[100];
    printf("Name: ");
    scanf("%[^\n]%*c", name);

    int age;
    printf("Age: ");
    scanf("%d", &age);

    char initial;
    printf("Initial: ");
    scanf("\n");
    scanf("%c", &initial);

    float grade;
    printf("Grade: ");
    scanf("%f", &grade);

    printf("\nI will now make some predictions about you... \n\n");

    printf("Your name is %s \nYou are %d years old \nYour first initial is %c \nYour grade average is %.2f", name, age, initial, grade);
}
