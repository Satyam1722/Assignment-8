#include<stdio.h>
int main()
{
    int i,j,n,d;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=65;
        for(j=0;j<2*n-1-i;j++){
            if(j<i)
            printf("  ");
            else{
            printf("%c ",d);
            if(j<n-1)
            d++;
            else
            d--;
            }
        }

        printf("\n");

    }

    return 0;
}