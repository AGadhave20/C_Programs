#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum/(float)iSize);
}
int main()
{
    int iCount = 0,iCnt=0;
    float fRet = 0.0f;
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
    fRet= Average(ptr,iCount);
    printf("Average is:%f\n",fRet);

    free(ptr);
    printf("Dynamic memory gets deallocated successfully\n");
    return 0 ;
}