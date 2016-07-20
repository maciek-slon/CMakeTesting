#include "sqr.h"
#include <iostream>
#include <string>

int main(int argc, char * argv[]) {
  if (argc < 2) {
    std::cout << "Usage: sqr X\n";
    return 0;
  }

  float x = std::stof(argv[1]);
  std::cout << x << "^2=" << ms::sqr(x) << "\n";

  return 0;
}
