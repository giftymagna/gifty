#include <stdio.h>
int main()
{
    char c;
    int lower;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
    lower = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    if (lower)
    {
        printf("%c is a vowel.", c);
    }
    else
    {
        printf("%c is a consonant.", c);
    }
    return 0;
}
