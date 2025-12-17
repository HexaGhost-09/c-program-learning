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

    // double

    double pi =  3.14159265358979;
    double e = 2.7182818284590;

    printf("Value of Pi is %lf \n", pi);
    printf("full Value of Pi is %.15lf \n", pi);
    printf("full Value of e is %.15lf \n", e);

    // Char they store single characters

    char grade = 'A';
    char symbol = '@';
    char currency = '$';

    printf("Your garde is %c \n", grade);
    printf("Your email symbol is %c \n", symbol);
    printf("One the currency from world is %c \n", currency);

    return 0;
}