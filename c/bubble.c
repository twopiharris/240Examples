//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();

  return(0);
} // end main

void printValues(){
  int i = 0;
  printf("[");
  for (i = 0; i < MAX; i++){
    printf("%d ", values[i]);
  } // end for
  printf("] \n");
} // end printValues

void sort(){
  int i = 0;
  int j = 0;
  for (i = 0; i < MAX-1; i++){
      for (j = 0; j < MAX-1; j++){
        if (values[j] > values[j + 1]){
          swap(values + j, values + j + 1);
          printValues();
        } // end if
      } // end for
  } // end for
} // end sort

void swap(int *pA, int *pB){
  //printf( "before swap: a: %d, b: %d \n", *pA, *pB);
  int temp = *pA;
  int a = *pA;
  int b = *pB;

  *pA = b;
  *pB = temp;
  //printf( "after swap: a: %d, b: %d \n", *pA, *pB);
}
