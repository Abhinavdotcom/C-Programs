#include<stdio.h>

int main()
{
    int Arr[] ={11,21,51,101,111};

    int *p = NULL;
    int *q = NULL;
    p= &(Arr[1]);   //21
    q= &(Arr[4]);   //111

    q =q -2;

    printf("RESULT OF SUBSTRACTION IS : %ld\n",q-p);    // allowed
    printf("Data pointed by q is : %d\n", *q);          // allowed
    return 0;
}