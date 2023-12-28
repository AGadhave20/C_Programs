//problem statement : Accept two values from user and perform the addition.

//step 1: Understand the problem statement
//conclusion : We have accepts two integer and performs addition.

//step 2 : Write the algorithm.
/*
    START
        Accept first no from user and store it into no1.
        Accept second no from user and store it into no2.
        Create one variable to store the result as Ans.
        Perform addition of no1 and no2 ,store the result in Ans.
        Display the result from ans to the user.

    STOP

*/

//Step 3: Decide the programming language(c/c++cjava/py).
//We select c programming.

//Step 4 : Write the program .

#include<stdio.h>

int main()
{
    auto int ivalue1 = 0;
    auto int ivalue2 = 0;
    auto int iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second number : \n");
    scanf("%d",&ivalue2);

    iAns = ivalue1 + ivalue2;

    printf("Addition is : %d\n",iAns);
    
    return 0;
}

//Step 5: Test the code
/*
Test case 1:
Input : 10 11
output : 21

Test case 2:
Input : -6 -5
Output : -11
*/