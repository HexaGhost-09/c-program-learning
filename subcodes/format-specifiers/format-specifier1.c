#include <stdio.h>

int main(){

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = -1000;

    printf("%3d \n",num1);
    printf("%3d \n",num2);
    printf("%3d \n",num3);

    printf("%03d \n",num1);
    printf("%+3d \n",num4);

    return 0;
}