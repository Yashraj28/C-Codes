#include<stdio.h>
int main()
{
    int a=2;
    switch (a)
    {
    case 1:
        printf("The student is in the library");
        break;
    case 2:
        printf("The student is on the ground\n");
        goto hi;
        break;
    case 3:
        printf("The student is at home");
        break;
    default:
        break;
    }
    hi:
    printf("Using goto fxn");
return 0;
}