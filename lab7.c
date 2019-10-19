//
//  lab7.c
//  
//
//  Created by Jessy McDermott on 10/28/16.
//
//

#include <stdio.h>



int backwards(int n)   {
    
    if(n/10>0){
        backwards(n/10);
        printf("%d", n%10);
    }
    else{
        printf("%d", n);
    }
    
}


int main()  {
    
    int n =0;
    Printf("Please enter a number.\n");
    Scanf("%d", n);
    
    backwards(n);
    
    return 0;
    
}