//
//  lab3.c
//  
//
//  Created by Jessy McDermott on 10/2/16.
//
//


int main ()


int random_number;



random_number = (rand() % 10) + 10;
printf("%d\n", random_number);
return 0;


srand(time(NULL)); //This will set our seed for the program


//rand() % 11 + 10 //will generate random numbers between 10 and 20
//rand() % ((max +1) – min) + min //will generate random number between min and max (min : max)


