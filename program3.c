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
    int i,j,k;
    printf("Enter first number : \n");
    scanf("%d",&i);

    printf("Enter second number : \n");
    scanf("%d",&j);

    k = i +j;

    printf("Addition is : %d\n",k);
    
    return 0;
}