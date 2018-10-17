#include <cstring>
#include "date.h"

int main(){
  date today;
  date yesterday;

  today.set_date(9,9,2010);
  yesterday.set_string_date("Sep 8 2010");
  return 0;
} // end main

