#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++){
            if(i>0 && j>=n-i && j<=n+i-1)
               printf("  ");
               else if (i>0 && j>=n-i && j<=n+i-1)
               printf("  ");
            else
            printf("* ");
             
        }

        printf("\n");

    }

    return 0;
}