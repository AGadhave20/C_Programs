/*
    START
        Accept number from user
        Divide that number by 2
        If remainder is 0 then display even 
        otherwise display odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2)== 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/////////////////////////////////////////////////////////////////
//
// Entry point function
//
/////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue= 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&ivalue);

    bRet = CheckEven(ivalue);
    if(bRet == true)
    {
        printf("%d is an even number\n",ivalue);
    }
    else
    {
        printf("%d is an odd number \n",ivalue);
    }
    return 0;
}