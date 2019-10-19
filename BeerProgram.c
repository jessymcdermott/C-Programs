#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define BUFFERSIZE 512


//struct
struct beers
{
    char name[BUFFERSIZE];
    char id[BUFFERSIZE];
    int qty;
    float price;
} ;

void sortSelect(struct beers *record, int r, int size)
{
    if(r < size)
    {
        int small = r;
        int s = r + 1;
        
        //finds smallest id
        for(;s < size; s++)
        {
            if (record[s].price < record[small].price)
            {
                small = s;
            }
        }
        
        if(small != r)
        {
            struct beers temp = record[small];
            record[small] = record[r];
            record[r] = temp;
        }
        sortSelect(record, r + 1, size);
    }
    
}

void printStruct(struct beers *record, int size)
{

    int r;
    sortSelect(record, 0, size);
    int x; 

    //prints out full struct
    for(x = 0; x < size; x++)
    {

        printf(" Name: %s \n", record[x].name);
        printf(" ID: %s \n", record[x].id);
        printf(" QTY: %d \n", record[x].qty);
        printf(" Price: %0.2f \n", record[x].price);
        printf("\n");
    }
}

int match( char m1[], char m2[])
{

    int x;

    if(strlen(m1) == strlen(m2)-1)
    {
        for(x = 0; x < strlen(m1) - 1; x++)
        {
            if(m1[x] != m2[x])
            {
                return 0;
            }
        }  
         return 1;
    }
    else 
    {
        return 0;
    }
}

void beersSearch(struct beers *record, char id[], int size)
{
    int x;
    int b = 0;

    for(x = 0; x < size; x++) //goes until id matches one in the array
    {
        if(match(record[x].id, id))
        {
            printf(" Name: %s \n", record[x].name);
            printf(" QTY: %d \n", record[x].qty);
            printf(" Price: %0.2f \n", record[x].price);
            printf("\n");

            return;
        }
    }

    printf("Please enter a valid ID. \n");

}



void beersOrder(struct beers *record, char id[], int size)
{
    int x = 0;
    float num = 0;
    float price = 0;
    float total = 0;

    //asks how many beers to get num
    printf(" How many beers would you like? \n");
    scanf("%f", &num);

    for(x = 0; x < size; x++)
    {
        if(match(record[x].id, id))
        {
                if(num < record[x].qty)
                {

                    price = record[x].price; //sets price float to price 
                    total = price * num; //calculates total of bill
                    printf(" Your bill is: %0.2f \n", total);
                }
                    else 
                    {
                        printf(" You're drunk. \n"); //if you want more than the QTY
                    }
        }
    }
}

int main(){
     

     int i = 0;
     int x = 0;
     int user = 0;
     int size = 0;
     char buffer[BUFFERSIZE];
     int quantity;
    

    FILE *inFile;
    struct beers *record = malloc(sizeof(struct beers)*size);

    //inports dat file
    inFile = fopen("beers.dat", "r");
    fgets(buffer, BUFFERSIZE, (FILE *)inFile); 
    sscanf(buffer, "%d", &size);

    //inputs my file 
    for(i = 0; i < size; i++)
    {
        //finds name
        fgets(buffer, BUFFERSIZE, (FILE *)inFile);
        buffer[strlen(buffer) - 1] = '\0';
        for(x = 0; x < size; x++)
        {
            record[i].name[x] = buffer[x]; 
        }

        //finds id
        fgets(buffer, BUFFERSIZE, (FILE *)inFile);
        buffer[strlen(buffer) - 1] = '\0';
        for(x = 0; x < size; x++)
        {
            record[i].id[x] = buffer[x];
        }

        //gets quantity
        fgets(buffer, BUFFERSIZE, (FILE *)inFile);
        sscanf(buffer, "%d", &record[i].qty);

        //gets price
        fgets(buffer, BUFFERSIZE, (FILE *)inFile);
        sscanf(buffer, "%f", &record[i].price);
    }

    //while loop for menu and options
    while(1)
    {

         //opening of the program
    //gives user options on what to do
    printf(" Please type the number for the option you would like to do. \n");
    printf(" 1 Search for a beer using ID \n");
    printf(" 2 View entire inventory \n");
    printf(" 3 Place an order of beer \n");
    printf(" 0 Quit \n");
    printf("\n");

    //gets user input
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%d", &user);
    
            switch(user)
            {
                case 0:
                    return 0;
                    break;
                case 1:
                    printf(" What is the ID of the beer you are looking for? \n");
                    fgets(buffer, BUFFERSIZE, stdin);
                    beersSearch(record, buffer, size); //finds beer information
                    break;
                case 2:
                    printStruct(record, size); //sorts in printStruct
                    break;
                case 3:
                    printf("What is the ID of the beer you would like to buy? \n");
                    fgets(buffer, BUFFERSIZE, stdin);
                    beersOrder(record, buffer, size); //creates order for user
                    break;
            }
    }
    
 return 0;
}