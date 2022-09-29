#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>
#include <stdlib.h>



int isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
    bool diffs_found[size];
    diffs_found[0] = true;
    for(int i = 0; i < size-1; i++){
        int diff;
        diff = seq[i]- seq[i+1];

        if(abs(diff) <= size){
            diffs_found[abs(diff)] = true;
        }
        
    }
    for(int i = 0; i < size; i++){
        if(diffs_found[i] == false){
            return false;
        }   
    }
    return true;
}

