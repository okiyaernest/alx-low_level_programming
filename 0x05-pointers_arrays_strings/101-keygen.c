#include <stdio.h>
#include <stdlib.h>
#include <main.h>

#define PASSWORD_LENGTH 6

int main(void) {
    char password[PASSWORD_LENGTH + 1]; // +1 for null terminator
    const char charset[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const int charset_length = sizeof(charset) - 1;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate random characters for the password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = charset[rand() % charset_length];
    }
    password[PASSWORD_LENGTH] = '\0'; // Add null terminator

    printf("%s\n", password); // Print the generated password

    return 0;
}
