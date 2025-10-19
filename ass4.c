#include <stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase letter: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - ('a' - 'A'); // convert to uppercase
        printf("Uppercase letter: %c\n", ch);
    } else {
        printf("The character is not a lowercase letter.\n");
    }

    return 0;
}
