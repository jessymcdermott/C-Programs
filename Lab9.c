//
//  Lab9.c
//  
//
//  Created by Jessy McDermott on 11/9/16.
//
//

//please

#include <stdio.h>
#define Chicken 5000
#define BUFFER_SIZE 512

void ProgCalc();
void stringProgram();
void Mather();
void ADDERFuction(int num1, int num2);
void SubbsShop(int num1, int num2);
void productShop(int num1, int num2);
void divSplit(double num1, double num2);
void MODDEr(double num1, double num2);
void stringReverse(char *string);
void elementCompare(char *string1, char *string2);
void harmonicMean();
void geometricMean();
int stringLength(char *string);
int stringPalindrome(char *string);
int stringCompare(char *string1, char *string2);
int fibonacciSequence(int num);

//main allows the user to be able to pick different things to do within the program
//user can either start calculating, do a string program, simple mathmatical equations, or close the program
int main()
{
    char tempBuffer[BUFFER_SIZE];
    int userChoice = 5;
    
    printf("Welcome to the many in some Program!\n");
    printf("Follow the directions below!\n");
    
    while(userChoice != 0)
    {
        printf("Enter the number of the program you would like to use.\n");
        printf("1. Calculator\n");
        printf("2. String Program\n");
        printf("3. Mathematical Operations\n");
        printf("0. To close the program\n");
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%d", &userChoice);
        
        if(userChoice == 0)
        {
            printf("Closing main program...\n");
            break;
        }
        
        else if(userChoice < 4)
        {
            switch(userChoice)
            {
                case 1:
                    ProgCalc();
                    break;
                case 2:
                    stringProgram();
                    break;
                case 3:
                    Mather();
                    break;
                    printf("WRONG! Try Harder.\n");
                    break;
            }
        }
    }
}

//allows the user to pick the specific opperation to calculate
void ProgCalc()
{
    char tempBuffer[BUFFER_SIZE];
    /*int userChoice = 1.2f;*/
    
    int userChoice = 1;
    
    double firstNum, secondNum;
    
    while(userChoice != 0)
    {
        printf("\nCalculator Program\n");
        printf("Enter the number of the operation you wish to perform.\n");
        printf("1. Division\n");
        printf("2. Multiplication\n");
        printf("3. Modulo\n");
        printf("4. Subtraction\n");
        printf("5. Addition\n");
        printf("0. To close the program\n");
        
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%d", &userChoice);
        
        if(userChoice == 0)
        {
            printf("\nClosing Mathematical Operations program...\n\n");
            break;
        }
        
        if( userChoice > 5 )
        {
            printf("WRONG!! entry.\n");
        }
        
        printf("\nPlease enter two numbers separated by a space: ");
        
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%lf %lf", &firstNum, &secondNum);
    
        
        switch(userChoice)
        {
            case 1:
                divSplit(firstNum, secondNum);
                break;
            case 2:
                productShop(firstNum, secondNum);
                break;
            case 3:
                MODDEr(firstNum, secondNum);
                break;
            case 4:
                SubbsShop(firstNum, secondNum);
                break;
            case 5:
                ADDERFuction(firstNum, secondNum);
                break;
            default:
                printf("WRONG!! entry.\n");
                break;
        }
    }
}
//Allows the user to be able to choose the sting function they would like to use
void stringProgram()
{
    char tempBuffer[BUFFER_SIZE];
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    int userChoice = 5;
    
    //while statement for choosing string type
    while(userChoice != 0)
    {
        string1[0] = '\0';
        string2[0] = '\0';
        printf("\n The String Program.\n");
        printf("Enter the number of the operation you wish to perform.\n");
        printf("1. String Length\n");
        printf("2. String Reversal\n");
        printf("3. String Palindrome Check.\n");
        printf("4. String Comparison.\n");
        printf("5. String Element Comparison.\n");
        printf("0. To close the program.\n");
        
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%d", &userChoice);
        
        if(userChoice == 0)
        {
            printf("\nClosing String program...\n\n");
            break;
        }
        if(userChoice < 4)
        {
            printf("\nPlease enter your string: ");
            fgets(string1, BUFFER_SIZE, stdin);
        }
        else if(userChoice < 6)
        {
            printf("\nPlease enter your first string: ");
            fgets(string1, BUFFER_SIZE, stdin);
            printf("\n Please enter your second string: ");
            fgets(string2, BUFFER_SIZE, stdin);
        }
        
        //switch statement
        printf("\n");
        switch(userChoice)
        {
            case 1:
                printf("Length of %s is %d.", string1, stringLength(string1));
                break;
            case 2:
                stringReverse(string1);
                printf("Your new string is %s.", string1);
                break;
            case 3:
                if(stringPalindrome(string1) == 1)
                {
                    printf("%s is a palindrome!", string1);
                }
                else
                {
                    printf("%s is not palindrome!", string1);
                }
                break;
            case 4:
                if(stringCompare(string1, string2) == 1)
                {
                    printf("%s and %s are equal!", string1, string2);
                }
                else
                {
                    printf("%s and %s are not equal!", string1, string2);
                }
                break;
            case 5:
                elementCompare(string1, string2);
                break;
            default:
                printf("YOU'RE STILL WRONG. Try again.");
                break;
        }
    }
}

