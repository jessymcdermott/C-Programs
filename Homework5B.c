//jessy mcdermott



#include <stdio.h>

#include <stdlib.h>

#include <time.h>

//jagged array
float **jagged()
{
    float **table = (float **)calloc(5 + 1, sizeof(float *));

    table[0] = (float *)calloc(10, sizeof(float));
    table[1] = (float *)calloc(5, sizeof(float));
    table[2] = (float *)calloc(2, sizeof(float));
    table[3] = (float *)calloc(7, sizeof(float));
    table[4] = (float *)calloc(6, sizeof(float));
    table[5] = NULL;

    return table;
}

//fills jagged array with 30 randomly generated floats
void fill(float **jagged) 
{
    int r;
    float randomized;
    float **table = jagged;

    for (r = 0; r < 10; r++)
    {
        randomized = ((float)rand() / ((float)RAND_MAX + 1) *100); //first line
        table[0][r] = randomized;
        printf("%0.2f ", table[0][r]);
    }
    printf("\n");
    for (r = 0; r < 5; r++)
    {
        randomized = ((float)rand() / ((float)RAND_MAX + 1) *100);//  second line
        table[1][r] = randomized;
        printf("%0.2f ", table[1][r]);
    }
        printf("\n");

    for (r = 0; r < 2; r++)
    {
        randomized = ((float)rand() / ((float)RAND_MAX + 1) *100); //third line
        table[2][r] = randomized;
        printf("%0.2f ", table[2][r]);
    }
        printf("\n");

    for (r = 0; r < 7; r++)
    {
        randomized = ((float)rand() / ((float)RAND_MAX + 1) *100); //fourth line
        table[3][r] = randomized;
        printf("%0.2f ", table[3][r]);
    }
        printf("\n");

    for (r = 0; r < 6; r++)
    {
        randomized = ((float)rand() / ((float)RAND_MAX + 1) *100); //fifth line
        table[4][r] = randomized;
        printf("%0.2f ", table[4][r]);
    }
        printf("\n");
}

float partition(float f[], int left, int right, float pivot) {
   int leftPointer = left -1;
   int rightPointer = right;

   while(1) {
      while(f[++leftPointer] < pivot) {
         
      }
		
      while(rightPointer > 0 && f[--rightPointer] > pivot) {
         
      }

      if(leftPointer >= rightPointer) {
         break;
      } else {
         float temp = f[leftPointer];
         f[leftPointer] = f[rightPointer];
         f[rightPointer] = temp;
      }
   }
	
   float temp = f[leftPointer];
   f[leftPointer] = f[right];
   f[right] = temp;
 
   return leftPointer;
}

void quicksort(float *table, int low, int high)
{
  if(high-low <= 0)
    {
      return;   
    } 
   else 
    {
      float pivot = table[high];
      float partitionPoint = partition(table,low, high, pivot);
      quicksort(table,low,partitionPoint-1);
      quicksort(table,partitionPoint+1,high);
    } 

}


//
void insurtion(float table[], int r, int size)
{
    
    float num;
    int spot;
    
    //goes thru da numbers
    if(r < size)
    {
        //picks value to insert
        num = table[r];
        //puts the number into a position
        spot = r;
        //checks if number is larger than the previous
        while(spot > 0 && table[spot-1] > num)
        {
            table[spot] = table[spot - 1];
            spot--;
        }
        
        if(spot !=r)
        {
            table[spot] = num;
        }
        insurtion(table, r+1, size);
    }
}


//main
int main()
{
   
    int r = 0;
    int size;

    srand(time(NULL));

    float **table = jagged();

    fill(table);   
//goes line by line
    insurtion(table[0], r, 10);
    quicksort(table[1], r, 5-1);
    insurtion(table[2], r, 2);
    quicksort(table[3], r, 7-1);
    insurtion(table[4], r, 6);


    printf("Sorted--\n");

    int x = 0;
    for (x = 0; x < 10; x++)
    {
        printf("%0.2f ", table[0][x]);
    }
    printf("\n");

    for (x = 0; x < 5; x++)
    {
        printf("%0.2f ", table[1][x]);
    }
    printf("\n");

    for (x = 0; x < 2; x++)
    {
       printf("%0.2f ", table[2][x]);
    }
    printf("\n");

    for (x = 0; x < 7; x++)
    {
        printf("%0.2f ", table[3][x]);
    }
    printf("\n");

    for (x = 0; x < 6; x++)
    {
        printf("%0.2f ", table[4][x]);
    }
    printf("\n");


    return 0; //i tried 
}