//
//homework1a.c
//Jessy McDermott
//10/1/16
//

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int get_day (int year);
int get_leapYear (int year);

void print_calendar (FILE *outFile, int year, int day, int leapYear);

//main
int main ()
{
    int year;
    int day;
    int month;
    int leapYear;
    int outFile;
    
    outFile = openFile ("calendar.txt", "w");
    year = year;
    day = get_day (year);
    leapYear = get_leapYear (year);
    
    print_calendar(outFile, year, day, leapYear);
    
    //ask user to open text file to see calendar
    //personally looks better than seeing it in your terminal
    printf("Please open the text file called calendar.txt to see your calendar");
}

int get_year (void)
{
    int year;
    //ask user for year that they want to look at
    printf ("What calendar year do you want to see?");
    scanf("%d", &year);
    return year;
}

int get_day (int year)
{
    //get day
    int day;
    int x1, x2, x3;
    x1 = (year - 1.)/ 4.0;
    x2 = (year - 1.)/ 100.;
    x3 = (year - 1.)/400.;
    day = (year + x1 - x2 + x3) %7;
    return day;
}

int get_leapYear (int year)
{
    //Check to see if the given year inputed is a leap year
    if(year% 4==0 && (year%100 != 0 || year %400==0))
        return TRUE;
    else return FALSE;
}

//function
void print_calendar (FILE *outFile, int year, int day, int leapYear)
{
    //number of days in the month being printed
    int  days_per_month,
    
    dayCounter,
    month;
    fprintf (outFile,"\t\t\t%2d", year);
    for (month = 1; month <= 12; month++) {
        switch (month) {
            case 1:
                //month 1
                fprintf(outFile,"\nJanuary" );
                days_per_month = 31;
                break;
            case 2:
                //month 2
                fprintf(outFile,"\nFebruary" );
                days_per_month = leapYear ? 29 : 28;
                break;
            case 3:
                //month3
                fprintf(outFile, "\nMarch" );
                days_per_month = 31;
                break;
            case 4:
                //month 4
                fprintf(outFile,"\nApril" );
                days_per_month = 30;
                break;
            case 5:
                //month 5
                fprintf(outFile,"\nMay" );
                days_per_month = 31;
                break;
            case 6:
                //month 6
                fprintf(outFile,"\nJune" );
                days_per_month = 30;
                break;
            case 7:
                //month 7
                fprintf(outFile,"\nJuly" );
                days_per_month = 31;
                break;
            case 8:
                //month 8
                fprintf(outFile,"\nAugust" );
                days_per_month = 31;
                break;
            case 9:
                //month 9
                fprintf(outFile,"\nSeptember" );
                days_per_month = 30;
                break;
            case 10:
                //month 10
                fprintf(outFile,"\nOctober" );
                days_per_month = 31;
                break;
            case 11:
                //month 11
                fprintf(outFile,"\nNovember" );
                days_per_month = 30;
                break;
            case 12:
                //month 12
                fprintf(outFile,"\nDecember" );
                days_per_month = 31;
                break;
        }
        fprintf(outFile,"\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );
        //fixes position for first day
        for ( day = 1; day <= 1 + day * 5; day++ )
            fprintf(outFile," ");
        //prints days for month
        for ( day = 1; day <= days_per_month; day++ ) {
            fprintf(outFile,"%2d", day);
            if ( ( day + day ) % 7 > 0 )
                fprintf(outFile,"\t");
            else
                fprintf(outFile,"\n");
        }
        // calculates where to start next month
        day = (day + days_per_month) % 7;
    }
}





/* 
day and year
int year;
int day;
/*months
int January = 1
int February;
int March;
int April;
int May;
int June;
int July;
int August;
int September;
int October;
int November;
int December;
 letter variables
int N;
int i;


// how many days in which month
int DaysInMonth[] = (31,28,31,30,31,30,31,31,30,31,30,31);
char *month[] = (January, February, March, April, May, June, July, August, September, October, November, December);
//USE CASE IN A LOOP INSTEAD
 
 
//ask user what year they would like to see
printf("What year would you like to look at?");
scanf("%d", &year);
return year;


//basic for how it'll print out
printf("%c\t\t\t\t\t%d\n", month, year);
printf("Sun\tMon\tTues\Wed\tThur\tFri\tSat\n");
//dates go under appropriate days


//calculate the day of the week
int get_day (int year)
 int day;
 int x1, x2, x3
 //does math to figure out the first day

//calculate if the year given is a leap year
int leapYear(int Year)

{
 if(year% 4 == FALSE &&  if(year% 4==0 && (year%100 != 0 || year %400==0))
 return TRUE;
 else return FALSE;
 }

*/



