#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>



int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
/* Create an array diffs_found equal in size to the size of the sequence that holds boolean values.
 * Any difference found between the numbers in seq is set to true in diffs_found. If all the differences
 * are found in seq then it must be a jolly jumper.
*/
    bool diffs_found[size];
    //First element needs to be set to true because difference will never be 0.
    diffs_found[0] = true;
    for(int i = 0; i < size-1; i++){
        int diff;
        diff = seq[i]- seq[i+1];

        //We need to take the absolute difference since we don't know the order of the numbers.
        if(abs(diff) <= size){
            diffs_found[abs(diff)] = true;
        }
        
    }
    //Check if every difference is found. If one element of diffs_found is false then it's not a jollyjumper.
    for(int i = 0; i < size; i++){
        if(diffs_found[i] == false){
            return false;
        }   
    }
    //Every difference was found here and it is a jollyjumper.
    return true;
}

