#ifndef GLITTER_CRITTER_EXISTS
#define GLITTER_CRITTER_EXISTS

// this class will be based on critter, so we need to include it
#include "critter.h"

// This class is based on existing Critter class
class GlitterCritter: public Critter {
  public:
    // this is a new constructor
    GlitterCritter();

    // this is a new method Critter didn't have
    void shimmer();

    // this is over-writing the Critter class' say Hi
    void sayHi();
};

#endif
