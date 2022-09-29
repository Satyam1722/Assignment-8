#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(i==n-1 || j==0 || i==j)
            printf("* ");
            else
            printf("  "); 
        }
        printf("\n");
    }
}