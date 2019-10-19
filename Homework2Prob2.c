//
//  Homework2Prob2.c
//  
//
//  Created by Jessy McDermott on 10/21/16.
//
//pass by value

#include <stdio.h>

int fileRead();
int compareValues();
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
        
        if(compareValues(largest, number)){
            large = larger;
            larger = largest;
            largest = number;
        }
        else if(compareValues(larger, number)){
            large = larger;
            larger = number;
        }
        else if(compareValues(large, number)){
            large = number;
        }
    }
    fileRead(large, larger, largest, number);
    printNumbers(large, larger, largest, number);
    fclose(inFile);

    return 0;
}

int fileRead(int large, int larger, int largest, int number)
{
    fscanf(inFile,"%d",&number); /*scans in temporary*/
    /*file closes*/
    
    return number;
}

int compareValues(int large, int number){
    if(number > large){
        return 1;
    }
    else{
        return 0;
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










