#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


//step 2: produce a new list of numbers(list of pointers to integers)
//use strtol to convert strings to numbers

void StringToInteger(element_t* out, element_t in_string) {
    int **result = (int**) out;
    char* in=in_string;
    char* end;
    *result = malloc(sizeof(int*));
    **result = strtol(in, &end, 10);

    if (*end) {
        **result=-1;
    }

}

//step 3
//


//step 1
int main(int argc, char **argv) {

}