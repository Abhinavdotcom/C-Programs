#include<stdio.h>

struct demo
{
    int i;
    char ch1;
    float f;
    char ch2;
    int j;
};

int main()
{
   printf("SIZE OS STRUCTURE IS : %lu", sizeof(struct demo));
   
    return 0;
}