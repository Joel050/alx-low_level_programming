#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @count: count.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters) {
  // Open the file for reading
  FILE *file = fopen(filename, "r");

  // Make sure the file was opened successfully
  if (file == NULL) {
    return 0;
  }

  // Read and print the file contents up to the specified number of letters
  char ch;
  size_t count = 0;
  while ((ch = fgetc(file)) != EOF && count < letters) {
    putchar(ch);
    count++;
  }

  // Close the file and return the number of letters read
  fclose(file);
  return count;
}

