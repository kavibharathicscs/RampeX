#include<stdio.h>
int power(int n,int p)
{
    if(p==0)
    return 1;
    return n*power(n,(p-1));
}
int main()
{
    int n,p;
    printf("Enter the value : ");
    scanf("%d",&n);
    printf("Enter the power value : ");
    scanf("%d",&p);
    printf("%d",power(n,p));
    return 0;
}