#include<stdio.h>
int main()
{
    int i,j,n,d;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=1;
        for(j=0;j<2*n-1-i;j++){
            if(i==0 || j==i || j==(2*n-2)-i){
                printf("* ");
            }
            else
            printf("  ");
        }

        printf("\n");

    }

    return 0;
}