#include <stdio.h>

int main(){

  // This is a comment

  /*
  This is a multiline comment
  */

  printf("Hello World!\n");
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

  int x;
  x = 123;
  int y = 321;

  int age = 21;
  float gpa = 2.05;
  char grade = 'C';
  char name[] = "Bro";

  printf("Hello %s!\n", name);
  printf("You are %d years old.\n", age);
  printf("Your average grade is %c.\n", grade);
  printf("Your gpa is %f.\n", gpa);

  float item1 = 5.75;
  float item2 = 10.00;
  float item3 = 100.99;

  printf("Item 1: $%8.2f\n", item1);
  printf("Item 2: $%8.2f\n", item2);
  printf("Item 3: $%8.2f\n", item3);

  return 0;
}