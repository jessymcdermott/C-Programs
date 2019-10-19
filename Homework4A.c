//
//  Homework4A.c
//
//
//  Created by Jessy McDermott on 11/14/16.
//
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDOM_MAX 10


//combine sort
int merge(int list1[], int j, int list2[], int k, int sort[])
{
    int r = 0, s = 0, t = 0;
    s = t = 0;
    
    for (r = 0; r < j + k;)
    {
        if (s < j && t < k)
        {
            
            //compares random values to see how small they are and place them in the third array
            if (list1[s] < list2[t])
            {
                sort[r] = list1[s];
                s++;
            }
            
            //compares random values to see how large they are and place them in the third array
            else if(list1[s] > list2[t])
            {
                sort[r] = list2[t];
                t++;
            }
            
            //compares random values to see if any of them are equal to each other
            else if(list1[s] == list2[t])
            {
                sort[r] = list2[t];
                t++;
                s++;
            }
            r++;
        }
        
        //for everything else
        else if (s == j)
        {
            for (; r < j + k;)
            {
                sort[r] = list2[t];
                t++;
                r++;
            }
        }
        else
        {
            for (; r < j + k;)
            {
                sort[r] = list1[s];
                s++;
                r++;
            }
        }
    }
    return r;
}


void select(int list[], int r, int size)
{
    if(r < size)
    {
        int small = r;
        int s = r + 1;
        
        //finds smallest number
        for(;s < size; s++)
        {
            if (list[s] < list[small])
            {
                small = s;
            }
        }
        
        if(small != r)
        {
            int temp = list[small];
            list[small] = list[r];
            list[r] = temp;
        }
        select(list, r+1, size);
    }
}

int main()
{

    int sort[30];       //Third array
    int size1 = 0, size2 = 0;   //array sizes
    int r = 0;
    int s = 0;
    int i = 0;
    int len = 0;
    int rando1, rando2;
    int randosize1, randosize2;

    
    srand(time(NULL));
    
    printf("\nPlease enter the size of your first array, hit enter, and then enter the ize of your second array. \n");
    scanf("%d %d", &size1, &size2);

    int list1[size1];      //First array
    int list2[size2];      //Second array
    
    printf("\nThe first list of random numbers is: \n \n");
    
    // fills my first array with random numbers
    for (r = 0; r < size1; r++)
    {
        rando1 = (rand() % (100 + 1) - 0);
        list1[r] = rando1;
        printf("%d \n", list1[r]);
    }
    
    
    printf("\nThe second list of numbers in order is:\n \n");
    
    //fills my second array with random number
    for (r = 0; r < size2; r++)
    {
        rando2 = (rand() % (100 + 1) - 0);
        list2[r] = rando2;
        printf("%d \n", list2[r]);
    }
    for( r = 0; r < size1; r++)
    {
        printf("Index [%d], after the merge it's %d \n", r, list1[r]);
    }
    for( r = 0; r < size2; r++)
    {
        printf("Index [%d], after the merge it's %d \n", r, list2[r]);
    }
    
    select(list1, 0, size1);
    select(list2, 0, size2);
    
    for( r = 0; r < size1; r++)
    {
        printf("Numbers for list1 are %d, after the merge it's %d \n", r, list1[r]);
    }
    for( r = 0; r < size2; r++)
    {
        printf("Numbers for list2 are %d, after the merge it's %d \n", r, list2[r]);
    }
    
    len = merge(list1, size1, list2, size2, sort); // sort the array
    
    printf("\nMerge Sorted array:\n"); // print sorted array
    
    for(i=0; i<len-1; i++){
        printf("%d ",sort[i]);
    }
    
    
    
    
    return 0;
    
}

