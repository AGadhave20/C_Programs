#include<stdio.h>
#include<stdbool.h>

bool ChkPalindrome(int iNo)
{
    int iCopy = iNo;    //xerox kadhli
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        iRev = (iRev*10) + iDigit;
    }
    if(iRev == iCopy)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter no:");
    scanf("%d",&iValue);

    bRet = ChkPalindrome(iValue);
    if(bRet == true)
    {
        printf("%d is palindrome\n",iValue);
    }
    else
    {
        printf("%d is not palindrome\n",iValue);
    }
    

    return 0;
}