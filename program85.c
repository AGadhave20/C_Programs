// input = 6  output=1 2 3 4 5 6

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter count:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}