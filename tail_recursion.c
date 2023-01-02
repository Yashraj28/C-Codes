#include<stdio.h>
void tail(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        tail(n-1);
    }
}
int main()
{
    tail(3);
    return 0;
}