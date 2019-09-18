# include <iostream>
# include <cstdlib>

int main(){
  // make a random number
  std::cout << "Yo" << std::endl;
  
  for (int i = 0; i < 100; i++){
    int r = rand();
    std::cout << r % 42 << std::endl; 
  }
  return 0;
} // end main


