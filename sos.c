#include <stdio.h>
#include <math.h>
#include <string.h>

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
int stringLength(char *string);
void stringReverse(char *string);
int stringPalindrome(char *string);
int stringCompare(char *string1, char *string2);
void elementCompare(char *string1, char *string2);
int fibonacciSequence(int num);
void harmonicMean();
void geometricMean();

/*allows user to pick a sub program*/
int main()
{
    char tempBuffer[BUFFER_SIZE];
    int userChoice = 5;
    
    printf("Welcome to the many in some Program :D\n");
    printf("Follow the directions below\n");
    
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
                default:
                    printf("WRONG! Try Harder.\n");
                    break;
            }
        }
    }
}

/*calculator sub program performs multiple different operations*/
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
        
        
        if(userChoice < 6)
        {
            printf("\nPlease enter two numbers separated by a space: ");
            fgets(tempBuffer, BUFFER_SIZE, stdin);
            sscanf(tempBuffer, "%lf %lf", &firstNum, &secondNum);
        }
        
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

/*string subprogram allows user to manipulate strings*/
void stringProgram()
{
    char tempBuffer[BUFFER_SIZE];
    char string1[BUFFER_SIZE];
    char string2[BUFFER_SIZE];
    int userChoice = 5;
    
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
            printf("\nPlease enter your second string: ");
            fgets(string2, BUFFER_SIZE, stdin);
        }
        
        printf("\n");
        switch(userChoice)
        {
            case 1:
                printf("Length of %s is %d.\n", string1, stringLength(string1));
                break;
            case 2:
                stringReverse(string1);
                printf("Your new string is %s.\n", string1);
                break;
            case 3:
                if(stringPalindrome(string1) == 1)
                {
                    printf("%s is a palindrome!\n", string1);
                }
                else
                {
                    printf("%s is not palindrome!\n", string1);
                }
                break;
            case 4:
                if(stringCompare(string1, string2) == 1)
                {
                    printf("%s and %s are equal!\n", string1, string2);
                }
                else
                {
                    printf("%s and %s are not equal!\n", string1, string2);
                }
                break;
            case 5:
                elementCompare(string1, string2);
                break;
            default:
                printf("YOU'RE STILL WRONG. Try again.\n");
                break;
        }
    }
}

/*math sub program lets user use several different math functions*/
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
        printf("2. Harmonic Mean\n");
        printf("3. Geometric Mean\n");
        fgets(tempBuffer, BUFFER_SIZE, stdin);
        sscanf(tempBuffer, "%d", &userChoice);
        
        if(userChoice == 0){
            printf("\nClosing The Math Program program...\n\n");
            break;
        }
        
        if(userChoice < 2)
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

/*performs addition*/
void ADDERFuction(int num1, int num2)
{
    printf("\n%d + %d = %d\n", num1, num2, num1 + num2);
}

/*performs subtraction*/
void SubbsShop(int num1, int num2)
{
    printf("\n%d - %d = %d\n", num1, num2, num1 - num2);
}

/*multiplies*/
void productShop(int num1, int num2)
{
    printf("\n%d * %d = %d\n", num1, num2, num1 * num2);
}

/*divides*/
void divSplit(double num1, double num2)
{
    printf("\n%0.2lf / %0.2lf = %0.2lf\n", num1, num2, num1 / num2);
}

/*performs modulus*/
void MODDEr(double num1, double num2)
{
    printf("\n%.2lf mod %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));
}

/*finds the length of a string*/
int stringLength(char *string)
{
    int length = 0;
    
    while(string[length] != '\n' && string[length] != '\0')
    {
        
        length++;
        
    }
    string[length] = '\0';
    return length;
}

/*reverses a string*/
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

/*checks to see if string is a palindrome*/
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

/*compares two strings*/
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

/*checks to see if two strings are the same*/
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

/*finds the nth term in the fibonacci sequence*/
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

/*finds the harmonic mean of some numbers*/
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

/*finds the geometric mean of some numbers*/
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
