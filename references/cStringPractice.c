#include <stdio.h>
#include <string.h>

int main(){
  char myString[1000];
  int len;

  strcpy(myString, "Binky");
  len = strlen(myString);
  printf("Length: %d \n", len);
  int i = 0;
  for (i = 0; i < 10; i++){
    printf("%d: %c \n", i, myString[i]);
  } // end for loop

  printf("\n Embedding a hidden message: \n");
  myString[6] = 'H';
  myString[7] = 'i';

  for (i = 0; i < 10; i++){
    printf("%d: %c \n", i, myString[i]);
  } // end for loop

  printf("\n Cutting a string short: \n");
  myString[3] = '\0';
  printf("%s \n", myString);

  return(0);
} // end main
