/********************************************************
*
*
*  Greedy - Problem Set 1
*  enhanced editon 1.0
*  Martin Nowatschek
*  CS 50
*
*  Final solution - using arrays - transfering float to int
*********************************************************/
#include <stdio.h>
#include <cs50.h>
#include <math.h>
 
int main(void){
 
   printf("Hello! How much do we owe you? \n");
    
    
   //user input
   float input = 0;
   do
   {
   input = GetFloat();
   } while(input < 0 || input > 1000);
   printf("I see, we owe you %.2f \n", input);
    
    
   // change float to int
   int inputi = (100 * input);
   printf("Your Input as Integer: %d!\n", inputi);
    
    
   //set up variables
 
    int coins[5] = {50, 20, 10, 5, 1};
    int coincount[5] = {0, 0, 0, 0, 0};
    int cointotal = 0;
 
     
    // checks for fitting coins and counts them up
     
    for (int m = 0; m < 5; m++)
    {
        while(inputi >= coins[m])
        {
            inputi -= coins[m];
            coincount[m]++;
            printf("%d \n", inputi);
        }
    }
     
     
    // coin counter
     
    for (int i = 0; i < 5; i++)
    {
       cointotal = (cointotal + coincount[i]);
    }
     
    string speller[5] = {"coin", "coin", "coin", "coin", "coin"};
     
     
    // checks for plural or singular coin(s)
     
    for (int z = 0; z < 5; z++)
    {
        if(coincount[z] > 1){
            speller[z] = "coins";
        } else {
            speller[z] = "coin";
        }
    }
     
     
   // output of coins used
    
   printf("%d number of coins used in total. \n", cointotal);
    
   for (int q = 0; q < 5; q++)
   {
      if (coincount[q] != 0)
      {
      printf("You got %d %s of %d cents\n", coincount[q], speller[q], coins[q]);
      }
   }
    
   return 0;
}
