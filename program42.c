#include<stdio.h>
#include<stdbool.h>

int SumFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    
    //     1         2           3
    for(iCnt = 1; iCnt <=(iNo/2) ;iCnt ++)
    {
        if((iNo % iCnt)==0)     //4
        {
            iSum =iSum + iCnt;
        }
        
    }
    return iSum;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter the no:\n");
    scanf("%d",&iValue);

    iRet = SumFactor(iValue);
    printf("Sum of factors are:%d\n",iRet);

    return 0;
}


