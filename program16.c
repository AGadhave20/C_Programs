#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch(iStandard)
    {
        case 1:
            printf("Your exam is at 8 PM \n");
            break;
        case 2:
            printf("Your exam is at 9 PM \n");
            break;
        case 3:
            printf("Your exam is at 10 PM \n");
            break;
        case 4:
            printf("Your exam is at 11 PM \n");
            break;
        case 5:
            printf("Your exam is at 12 NOON \n");
            break;
        default:
            printf("Invalid input..\n");                    
    }
}
int main()
{
    auto int iValue = 0;

    printf("Enter your standard..\n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);

    return 0;
}