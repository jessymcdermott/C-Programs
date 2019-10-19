//
//  lab8b.c
//  
//
//  Created by Jessy McDermott
//
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 512

void count_dig(char c[], int i, int* charSum, int* digCount, int len);
void sum_char(char c[], int i, int* charSum, int* digCount, int len);

int main(){
    int i = 0, digCount = 0, charSum = 0, arrayLen = 0;
    char buffer[BUFFER_SIZE];
    
    printf("Enter a string: ");
    //assigns input to array and excludes the enter value
    fgets(buffer, BUFFER_SIZE , stdin);
    buffer[strlen(buffer)-1] = 0;
    printf("\n");
    
    //get array length
    arrayLen = strlen(buffer);
    printf("arrayLen = %d\n", arrayLen);
    
    count_dig(buffer, i, &charSum, &digCount, arrayLen);
    
    //print results
    printf("Char sum: %d \n", charSum);
    printf("Dig count: %d \n", digCount);
    
    return 0;
}

//finds the number of numerical values in the string
void count_dig(char c[], int i, int* charSum, int* digCount, int len)
{
    //checks if iterator is smaller than array size
    if(i>=len)
    {
        return;
    }
    if(c[i]>=48 && c[i]<=57){
        //checks to see if ascii value is an integer
        *digCount =  *digCount + 1;
    }
    sum_char(c, i, charSum, digCount, len);
}

//add all ascii values of non-numbers
void sum_char(char c[], int i, int* charSum, int* digCount, int len)
{

    //checks to see if ascii value is a non integer
    if((int)c[i]<48 || (int)c[i]>57)
    {
        *charSum = *charSum + c[i];
    }
    count_dig(c, i + 1, charSum, digCount, len);
    
}
