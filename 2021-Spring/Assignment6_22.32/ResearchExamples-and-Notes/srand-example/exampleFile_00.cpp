// srand example:
// "https://www.cplusplus.com/reference/cstdlib/srand/"

// #include <iostream>
// #include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
  cout
      << "First Number:\t" << rand() % 100;

  // srand
  (time(NULL));
}