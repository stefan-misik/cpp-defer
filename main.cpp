#include <iostream>

#include "defer.h"

void test()
{
    int x = 1;

    defer {
      std::cout << "Done last: " << x << std::endl;
    };

    defer {
      std::cout << "Done first: " << x++ << std::endl;
    };

    // throw 0;
    std::cout << "Start: " << x++ << std::endl;
}

int main()
{
  try {
    test();
  }
  catch (...) {
  }

  return 0;
}
