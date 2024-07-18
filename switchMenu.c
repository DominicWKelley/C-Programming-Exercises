// Portfolio Courses C Programming Examples #58
// Create a menu using a switch statement.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double balance = 0, amount = 0;
  int choice = 0;

  while (true) {
    printf("1) Deposit\n");
    printf("2) Withdraw\n");
    printf("3) Print Balance\n");
    printf("4) Print Balance And Quit\n");
    printf("5) Quit\n");
    printf("Enter Choice:\n");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter Amount: ");
      scanf("%lf", &amount);
      balance += amount;
      break;

    case 2:
      printf("Enter Amount: ");
      scanf("%lf", &amount);
      balance -= amount;
      break;

    case 3:
      printf("%.2f\n", balance);
      break;

    case 4:
      printf("%.2lf\n", balance);

    case 5:
      exit(0);
    }
  }

  return 0;
}
