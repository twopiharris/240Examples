#include <cstdio>

using namespace std;

void swapNum(int* i, int* j){
  int temp = *i;
  *i = *j;
  *j = temp;
}  // end

void anotherSwap (int& i, int& j){
  int temp = i;
  i = j;
  j = temp;
}

int main(void){
  int a = 10;
  int b = 20;

  swapNum (&a, &b);
  printf("A is %d and B is %d \n", a, b);

  a = 10;
  b = 20;
  anotherSwap(a, b);
  printf("A is %d and B is %d \n", a, b);

  return 0;
}
