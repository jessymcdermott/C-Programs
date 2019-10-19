//
//  lab8part1.c
//  
//
//  Created by Jessy McDermott on 11/4/16.
//
//

#include <stdio.h>
#define ARRAYSIZE 20
#define MAX 100
#define MIN 10


void readArray(int *num);
void analyze(int *num);

int main(){
    int n[ARRAYSIZE];
    readArray(n);
    analyze(n);
    
    return 0;
    
}

void readArray(int *num){
    
    int x;
    int input;
    
    //loop with input
    while (*num > MAX || *num < MIN)
    {
        printf("Enter a number between 10 & 100 \n");
        scanf("%d", &input);
            //enters inputs into array
        //if number entered is outside of the allowed range of 10-100
            if(input > 10 && input < 100)
                num[x] = input;
    
            else(printf("Input not within range! Please try again! \n"));
                x--;
  printf("\n");
    
}
}



void analyze (int *num){
   
    int i;
    int j;
    int check;
    int again;
    
    for(i = 0; i < ARRAYSIZE; i++){
        check = num[i];
        
        for(j = 0; j < i; j++)
            
            if(check == num[j]){
                
                j = ARRAYSIZE;
                again = check;
            }
        
    }
    
    if(check == again)
        printf("%d", check);
    
    }



