#include<stdio.h>
int main()
{
    int secret_number;
    int guess_number;

    secret_number = 5;
     
    int i;
    int guess_limit;
    guess_limit = 3;

    for(i=1; i<=guess_limit; i++)
    {
           printf("Guess number %d:",i);
           scanf("%d",&guess_number);

           if(guess_number==secret_number)
           {
            printf("You won\n");
            break;
           }
           if(guess_number!=secret_number)
           {
            printf("You Lost\n");
           }
    }
    return 0;
}