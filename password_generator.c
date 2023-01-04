#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LETTER_RANGE 26
#define NUMBER_RANGE 10
#define SYMBOL_RANGE sizeof(symbols)
#define CHAR_SPEC (rand() % password_specs)

char symbols [] = {'!', '@', '#', '$', '&', '*', '?'};
//int char_spec;


inline char random_letter() {
    return 'a' + rand() % LETTER_RANGE;
}

inline char random_LETTER() {
    return 'A' + rand() % LETTER_RANGE;
}

inline char random_number() {
    return '0' + rand() % NUMBER_RANGE;
}

inline char random_symbol() {
    return symbols[rand() % SYMBOL_RANGE];
}

void password_generator(int n, int password_specs) {
    for (int i = 0; i < n; i++) {
        //char_spec = rand() % password_specs; // randomly decide for the character type (i.e. lowercase letter, number, etc.)

        switch (CHAR_SPEC) {
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
