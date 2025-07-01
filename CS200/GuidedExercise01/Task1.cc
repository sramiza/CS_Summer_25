#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char str[])
{
    // write code here
}

void toUpperCase(char str[])
{
    // write code here
}

int countVowels(char str[])
{
    // write code here
}

// Function to replace all instances of a character in a string
void replaceCharacter(char str[], char oldChar, char newChar)
{
    // write code here
}

int main()
{
    char str[100];

    // Prompt user for a string
    // write code for input here

    // Reverse the string
    reverseString(str);
    printf("Reversed string: %s\n", str);

    // Convert to uppercase
    toUpperCase(str);
    printf("Uppercase string: %s\n", str);

    // Count vowels
    int vowels = countVowels(str);
    printf("Number of vowels: %d\n", vowels);

    char oldChar, newChar;
    printf("Enter the character to replace: ");
    scanf(" %c", &oldChar); // Notice the space before %c to consume any leftover whitespace
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    replaceCharacter(str, oldChar, newChar);
    printf("String after replacing '%c' with '%c': %s\n", oldChar, newChar, str);

    return 0;
}