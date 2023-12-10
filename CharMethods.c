#include <stdio.h>
#include <ctype.h>
#include <string.h>

void checkCase()
{
    char marks = 'A';
    if (islower(marks))
    {
        printf("Lower Case");
    }
    else if (isupper(marks))
    {
        printf("Upper Case");
    }
}

void isAlphabetOrDigit()
{
    char marks = 'A';
    if (isdigit(marks))
    {
        printf("Number");
    }
    else if (isalpha(marks))
    {
        printf("Alphabet");
    }
}

void toLower()
{
    char a = 'M';
    a = tolower(a);
}
void toUpper()
{
    char a = 'M';
    a = toupper(a);
}

void isSpace()
{
    char a = ' ';
    if (isspace(a))
    {
        printf("Yes it is space");
    }
}
void isPunctuation()
{
    char a = '!';
    if (ispunct(a))
    {
        printf("Yes it is Punctuation");
    }
}

void main()
{
    char *c = "Mayur";

    checkCase();
    isAlphabetOrDigit();
    toLower();
    toUpper();
    isSpace();
    isPunctuation();
    strchr(c, 1);
}