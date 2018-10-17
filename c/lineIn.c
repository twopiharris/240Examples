// lineIn.c
// grab in a line at a time with c

#include <stdio.h>

int main(){
  char data[80];
  char first[10];
  char last[10];
  int age;

  printf("Please type your first name last name and age: ");
  fgets (data, 80, stdin);

  sscanf(data, "%s %s %d", first, last, &age);

  printf("first: %s \n", first);
  printf("last: %s \n", last);
  printf("age: %d \n", age);

  return(0);
}

