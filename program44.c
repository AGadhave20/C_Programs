#include<stdio.h>
#include<stdbool.h>


bool Chkperfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0)   //updator
    {
        iNo = -iNo;
    }

    //     1         2           3
    for(iCnt = 1; iCnt <=(iNo/2) ;iCnt ++)
    {
        if((iNo % iCnt)==0)     //4
        {
            iSum =iSum + iCnt;
        }
        
    }
    if(iSum == iNo)
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

    printf("enter the no:\n");
    scanf("%d",&iValue);

    bRet = Chkperfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}
