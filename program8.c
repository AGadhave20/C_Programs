//Accept radius from user and calculate the area of circle.

//step 1: Understand the problem statement.
//conclusion : We are going to use formula as PI*R*R.

//Step 2: Algorithm
/*
    START
        Accept radius from user and store into RADIUS
        create variable asPI and store value 3.14
        Calculate area PI*RADIUS*RADIUS
        Display the value of area to the user
     STOP
*/
#include<stdio.h>

///////////////////////////////////////////////////
//
// Function name : calculateArea
// Description: used to calculate area of circle
// input :  float 
// output :  float
// Auther name : Amruta Kailas Gadhave
// Date :  02/10/2023
//
///////////////////////////////////////////////////
float calculateArea(float fvalue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;

    fAns = PI * fvalue * fvalue;
    return fAns;
}

/////////////////////////////////////////////////////////
//
// Entry point function
//
//////////////////////////////////////////////////////////
int main()
{
    auto float fRADIUS = 0.0f;
    auto float fArea = 0.0f;
    

    printf("Enter the radius of circle: \n");
    scanf("%f",&fRADIUS);

    fArea = calculateArea (fRADIUS);

    printf("Area of circle is :%f\n",fArea);
    return 0;
}