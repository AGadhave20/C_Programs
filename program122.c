#include<stdio.h>


char ConvertCapital(char cValue)
{
    return cValue - 32;
}
int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter character:\n");
    scanf("%c",&ch);

    cRet = ConvertCapital(ch);
    
    printf("Converted capital letter is:%c\n",cRet);

    return 0;
}