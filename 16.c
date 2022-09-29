#include<stdio.h>
int main()
{
    int i,j,n,d;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=1;
        for(j=0;j<n+i;j++){
            if(i==n-1 || j==n-i-1 || j==n+i-1){
                printf("* ");
            }
            else
            printf("  ");
        }

        printf("\n");

    }

    return 0;
}