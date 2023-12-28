#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int iCnt =0,iOddCnt = 0;

    
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iOddCnt++;
        }
        
    }
    
    return iOddCnt;
}
int main()
{
    int iCount = 0, iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter no of elements that you want to enter:\n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);

    printf("Enter the %d values:\n",iCount);

    for(iCnt=0;iCnt<iCount;iCnt++)
    {
        printf("\nEnter the elements no %d:",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet=CountOdd(ptr,iCount);

    printf("Number of odd elements are:%d\n",iRet);
    
    free(ptr);
    printf("Dynamic memory gets deallocated successfully...\n");

    return 0;
}