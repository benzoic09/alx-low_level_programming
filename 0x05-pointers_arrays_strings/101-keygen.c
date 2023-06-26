#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - check the code
 *
 * Return: Always 0.
 */

#define PASSWORD_LENGTH 8

void generate_password(char *password, int length);

int main(void)
{
    char password[PASSWORD_LENGTH + 1]; 

    srand(time(NULL));

    generate_password(password, PASSWORD_LENGTH);
    printf("Generated Password: %s\n", password);

    return 0;
}

void generate_password(char *password, int length)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    for (i = 0; i < length; i++)
    {
        int random_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[random_index];
    }

    password[length] = '\0'; 
}
