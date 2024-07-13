#include <stdio.h>

int main() {

  char name[25];
  int age;

  printf("\nWhat's your name?");
  // scanf("%s", &name); //no white space
  fgets(name, 25, stdin);

  printf("How old are you?");
  scanf("%d", &age);

  printf("\nHello %s \nYou are %d years old.", name, age);

  return 0;
}
