#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int range;
char symbols [] = {'!', '@', '#', '$', '&', '*', '?'};
int char_type;


char random_letter() {
    range = 26;
    return 'a' + rand() % range;
}

char random_LETTER() {
    range = 26;
    return 'A' + rand() % range;
}

char random_number() {
    range = 10;
    return '0' + rand() % range;
}

char random_symbol() {
    range = sizeof(symbols);
    return symbols[rand() % range];
}

void password_generator(int n, int password_specs) {
    for (int i = 0; i < n; i++) {
        char_type = rand() % password_specs; // randomly decide for the character type (i.e. lowercase letter, number, etc.)

        switch (char_type) {
            case 0:
                printf("%c", random_letter());
                break;
            case 1:
                printf("%c", random_LETTER());
                break;
            case 2:
                printf("%c", random_number());
                break;
            case 3:
                printf("%c", random_symbol());
        }
    }

}

int main ()
{
    srand(time(NULL));

    int n; // length of the password
    int t; // number for password specifications

    printf("Enter the length for the random password: ");
    scanf("%d", &n);

    printf(
            "1. Only lowercase letters\n"
            "2. Lowercase and uppercase letters\n"
            "3. Lowercase and uppercase letters and numbers\n"
            "4. Lowercase and uppercase letters, numbers, and special symbols (e.g. *, !)\n"
            "Choose your password type (write the number of your choice e.g. 2): "
            );
    scanf("%d", &t);

    password_generator(n, t);

    return 0;
}
