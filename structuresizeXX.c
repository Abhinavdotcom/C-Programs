#include<stdio.h>

struct demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};

int main()
{
   printf("SIZE OS STRUCTURE IS : %lu", sizeof(struct demo));
   
    return 0;
}