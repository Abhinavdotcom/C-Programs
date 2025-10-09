#include<stdio.h>

struct demo
{
    int i;
    char ch;
    float f;
    int j;
};

int main()
{
   printf("SIZE OS STRUCTURE IS : %lu", sizeof(struct demo));
   
    return 0;
}