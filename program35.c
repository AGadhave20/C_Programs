#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;

   for(iCnt =1; iCnt <= iNo; iCnt ++)
   {
    printf("Hello %d\n",iCnt);
   }
}
int main()
{
    int iValue = 0;

    printf("Enter no of times you want to display hello\n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}