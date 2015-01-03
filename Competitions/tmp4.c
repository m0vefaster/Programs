#include <stdio.h>

int main() {
  char array1[50];
  char *array2;

  printf("Now enter another string less than 50");
  printf(" characters with spaces: \n");
  gets(array1);

  printf("\nYou entered: ");
  puts(array1);

  printf("\nTry entering a string less than 50");
  printf(" characters, with spaces: \n");
  scanf("%s", array2);

  printf("\nYou entered: %s\n", array2);

  return 0;
}
