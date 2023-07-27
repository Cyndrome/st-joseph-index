// A program to convert lowercase to uppercase and vice versa

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(ch >= 'a' && ch <= 'z') //range a ~ z
    {
    printf("%c in uppercase is represented as %c",
           ch, toupper(ch));
    }

    else if(ch >= 'A' && ch <= 'Z') //range A ~ Z
    {
    printf("%c in lowercase is represented as %c",
           ch, tolower(ch));
    }
    return 0;
}