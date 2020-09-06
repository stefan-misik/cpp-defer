# C++ Defer

This micro project was created as a joke, but hey it does work.

## Example 

```cpp
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
```

### Compile

To compile the example just execute:

```
$ g++ -std=c++17 main.cpp -o defer && ./defer
```
