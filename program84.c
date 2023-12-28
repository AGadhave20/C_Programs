#include<stdio.h>
#include<stdlib.h>

int iFrequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iCount = 0,iCnt=0,iRet=0;
    int iValue = 0;
    int *ptr = NULL;

    printf("Enter no of elements :\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated successfully\n");

    printf("Enter elements:\n");
    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter elements no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the element that you want to search:\n");
    scanf("%d",&ptr[iCnt]);

    iRet = iFrequency(ptr,iCount,iValue);
    printf("%d occurs %d times \n",iValue,iRet);

    free(ptr);
    printf("Dynamic memory gets deallocated successfully\n");
    return 0 ;
}