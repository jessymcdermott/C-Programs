
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFERSIZE 512

typedef struct node
{
    char name[BUFFERSIZE];
    char type[BUFFERSIZE];
    int model;
    float value;
    float price;
    struct node *next;
} LINK;

void addCar(*next)
{
    //add node to link list allocate
    struct node *list = malloc(sizeof(struct node) * size);

    char name[BUFFERSIZE];
    char type[BUFFERSIZE];
    int buffer[BUFFERSIZE];
    int model;
    float value;
    float price;
    int i = 0;

    printf("Enter Car Model \n");
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%s", &list[i].name);
    printf("Enter Car Type \n");
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%s", &list[i].type);
    printf("Enter Model Year \n");
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%f", &list[i].year);
    printf("Enter Car Value \n");
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%f", &list[i].value);
    printf("Enter Car Price \n");
    fgets(buffer, BUFFERSIZE, stdin);
    sscanf(buffer, "%f", &list[i].price);

    printf("Would you like to add another car? Yes: 1 No: 0");
    while (1)
    {
        struct node *list = malloc(sizeof(struct node) * size);
        printf("Enter Car Model \n");
        fgets(buffer, BUFFERSIZE, stdin);
        lists->name;
        //string copy function strcpy()
        printf("Enter Car Type \n");
        fgets(buffer, BUFFERSIZE, stdin);
        next->name = type;
        printf("Enter Model Year \n");
        fgets(buffer, BUFFERSIZE, stdin);
        next->type = year;
        printf("Enter Car Value \n");
        fgets(buffer, BUFFERSIZE, stdin);
        next->year = value;
        printf("Enter Car Price \n");
        fgets(buffer, BUFFERSIZE, stdin);
        next->value = price;
    }
}

int main()
{

    int user;
    int i = 0;
    int size;

    struct node *list = malloc(sizeof(struct node) * size);
    list = realloc(list, size);
    (*list)[i];

    addCar(LINK * next)

        //call add car

        //must have all of this become assiged to a spot in the array struct

        addCar(LINK * next);

    while (1)
    {

        //opening of the program
        //gives user options on what to do
        printf("1 See A Car's Information \n");
        printf("2 Add a Car \n");
        printf("3 Remove a Car \n ");
        printf("4 Generate a Report (to a textfile) \n");
        printf("0 Exit \n");

        scanf("%d", &user);

        switch (user)
        {
        case 0:
            return 0;
            break;
        case 1:
            printf("Enter Car Name\n");

            break;
        case 2:

            break;
        case 3:

            break;
        case 4:

            break;
        }
    }
}

/*
    for(i = 0; i < size; i++)
    {
        //finds name
        fgets(buffer, BUFFERSIZE, stdin);
        buffer[strlen(buffer) - 1] = '\0';
        for(x = 0; x < size; x++)
        {
            list[i].name[x] = buffer[x]; 
        }

        //finds id
        fgets(buffer, BUFFERSIZE, stdin;
        buffer[strlen(buffer) - 1] = '\0';
        for(x = 0; x < size; x++)
        {
            list[i].type[x] = buffer[x];
        }

        //gets quantity
        fgets(buffer, BUFFERSIZE, stdin;
        sscanf(buffer, "%d", &list[i].model);

        //gets value
        fgets(buffer, BUFFERSIZE, stdin;
        sscanf(buffer, "%f", &list[i].value);
        
        //gets price
        fgets(buffer, BUFFERSIZE, stdin;
        sscanf(buffer, "%f", &list[i].price);
    }

    */