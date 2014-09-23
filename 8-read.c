#include <stdio.h>

int main() {
  // Open the input file for reading
  FILE* inputFile = fopen("in.txt", "r");

  // Check if the file opened successfully
  if (inputFile == NULL) {
    printf("Error opening the input file.\n");
    return 1;
  }

  // Read and print the contents of the file
  char c;
  while ((c = fgetc(inputFile)) != EOF) {
    putchar(c);
  }

  // Close the input file
  fclose(inputFile);

  return 0;
}
