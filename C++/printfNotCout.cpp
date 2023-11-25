#include <iostream>

using namespace std;
int sum(int a, int b) {
  cout << "| Hello in sum() |";
  return a + b;
}

int main(void){
  printf("| The value of a+b |%d\n", sum(10, 12));
  cout << "| The value of a+b |" << sum(10, 12) << endl;
}
