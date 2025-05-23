#include<stdio.h>
int arr[2][3][2],sum=0;
int array()
{
    printf("\nEnter a value :");
    for( int i=0;i<2;i++)
    {
        for( int j=0;j<3;j++)
        {
            for( int k=0;k<2;k++)
            {
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("\nSum of the given array : ");
    for( int i=0;i<2;i++)
    {
        for( int j=0;j<3;j++)
        {
            for( int k=0;k<2;k++)
            {
                sum+=arr[i][j][k];
            }
        }
    }
    return sum;
}
int main()
{
    printf("3D Array Addition : ");
    printf("%d",array());
    return 0;
}