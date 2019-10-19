//
//  pizza2.c
//  
//
//  Created by Jessy McDermott on 11/4/16.
//
//

#include <stdio.h>


int countslice(int numslice, int numpeople, int sliceleft, int numpizza, int slicetotal){
   
    
    if (numslice > numpeople) {
        return numslice;
        //if the number of slices isnt enough to feed the number of people those extra slices are basiclally just thrown out bc day 2 pizza is gross
    } else {
        numslice = (numpizza * slicetotal) / numpeople;
        return countslice(numslice, numpeople, sliceleft, numpizza, slicetotal);
        //allows you to be able to figure out how many slices everyone can get while having the same number of slices
    }
    
}


int main(){
    
    int numpizza; //number of pizza
    //int slice;
    int numslice =0; //number of slice per person
    int numpeople; //number of pizza
    int sliceleft; //leftovers
    int slicetotal = 8;
    
    
    
    printf("How many people are eating pizza? \n"); //ask how many people are eating
    scanf("%d", &numpeople);
    
    printf("How many pizzas are you getting? \n"); //ask how many pizzas are being ordered
    scanf("%d", &numpizza);

    printf("Everyone gets %d slices of pizza. \n", countslice(numslice, numpeople, sliceleft, numpizza, slicetotal)); //tells you how many slices everyone gets

    
    return 0;
    
}

