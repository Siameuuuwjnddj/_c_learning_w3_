#include <stdio.h>

int main()
{
    int myNumbers[4] = {4, 1, 5, 9};

    // Get the first value of the first element in my numbers
    printf("%d\n", *myNumbers);

    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers + 2));

    // loop though an array
    int myNumbers2[4] = {25, 50, 38, 99};
    int *ptr = myNumbers2;
    int i;

    for (i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr + i));
    }


    //change the value of array with pointers
    int myNubers3[4]={4,213,51,2};
    int* pointi =myNubers3;

    *myNubers3 =122;
    *(myNubers3+1) =213;
    *(myNubers3+2) =5;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n",*(myNubers3+i));
    }
    
    return 0;
}
