//
//  lab3c.c
//  
//
//  Created by Jessy McDermott on 10/3/16.
//
//


#include <stdio.h>
#define ARRAYSIZE 20

int main()
{
    char numWhole[ARRAYSIZE];
    int i = 0;
    FILE *inFile;
    inFile = fopen("empty.txt", "r");
    // reads text file for input
    fgets(numWhole,ARRAYSIZE,inFile); //gets number from file and stores it in the array
    fclose(inFile);
    printf("%s \n", numWhole);
    printf("Even digits printed in order are as followed: "); //prints evens numbers in order
    
    for (i=0; numWhole[i] > '.'; i++) //makes sure that numbers are always greater than a decimal
    {
        if(numWhole[i] %2 == 0)
        printf("%c  ", numWhole[i]);
    }
    printf("\n");
    printf("Odd digits printed in order are as followed: "); //prints odd numbers
    for (;i>=0;i--) //loops prints numbers in reverse order
    {
        if(numWhole[i] %2 == 1)
            printf("%c   ", numWhole[i]);
    }
    printf("\n");
    return 0;
}