/*
    iRow = 3
    icol = 4

    1   1   1   1
    2   2   2   2
    3   3   3   3
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0,j = 0;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",i);
            
        }
        printf("\n");
    }
}
int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter number of rows:\n");
    scanf("%d",&iNo1);

    printf("Enter number of columns:\n");
    scanf("%d",&iNo2);

    Display(iNo1,iNo2);

    return 0;
}