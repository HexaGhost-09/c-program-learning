#include <stdio.h>
#include <stdbool.h>

// in bool only status True or False

int main(){

    // False can be 0 and True can be 1

    bool isonline = true;
    bool powerstatus = false;

    if(powerstatus)
    {
        printf("Your Power is On \n");
    }
    else{
        printf("Your Power is Off \n");
    }
    
    if (isonline)
    {
        printf("You are Online");
    }
    else{
        printf("You are Offline");
    }

    return 0;
}