#include <stdio.h>

int main() {

  char s1[10];
  printf("Enter String");
  fgets(s1, sizeof(s1), stdin);
  printf("%10.5s", s1);
  puts(s1);
  puts(s1);
}
