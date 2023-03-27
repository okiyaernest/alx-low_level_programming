#include "main.h"
#include <stdio.h>

#define PASSWORD_LENGTH 10 // The length of the generated password

int main(void) {
  char password[PASSWORD_LENGTH + 1]; // The password buffer, plus one extra character for the null terminator
  const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; // The characters allowed in the password
  const int charset_size = sizeof(charset) - 1; // The size of the character set, minus one for the null terminator
  srand(time(NULL)); // Seed the random number generator with the current time

  // Generate a random password
  for (int i = 0; i < PASSWORD_LENGTH; i++) {
    password[i] = charset[rand() % charset_size];
  }
  password[PASSWORD_LENGTH] = '\0'; // Add the null terminator to the end of the password

  // Print the password
  printf("%s\n", password);

  return 0;
}
