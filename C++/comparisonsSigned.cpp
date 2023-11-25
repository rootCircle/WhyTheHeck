#include <iostream>

int main (int argc, char *argv[]) {
  int a = -10;
  unsigned int b = 20;

  if (b > a) {
    std::cout << "Wow!";
  }
  else {
    std::cout << "Oh yes!";
  }
  return 0;
}
