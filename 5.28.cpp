#include <stdio.h>

char changeCase(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    } else if (c >= 'a' && c <= 'z') {
        return c - 32;
    }
    return c;
}

int main(void) {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    printf("Result: %c\n", changeCase(c));
    return 0;
}
