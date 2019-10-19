
//  Homework3.c
//
//
//  Created by Jessy McDermott on 11/3/16.
//
//

#include <stdio.h>
#include <math.h>

//number of 7by7 tiles
int findlittletile(int arealittle)
{
    
    //if else statement to figure out how many small tiles needed to cover the area above and below the shower
    if(arealittle <= 0)
        return 0;
    else
        ((arealittle - 49) * 2);
         return findlittletile(arealittle - 49) + 1;
    //
         }
         
         
         //number of 13by15 tiles
         int findbigtile(areabig)    //LOOK AT YOUR PARAMETER... WHATS MISSING HERE?
    {
        
        //if else statement to figure out how many big tiles needed to cover the main area of the bathroom
        if(areabig <= 0)
            return 0;
        else
            (areabig - 195);
        return findbigtile(areabig - 195) + 1;    
        //195 feet total
    }
         
         
         int main(){
             
             int areabig = 18720;
             int arealittle = 2160;
             
             //tells user how many 13by15 tiles needed to fill the big area
             printf("\nThe number of 13X15 tiles needed is: %d \n", findbigtile(areabig));
             
             //tells user how many 7by7 tiles needed to fill above and below the shower
             printf("\nThe number of 7x7 tiles needed is: %d \n", findlittletile(arealittle));
             
             //end program
             return 0;
             
             
             
             /*
              little area times two for above and below area
              7 x 7 = 49
              49 x 88 = 4312
              
              big area
              13 x 15 = 195
              195 x 96 = 18720
              
              18720 + 4312 = 23,032
              
              23,032 = area of bathroom WITHOUTTHE SHOWER
              
              
              
              if this is wrong someone please explain to me how
              */
             
         }