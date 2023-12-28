//Prroblem statement : Accept any number from user and calculate cube.

//Step 1 : Undersatnd the problem statement.
//Conclusion : We are going to use formula as number * number * number

//Step 2 : Algorithm
/*  START
        Accept the number from user.
        Calculate cube.
        Display cube to the user.
    STOP

*/

#include<stdio.h>
/////////////////////////////////////////////////////////////////////////////////
//
// Function name : CalculateCube
// Description : Used to calculate cube of number
// Input : int
// Output : int
// Author name : Amruta Kailas Gadhave.
// Date : 02/10/2023
//
////////////////////////////////////////////////////////////////////////////////
long int CalculateCube(int ivalue)
{
    long int icube = 0;
    icube = ivalue * ivalue *ivalue;
    return icube;
}
/////////////////////////////////////////////////////////////////
//
// Entry point function
//
////////////////////////////////////////////////////////////////////
int main()
{
    auto int iNo = 0;
    auto long int iAns = 0;

    printf("Enter the no : ");
    scanf("%d",&iNo);

    iAns = CalculateCube(iNo);

    printf("cube is:%ld\n",iAns);

    return 0;
}