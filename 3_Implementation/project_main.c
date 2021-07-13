/**
 * @file project_main.c
 * @author Amit Kumar Sahni (sahniamitkumar2017@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include"sum.h"
#include"sub.h"
#include"mul.h"
#include"mod.h"
#include"fact.h"



void calculator_operations();
void addition();
void subtraction();
void multiplication();
void modulus();
void factorial();

// Start of Main Program

/**
 * @brief 
 * 
 * @return int 
 */
int main()
{
    char ch; // for opeartion's symbol

    // Function call 
    calculator_operations();
        printf("\n");
        printf("Enter the calculator Operation you want to do: ");
 
        ch=getch();  //to enter the operation by user
 
        switch(ch)
        {
            
            case '+': addition(); 
                      break;
 
            case '-': subtraction();
                      break;
 
            case '*': multiplication();
                      break;

            case '?': modulus();
                      break;

            case '!': factorial();
                      break;
                      
            case 'H':
            case 'h': calculator_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
   
    }
   test_main();
    return 0;
}
 
//Function Definitions
 
void calculator_operations()
{
    
    printf("\nWelcome to C calculator \n\n");
    printf("******* Press 'Q' or 'q' to quit ");
    printf("the program ********\n");
    printf("***** Press 'H' or 'h' to display ");
    printf("below options *****\n\n");
    printf("Enter 'C' or 'c' to clear the screen and");
    printf(" display available option \n\n");
 
    printf("Enter + symbol for Addition \n");
    printf("Enter - symbol for Subtraction \n");
    printf("Enter * symbol for Multiplication \n");
    printf("Enter ! symbol for Multiplication \n");
    printf("Enter ? symbol for Modulus\n");
    
}
 
void addition() //for addition operation
{
    int a=10,b=43;
    
    int total=sum(a,b);
    printf("Value = %d",total);
}
 
void subtraction() //for subtraction operation
{ int a=10,b=43;
    
    int total=sub(a,b);
    printf("Value = %d",total);
}
 
void multiplication() //for multiplication operation
{
    int a=10,b=43;
    
    int total=mul(a,b);
    printf("Value = %d",total);
}

 
void modulus() //for modulus operation
{
    int a=10,b=43;
    
    int total=mod(a,b);
    printf("Value = %d",total);
}

void factorial(){ ////for factorial operation
    int a=10;

    int total=fact(10);
    printf("%d",total);
}