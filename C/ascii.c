#include <stdio.h>

int main(void)
{
  printf("%c\n", '{' + 2); // }
  printf("%c\n", '[' + 2); // ]
  printf("%c\n", '<' + 2); // >
  printf("%c\n", '(' + 2); // Guess What?
  return 0;
}
