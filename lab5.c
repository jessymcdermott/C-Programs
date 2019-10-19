//
//  lab5.c
//
//
//  Created by Jessy McDermott on 10/14/16.
//
//

#include <stdio.h>


int main ()
{
    
    // define everything
    int n = 0;
    int a = 0;
    int sigma = 0;
    int pie = 1;
    int b = 0;
    int d = 0;
    int innerSum = 0;
    int outerSum = 0;
    int i;
    int j;
    int answer;
    
    //ask user for n
    printf("What does n equal?");
    scanf("%d", &n);
    printf("%d \n", n);
    //reprint n to make sure it's correct
    
    //a part 1
    if(n <= 5){
        for(i = 2; i <= n; i++, pie = 1) {
            for(j = 2; j <= i; j++) {
                pie *= (j + i);
            }
            sigma += pie ;
        }
        a = sigma;
    }
    //a part 2
    if( n >= 6 && n < 10){
        
        for(i = 1; i <= n; i++) {
            sigma += (i + 2);
        }
        a = sigma;
    }
    
    //a part 3
    if(n >= 10){
        a = n * 34 ;
    }
    
    // b part 1
    if (n < 10){
        b = n + 1;
    }
    // b part 2
    else if (n >= 10){
        b = (n+1) * (n+2);
    }
    
    //what does d equal
    switch (n){
        case 1:
            //n = 1
            d = n * 2;
            break;
        case 2:
            //n = 2
            d = n * 2;
            break;
        case 3: //skip
        case 4: //skip
        case 5: //skip
            //n = 5
            d = n * n;
            break;
        default:
            //n = 10
            d = n - 1;
            break;
    }
    
    //the actual math equation
    answer = a * ( b / d ) - a * b + d;
    printf("a = %d\n", a); // prints out a
    printf("b = %d\n", b); //prints out b
    printf("d = %d\n", d); //print out d
    //final rint statement
    printf("%d * (%d / %d) - %d * %d + %d = %d \n",a, b, d, a, b, d, answer);
    
    return 0;
}














