//
//  test.c
//  
//
//  Created by Jessy McDermott on 11/16/16.
//
//

#include <stdio.h>
//Merge sort
int merge(int a[], int m, int b[], int n, int sorted[])
{
    int i, j, k;
    j = k = 0;
    for (i = 0; i < m + n;)
    {
        if (j < m && k < n)
        {
            //Compares for small value
            if (a[j] < b[k])
            {
                sorted[i] = a[j];
                j++;
            }
            //Compares for big value
            else if(a[j] > b[k])
            {
                sorted[i] = b[k];
                k++;
            }
            //Compares for equal value
            else if(a[j] == b[k])
            {
                sorted[i] = b[k];
                k++; j++;
            }
            i++;
        }
        //for rest of the element
        else if (j == m)
        {
            for (; i < m + n;)
            {
                sorted[i] = b[k];
                k++;
                i++;
            }
        }
        else
        {
            for (; i < m + n;)
            {
                sorted[i] = a[j];
                j++;
                i++;
            }
        }
    }
    return i;
}
//Selection sort
void selection(int list[], int i, int j, int size, int flag)
{
    int temp;
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            selection(list, i, j + 1, size, 0);
        }
        selection(list, i + 1, 0, size, 1);
    }
}

int main()
{
    int list1[30];      //First array
    int list2[30];      //Second array
    int sort[30];       //Third array
    int size1, size2;   //array sizes
    int temp;
    int r;
    int s;
    int len;
    int rando1;
    int randosize1, randosize2;
    
    
    srand(time(NULL));
    
    printf("\nPlease enter the size of your first array, hit enter, and then enter the ize of your second array. \n");
    scanf("%d %d", &size1, &size2);
    
    
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
        rando1 = (rand() % (100 + 1) - 0);
        list2[r] = rando1;
        printf("%d \n", list2[r]);
    }
    
    //YOURE COMBINING THE ARRAYS BEFORE THEY ARE SORTED
    len = merge(list1, size1, list2, size2, sort); // sort the array
    printf("\nThe sorted combiniation of the two lists is as follows \n \n"); // print sorted array
    
    for(r = 0; r < len - 1; r++)
        printf("%d \n",sort[r]);
    return 0;
}
