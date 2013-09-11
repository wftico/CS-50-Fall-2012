/*
Problemset 1 - Mario.c
*/

#include <stdio.h>
#include <cs50.h>
 
int main(void){
 
    //asks user for integer in between 1-23
    //loops as long until correct answer is given
    printf("Enter an integer between 1 and 23\n");
    int input;
        do
        {
        input = GetInt();
        }
        while (input < 1 || input > 23);
    printf("You have entered %d  \n", input);
     
    int a;
    int b;
    int i;
    int hash = 2;
    int spaces = input - 1;
     
    // y direction input-times
        for(i = 0; i < input; i++)
        {
            //print spaces
            for(b = 0; b < spaces; b++)
            {
              printf(" ");
            }
            spaces--;
         
            //print hashes
            for(a = 0; a < hash; a++)
            {
             printf("#");
            }
            hash++;
         
            //print new line
           printf("\n");
        }
    return 0;
}
