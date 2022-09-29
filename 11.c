#include<stdio.h>
int main()
{
    int i,j,n,d;
    printf("enter the lines\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=65;
        for(j=0;j<n+i;j++){
            if(j<n-i-1)
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