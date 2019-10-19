//jessy mcdermott



#include <stdio.h>
#include <time.h>
#include <stdlib.h> 


//creates and fills first array with randomly generated numbers
void create(int list[], int r, int size, int randomized)
{
    for(r=0; r < size; r++)
    {
        randomized = (rand() % (100 + 1) - 0 );
        list[r] = randomized;
        printf("%d \n", list[r]);
    }
}


//recursive selection sort
//biggest to smallest
void select(int sort[], int r, int size)
{
    if(r < size)
    {
        int small = r;
        int s = r + 1;
        
        //finds smallest number
        for(;s < size; s++)
        {
            if (sort[s] < sort[small])
            {
                small = s;
            }
        }
        
        if(small != r)
        {
            int temp = sort[small];
            sort[small] = sort[r];
            sort[r] = temp;
        }
        select(sort, r+1, size);
    }
    
}


//recursive insertion sort
//smallest to biggest
void insurtion(int insert[], int r, int size)
{
    
    int num;
    int spot;
    
    //goes thru da numbers
    if(r < size)
    {
        //picks value to insert
        num = insert[r];
        //puts the number into a position
        spot = r;
        //checks if number is larger than the previous
        while(spot > 0 && insert[spot-1] < num)
        {
            insert[spot] = insert[spot - 1];
            spot--;
        }
        
        if(spot !=r)
        {
            insert[spot] = num;
        }
        insurtion(insert, r+1, size);
    }
}

//allocates 
void allocation(int **sort, int **insert, int list[])
{
    *sort = (int*)calloc(5, sizeof(int));
    *insert = (int*)calloc(5, sizeof(int));

    int x;

    for(x = 0; x < 5; x++)
    {
        (*sort)[x] = list[x];
        (*insert)[x] = list[x];
    }
}

//print arrays
void print(int **sort, int **insert, int list[])
{
    int x, sizeN = 5;

    for(x =0; x < sizeN; x++)
    {
        printf("Your first array before being sorted is %d: %d \n", x, list[x]);
    }

    printf("\n");
    select(*sort, 0, 5);
    insurtion(*insert, 0, 5);

    for(x = 0; x < sizeN; x++)
    {
            printf("Your array in ascending order %d: %d \n", x, (*sort)[x]);
    }

    printf("\n");

    for(x = 0; x < sizeN; x++)
    {
            printf("Your array in decending order %d: %d \n", x, (*insert)[x]);
    }
}



//main?
int main()
{
    
    
//arrays
int **sort = malloc(sizeof(int*)); //ascending
int **insert = malloc(sizeof(int*)); //decending
int list[5]; //random numbers
int size = 5;
int temp, num, spot, r, randomized;

srand(time(NULL));  //i actually dont know what this does but john told me to put it here

create(list, r, size, randomized);  //creates 30 random floats

allocation(sort, insert, list); // allocates numbers

print(sort, insert, list);  //prints lists

free(*sort);
free(*insert);
free(sort);
free(insert);
return 0;

}