//actually does some shit hi adam
void Mather()
{
    char tempBuffer[BUFFER_SIZE];
    int userChoice = 1;
    int inputNumber, i, j;
    while(userChoice != 0)
    {
        printf("\nMath Program\n");
        printf("Enter the number of the operation you wish to perform.\n");
        printf("0. To close the program\n");
        printf("1. Fibonacci Sequence\n");
        printf("2. Harambe Mean\n");
        printf("3. Geometric Mean\n");
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%d", &userChoice);
        
        
        if(userChoice == 0){
            printf("Wrong");
            break;
        }
        else if(userChoice < 2)
        {
            printf("\nPlease enter an integer: ");
            fgets(tempBuffer, BUFFER_SIZE, stdin);
            sscanf(tempBuffer, "%d", &inputNumber);
        }
        else if(userChoice > 3)
        {
            userChoice == 4;
        }
        
        printf("\n");
        
        switch(userChoice)
        {
            case 1:
                printf("%d ", fibonacciSequence(inputNumber));
                printf("\n");
                break;
            case 2:
                harmonicMean();
                break;
            case 3:
                geometricMean();
                break;
            default:
                printf("Incorrect entry.\n");
                break;
        }
        printf("\n");
    }
}

//function to add
void ADDERFuction(int num1, int num2)
{
    printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
}

//function to subtract
void SubbsShop(int num1, int num2)
{
    printf("\n%d - %d = %d\n", num1, num2, num1 - num2);
}

//function for multiplication
void productShop(int num1, int num2)
{
    printf("\n%d * %d = %d\n", num1, num2, num1 * num2);
}

//function for division
void divSplit(double num1, double num2)
{
    printf("\n%0.2lf / %0.2lf = %0.2lf\n", num1, num2, num1 / num2);
}

//function for mod
void MODDEr(double num1, double num2)
{
    printf("\n%.2lf mod %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));
}

//evaluates the lenght of the string
int stringLength(char *string)
{
    int length = 0;
    
    while(string[length] != "\n" && string[length] != '\0')
    {
        length++;
    }
    string[length] = '\0';
    return length - 1;
}

//reverses the string
void stringReverse(char *string)
{
    char temp;
    int i = 0, j = stringLength(string) - 1;
    while(i < j)
    {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
        i++;
        j--;
    }
}
//checks string to see if its a palindrome
int stringPalindrome(char *string)
{
    int i = 0, j = stringLength(string) - 1, length = stringLength(string) - 1;
    while(i < length)
    {
        
        if(string[i] != string[j])
        {
            return 0;
        }
        i++;
        j--;
        return 1;
    }
}


//compares strings
int stringCompare(char *string1, char *string2)
{
    int i = 0, j = 0;
    
    if(stringLength(string1) > stringLength(string2))
    {
        j = stringLength(string1);
    }
    else
    {
        j = stringLength(string2);
    }
    while(i < j)
    {
        if(string1[i] != string2[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}


//compaers element
void elementCompare(char *string1, char *string2)
{
    int i = 0, j = 0;
    if(stringLength(string1) > stringLength(string2))
    {
        j = stringLength(string1);
    }
    else
    {
        j = stringLength(string2);
    }
    
    printf("Element Comparison: \n");
    
    while(i < j)
    {
        if(string1[i] == string2[i])
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
        
        i++;
        
        printf("\n");
        
    }
    return;
}
//does the fibinacci sequence :)))))))))
int fibonacciSequence(int num)
{
    if(num < 2)
    {
        return num;
    }
    else
    {
        return (fibonacciSequence(num - 1) + fibonacciSequence(num - 2));
    }
}
//allows user to add an additional number to the sequence
void harmonicMean()
{
    char tempBuffer[BUFFER_SIZE];
    double input, count = 0, runningSum = 0;
    
    printf("The Harmonic Mean\n");
    
    while(input != -1.0)
    {
        printf("Enter a # to be added to the calculation (-1 to quit).\n");
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%lf", &input);
        
        if(input != -1.0)
        {
            count += 1.0;
            runningSum += 1.0/input;
            printf("\nThe harmonic mean is %0.2lf", count/runningSum);
        }
    }
}

//allows user to add an additional number to the sequence
void geometricMean()
{
    char tempBuffer[BUFFER_SIZE];
    double input, count = 0.0, runningProduct = 1.0;
    printf("Geometric Mean\n");
    while(input != -1.0)
    {
        printf("Enter a number to be added to the calculation (-1 to quit).\n");
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%lf", &input);
        if(input != -1.0)
        {
            count += 1.0;
            runningProduct *= input;
            printf("The geometic mean is %0.2lf \n", pow(runningProduct, 1.0/count));
        }
    }
}
