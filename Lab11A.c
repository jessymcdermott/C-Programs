//jessy mcdermott
//lab11a
//dec 5th

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define BUFFERSIZE 512


//struct
struct restaurant
{
    char name[BUFFERSIZE];
    char type[BUFFERSIZE];
    float price;
    int rate;
} ;

//sorts restraunts by rate of spoons
void rateSort(struct restaurant *record, int r, int size) //
{
    if(r < size)
    {
        int small = r;
        int s = r + 1;
        
        //finds smallest id
        for(;s < size; s++)
        {
            if (record[s].rate > record[small].rate)
            {
                small = s;
            }
        }
        
        if(small != r)
        {
            struct restaurant temp = record[small];
            record[small] = record[r];
            record[r] = temp;
        }
        rateSort(record, r + 1, size);
    }
    
}

//sorts restruatns by name
void nameSort(struct restaurant *record, int r, int size) //
{
    int x = 0;
    if(r < size)
    {
        int small = r;
        int s = r + 1;
        
        //finds first
        for(;s < size; s++)
        {
            //sorts others
            if (record[s].name[x] < record[small].name[x])
            {
                small = s;
            }
        }
        
        if(small != r)
        {
            struct restaurant temp = record[small];
            record[small] = record[r];
            record[r] = temp;
        }
        nameSort(record, r + 1, size);
    }
    
}

//ourComparees
int ourCompare(char *st1, char *st2)
{
    int x = 0;
    int y = 0;
    //find the lenght of each string store in x
    for(x = 0; x < BUFFERSIZE; x++)
    {
        // if st1 is x long
        if(st1[x] == '\n' || st1[x] == 13)
        {
            // if st2 is x long
            if(st2[x] == '\n' || st2[x] == 13)
            {
                // they are the same lengt so we can proceed
                break;
            }
            else
            {
                return 0;
            }
        }
        // if st2 is shorter
        if((st2[x] == '\n' || st2[x] == 13))
        {
            //not the same length
            return 0;
        }
    }
    // loop through the string until one before x checking the chars
    for(y = 0; y < x; y++)
    {
        //if the any char in the string is not equal
        if(st1[y] != st2[y])
        {
            return 0;
        }
    }
    //the strings are equal
    return 1;
}

//searches thru restraurnts 
void restaurantSearch(struct restaurant *record, char name[], int size)
{
    int x;
    int b = 0;

    nameSort(record, 0, size);

    for(x = 0; x < size; x++) //goes until id ourComparees one in the array
    {
        if(ourCompare(record[x].name, name))
        {
            //prints out information
            printf("Name: %s", record[x].name);
            printf("Type: %s", record[x].type);
            printf("Rating: %d \n", record[x].rate);
            printf("Price: %0.2f \n", record[x].price);
            printf("\n");

            return;
        }
    }
    //if you dont enter a vaild name
    printf("Please enter a valid restaurant. \n");

}

//prints restraunts by name
void printRest(struct restaurant *record, int size) //name
{

    int r;
    //calls name sort
    nameSort(record, 0, size);
    int x; 

    //prints out full struct
    for(x = 0; x < size; x++)
    {
        //prints information
        printf("Name: %s", record[x].name);
        printf("Type: %s", record[x].type);
        printf("Rating: %d \n", record[x].rate);
        printf("Price: %0.2f \n", record[x].price);
        printf("\n");
    }
}

//prints resturatns by spoons
void printRate(struct restaurant *record, int size) //rating
{

    int r;
    //calls rate sort
    rateSort(record, 0, size);
    int x; 

    //prints out full struct
    for(x = 0; x < size; x++)
    {
        //prints info
        printf("Name: %s", record[x].name);
        printf("Type: %s", record[x].type);
        printf("Rating: %d \n", record[x].rate);
        printf("Price: %0.2f \n", record[x].price);
        printf("\n");
    }
}

//main
int main(){
     
    //variables
     int i = 0;
     int x = 0;
     int user = 0;
     int size = 0;
     char buffer[BUFFERSIZE];
        //calls to reviews
    FILE *inFile;
    //inports dat file
    inFile = fopen("reviews.txt", "r");
    fgets(buffer, BUFFERSIZE, inFile); 
    sscanf(buffer, "%d/n", &size);
    
 
    struct restaurant *record = malloc(sizeof(struct restaurant)*size);


    //inputs my file 
    for(i = 0; i < size; i++)
    {
        //finds name
        fgets(record[i].name, BUFFERSIZE, inFile);
        //finds id
        fgets(record[i].type, BUFFERSIZE, inFile);
        //gets price
        fgets(buffer, BUFFERSIZE, (FILE *)inFile);
        sscanf(buffer, "%f", &record[i].price);

        //gets quantity
        fgets(buffer, BUFFERSIZE, (FILE *)inFile);
        sscanf(buffer, "%d", &record[i].rate);
    }

    //while loop for menu and options
    while(1)
    {

         //opening of the program
    //gives user options on what to do
    printf("\n");    
    printf("Please type the number for the option you would like to do. \n");
    printf("1 Search for a restuarant \n");
    printf("2 View entire list by name \n");
    printf("3 View entire list by rating \n");
    printf("0 Quit \n");

    //gets user input
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%d", &user);
    
            switch(user)
            {
                case 0:
                    return 0;
                    break;
                case 1:
                    printf("What is the name of the restaurant you are looking for? \n");
                    fgets(buffer, BUFFERSIZE, stdin);
                    restaurantSearch(record, buffer, size); //finds restaurant information
                    break;
                case 2:
                    printRest(record, size); //prints restaurants in alphebetical order
                    break;
                case 3:
                    printRate(record, size); //prints restruants in rating order
                    break;
            }
    }
    
 return 0;
}
     