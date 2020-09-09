#include <iostream>
#include "glitterCritter.h"

GlitterCritter::GlitterCritter(){
  name = "Sparkles";
}

void GlitterCritter::sayHi(){
  std::cout << name << " doesn't say anything, but gently shimmers..." << std::endl;
}

void GlitterCritter::shimmer(){
  std::cout << name << " spins around" << std::endl;
}

