#include <stdio.h>
#include <string.h>

int main() {

    int age = 0;
    float gpa = 0.0f    ;
    char grade = '\0';
    char name[30] = "";

    printf("Enter your age : \n");
    scanf("%d", &age);

    printf("Enter your gpa : \n");
    scanf("%f", &gpa);

    printf("Enter your grade : \n");
    scanf(" %c", &grade); // add space after " and then %c so it will run code correctly for inputs30

    getchar();
    printf("Enter your full name : \n");
    fgets(name , sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%s \n", name);
    printf("%d \n", age);
    printf("%.2f \n", gpa);
    printf("%c \n", grade);

    return 0;
}