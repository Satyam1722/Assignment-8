#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n-1-i);j++){
            if(j<i)
            printf("  ");
            else
            printf("* ");
        }

        printf("\n");

    }

    return 0;
}