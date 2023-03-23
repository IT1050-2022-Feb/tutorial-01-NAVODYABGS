/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   //Declare the variables
   int mark1, mark2; 
   float avg;
   
   //Getting the user inputs
   printf("Enter the mark 1 : ");
   scanf("%d", &mark1);
   
   printf("Enter the mark 2 : ");
   scanf("%d", &mark2);
   
   avg = (mark1 + mark2) / 2; //Calculate the average marks
   printf("Average marks is %.2f\n", avg); //Display the average marks
  
  return 0;
}//End of function main

