//
//  Homework2Prob1.c
//  
//
//  Created by Jessy McDermott on 10/20/16.
//
//
#include <math.h>
#include <stdio.h>

//int passbyRef(int *p);

void sum(int *i, int *sumRunning);
int less(int num);
int range(int num, int *range);
double avg(int countNum, int sumRunning);
double squareRoot(double x);


int main()
{
    
//variables
    int increment;
    int num = 0;
    int between = 1;
    int countNum = 0;
    int sumRunning = 0;
    int lessThan;
    //
// create while statement for print f

    while(1){
        printf("Please enter a number"); //done
        scanf("%d", &num);
        countNum++;
        printf("The number of intergers is: \t\t%d\n", countNum);//done
        printf("The sum of the intergers is: \t\t%d\n", sum(&num, &sumRunning)); //done
        printf("The average of the integers is: \t%f\n", avg(countNum, sumRunning)); //done
        printf("The squareroot of the integers is: %f\n", squareRoot(num));
        printf("At least one number was less than 20: %d", less(num));
               printf("All numbers were between 10 and 90: %d", range(num, &between));
        }
            
               return 0;
    }//end while statement
        
//function for finding the sum of the numbers
        void sum(int i, int *sumRunning){
            *sumRunning += i;
            }

//function for finding the average of the sum
        double avg(int countNum, int sumRunning){
            return (double) countNum / (double) sumRunning;
            }

//function for fidning the square root
        double squareRoot(double x){
            double i;
            return sqrt(x);
            }
        
//check for if a number was less than 20
        int less(int num){
            int pizza;
            if(num < 20){
                pizza = 1;
            }
                return pizza;
        }
        
//check to see if all numebrs fall between 10 and 90
        int between(int num, int *range){
            if(num < 10 || num > 90){
                *range = 0;
            }
                return *range;
        }
        
        
        
        
        
//print average and sum of all numbers
// while (num != 99999)
 //{
//     countNum++;
  //   sum += num;

//finds and prints square root of every number
 //    double num, result;
   //  result = sqrt (num);
    
//prints a boolean true or false for if some of the numbers are less than 20
//if (num < 20)
//{
//    less = 1;
//}

//print a boolean true or false for if some of the numbers are between 10 and 90
//if (num <= 10 || num >= 90)
//{
//    between = 0;
//}
   
//     scanf("%lf", &num);
     
// }

 //   average = sum / countNum;
    

//printf statements
  
    
    //printf for num < 20 use else if statement
//    {
  //          if (less == 1)
    //    printf("At least one number was < 20: \tTrue\n");
      //      else printf("At least one number was < 20: \tFalse\n");
    //}
    
    //printf for all nums between 10 and 90
    
//    {
  //          if (between == 1)
    //            printf("All numbers were between 10 and 90: \tTrue\n");
      //      else printf("All numbers were between 10 and 90: \tFalse\n");
   // }



//int passbyRef(int *p){
    
  //  p=2*5;
    
    //return 0;
    
