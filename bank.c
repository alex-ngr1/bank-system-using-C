#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct user {
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main()
{
    struct user usr;
    int opt;

    printf("\nWhat do you want to do? ");
    printf("\n\n1. Register account: ");
    printf("\n2.Login to an account: \n ");

    printf("\n\n Youre choice: ");
    scanf("%d",&opt);

    if(opt == 1);
    
    return 0;

}
