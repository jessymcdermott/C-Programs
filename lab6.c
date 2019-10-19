//
//  lab6.c
//  
//
//  Created by Jessy McDermott on 10/21/16.
//
//

#include <stdio.h>


int main()
{

    //define
    int amount_of_numbers = 19;
    int row = 0;
    int num = 0;
    int spaces = 10;
    
    //nested while loop
   
    //increment
    //decrement
    //row 3, incrememnt from 0 to 3, decrement 3 to 0
    
//part1
    while(row < 10){
        printf("\n");
        spaces = 10 - row;
        
        while(spaces != 0){ //creates correct number of spaces
            printf(" ");
            spaces--;
        }
        
        while(num < row){ //adds 1 to every row
            printf("%d", num); //left side
            num++;
        }
        
        while(num >= 0){ //takes away 1 from every row
            printf("%d", num); //right side
            num --;
        }
            row++; //adds row
        num = 0; //reset
        spaces--;
    }
   
    printf("\n"); //adds spacing
    printf("\n"); //adds spacing
    
    row = 0;
    
    //part 2
    
    
    while(row <= 9){
        num = 9;
        printf("\n");
        spaces =10 - row;
        
        while(spaces != 0){ //creates correct number of spaces
            printf(" ");
            spaces--;
        }
        
        while(num >= 10 - row){ //takes away 1 from every row
            printf("%d", num); //left side
            num--;
        }
        
        while(num <= 9){ //adds 1 to every row
            printf("%d", num); //right side
            num ++;
        }
        row++; //adds row
        spaces--;
    }
    printf("\n"); //adds spacing
    printf("\n"); //adds spacing
    
}



