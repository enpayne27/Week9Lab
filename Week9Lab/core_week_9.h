//
//  core.h
//  Project 3 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#ifndef core_h
#define core_h

#include <stdio.h>
// This function needs to malloc a variable of the given type
// i.e. int * x = malloc(int, 5) should expect int * x malloc(sizeof(int)*5)
#define ALLOC(type, count) malloc(sizeof(type) * count)

// This macro needs to set the given array to the given value.
// i.e. int x[5];
// SET_ARRAY(x, 3, 5);
// After this all of x's elements should be 3.
#define SET_ARRAY(array, value, length){\
   for(int i = 0; i < length; i++){\
	array[i] = value;\
   }\
}

//This macro needs to swap the elements a and b which have type T.
#define SWAP(T, a, b){\
   T temp = a;\
   a = b;\
   b = temp;\
}

//This should square the value of a.
#define SQUARE(a) (a)*(a)

int core_main(int argc, const char * argv[]);

#endif /* core_h */
