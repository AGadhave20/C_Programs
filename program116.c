#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter character:\n");
    scanf("%c",&ch);

    printf("ASCII value of character in decimal is :%d\n",ch);
    printf("ASCII value of character in octal is :%o\n",ch);
    printf("ASCII value of character in hexadecimal is :%x\n",ch);

    return 0;
}