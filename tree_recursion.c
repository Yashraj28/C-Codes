#include<stdio.h>
void funa(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        funa(n-1);
        funa(n-1);
    }
}
int main()
{
    
    funa(3);
    return 0;
    
}