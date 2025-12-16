#include <stdio.h>

int main(){

    // Paragraph
    printf("Hello, world! \n");
    printf("looks good \n");

    // int = whole number like 10,-5,0
    int age = 25;
    int year = 2025;
    int quantity = 1;
    
    printf("Your age is %d \n", age);
    printf("The year is %d \n", year);
    printf("In %d you will be %d years old \n", year, age);
    printf("You ordered %d items \n", quantity);

    // float = decimal numbers 3.14, -2.5

    float price = 12;
    float temp = -71;

    printf("The price is $%f \n", price);
    printf("The Temperature is %f \n", temp);

    return 0;
}