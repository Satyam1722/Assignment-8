#include<stdio.h>
int main()
{
    int i,j,n,a,b;
    printf("enter the lines\n");
    scanf("%d",&n);
    a=n-1;
    b=n-1;
    for(i=0;i<2*n-1;i++)
    {
        for(j=0;j<2*n-1;j++)
        {
        if(j>=a && j<=b)
        printf("* ");
        else
        printf("  ");
        }

        if(i<n-1){
            a--;
            b++;
        }
        else{
            b--;
            a++;
        }
     
        printf("\n");

    }

    return 0;
}