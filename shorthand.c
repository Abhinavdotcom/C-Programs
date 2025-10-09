#include<stdio.h>

int main()
{
    int i= 10;
    int j= 10;

    int iAns = 0 , jAns = 0;

    iAns = i++;
    jAns = ++j;

    printf("VALUE OF i : %d\n",i);  // 11
    printf("VALUE OF iAns : %d\n",iAns); // 10

    printf("VALUE OF j : %d\n",j);  // 11
    printf("VALUE OF jAns : %d\n",jAns); // 11

    return 0;
}