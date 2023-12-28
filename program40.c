#include<stdio.h>
#include<stdbool.h>

void DisplyaFactor(int iNo)
{
    int iCnt = 0;

    printf("Factors of %d are :\n",iNo);
    //     1         2           3
    for(iCnt = 1; iCnt < iNo ;iCnt ++)
    {
        if((iNo % iCnt)==0)     //4
        {
            printf("%d\n",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("enter the no:\n");
    scanf("%d",&iValue);

    DisplyaFactor(iValue);

    return 0;
}