/******************************************************************************
 * Copyright (C) 2020 by Aditya R
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Aditya R is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief A header file to use all the statistical functions
 *
 * It has functions like mean,median,maximun,minimum,etc.
 *
 * @author Aditya R
 * @date 6/7/2020
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  unsigned char mean,med,max,min;
  
  print_statistics(test,SIZE);
  print_array(test,SIZE);
  sort_array(test,SIZE);
  mean=find_mean(test,SIZE);
  med=find_median(test,SIZE);
  max=find_maximum(test,SIZE);
  min=find_minimum(test,SIZE);
  printf("%c %c %c %c",mean,med,max,min);

}

/* Add other Implementation File Code Here */
