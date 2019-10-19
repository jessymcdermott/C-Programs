//
//  Homework2Prob3.c
//
//
//  Created by Jessy McDermott on 10/21/16.
//
//pass by reff
#include <stdio.h>

void fileRead();
void compareValues();
void printNumbers();

FILE *inFile;

int main()
{
    int large = 0;
    int larger = 0;
    int largest = 0;
    int number = 0;
    
    inFile = fopen("largenumbers.txt", "r"); /*puts information into text file*/
    
    int i = 0;
    for(i=0;i<20;i++){
        fscanf(inFile,"%d",&number); /*scans in temporary*/
        compareValues(&large, &larger, &largest, number);
    }
    
    fileRead(&large, &larger, &largest, number);
    printNumbers(large, larger, largest, number);
    return 0;
}

void fileRead(int *large, int *larger, int *largest, int number)
{
    fscanf(inFile,"%d",&number); /*scans in temporary*/
    /*file closes*/
    fclose(inFile);
    
}

void compareValues(int *large, int *larger, int *largest, int number){
    if(number > *largest){
        *large = *larger;
        *larger = *largest;
        *largest = number;
    }
    else if(number > *larger){
        *large = *larger;
        *larger = number;
    }
    else if(number > *large){
        *large = number;
    }
}

void printNumbers(int large, int larger, int largest, int number){
    int l1 = 0, l2 = 0, l3 = 0;
    l1 = largest;
    l2 = larger;
    l3 = large;
    
    
    printf("Largest: %d \n", l1);
    printf("Larger: %d \n", l2);
    printf("Large: %d \n", l3);
}










