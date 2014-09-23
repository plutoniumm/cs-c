#include <stdio.h>

int main() {
  int i, j, rows;

  printf("Enter the number of rows (1 to 5): ");
  scanf("%d", &rows);

  if (rows < 1 || rows > 5) {
    printf("Invalid input! Please enter a number between 1 and 5.\n");
    return 1;
  }

  for (i = 1; i <= rows; i++) {
    // Print leading spaces
    for (j = 1; j <= (rows - i); j++) {
      printf(" ");
    }

    // Print asterisks
    for (j = 1; j <= i; j++) {
      printf("*");
    }

    printf("\n");
  }

  return 0;
  // should get
  /*
    -----*
    ----**
    ---***
    --****
    -*****
  */
}
