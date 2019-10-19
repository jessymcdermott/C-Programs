//
//  lab3b.c
//  
//
//  Created by Jessy McDermott on 10/3/16.
//
//

#include <stdio.h>
#define MIN 0
#define MAX 32767

int main()

{
    //declare int
    int num = 1;
    //while loop
    while (num > MAX || num < MIN)
    {
        printf("Enter a number between 0 & 32767");
        scanf("%d", &num);
    }
    //declare digits 1 - 5
    int dig5 = num%10;
    int dig4 = (num%100)/10;
    int dig3 = (num%1000)/100;
    int dig2 = (num%10000)/1000;
    int dig1 = (num%100000)/10000;
    
    //print digits so they print "The first line is to start with the leftmost digit and print all five digits; the second line is to start with the second digit from the left and print four digits, and so forth."
    //how else do u explain that other than just taking it from the lab idk man
    printf("%d\t%d\t%d\t%d\t%d\n", dig1, dig2, dig3, dig4, dig5);
    printf("%d\t%d\t%d\t%d\n", dig2, dig3, dig4, dig5);
    printf("%d\t%d\t%d\n", dig3, dig4, dig5);
    printf("%d\t%d\n", dig4, dig5);
    printf("%d\n", dig5);

}