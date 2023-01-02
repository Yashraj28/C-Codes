#include<stdio.h>
int nest(int n)
{
    if(n>100){
        return n-10;
        
    }
    else
     return nest(nest(n+11));
}

int main()
{
    int x = nest(95);
    // printf("%d ",x);
}