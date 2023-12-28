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

//////////////////////////////////////////////////////////////
//Function name:     Addition
//Description:       It is used to perform addition of 2 integers.
//Input arguments:   Integer ,Integer
//Output:            Integer
//Author:            Amruta Kailas Gadhave.
//Date:              25/09/2023 
//
//////////////////////////////////////////////////////////////
//Addition is a function which accepts 2 parameters as a integer and it returns integer.
int Addition(int iNo1, int iNo2)
{
    int iSum = 0;          //variable to store the value addition
     iSum = iNo1 + iNo2;
    return iSum;

}

//////////////////////////////////////////////////////////
//
//Entry point function of an application which performs addition of 2 integers.
//
////////////////////////////////////////////////////////////

int main()
{
    auto int ivalue1 = 0;   //variable to store first input 
    auto int ivalue2 = 0;  //variable to store second input
    auto int iAns = 0;     //variable to store the result

    printf("Enter first number : \n");
    scanf("%d",&ivalue1);

    printf("Enter second number : \n");
    scanf("%d",&ivalue2);

    iAns = Addition(ivalue1 , ivalue2);  //function call to perform addition

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