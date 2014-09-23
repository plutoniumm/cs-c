#include <stdio.h>

int main() {
  // Open the output file for writing
  FILE* outputFile = fopen("out.txt", "w");

  // Check if the file opened successfully
  if (outputFile == NULL) {
    printf("Error opening the output file.\n");
    return 1;
  }

  int N;
  printf("Enter the value of N: ");
  scanf("%d", &N);

  // Write the numbers 1 to N to the file
  for (int i = 1; i <= N; i++) {
    fprintf(outputFile, "%d\n", i);
  }

  // Close the output file
  fclose(outputFile);

  return 0;
}
