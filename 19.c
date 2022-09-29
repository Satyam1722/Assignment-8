#include<stdio.h>
int main(){
    int i,j,n,t;
    printf("enter the number of line : ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=n*6;j++){
            if((j>=n-1-i && j<=n*2+i ) || (j>=n*4-i && j<=n*5+1+i) )
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
    t=n;
    n=2*n+1+n; 
     for(i=0;i<n;i++)
    {
        for(j=0;j<(2*n-1-i);j++){
            if(i==0 && j==t*2)
            printf(" M y S i r G ");
            if(j<i ||( i==0 && j>t*4-1))
            printf("  ");
            else
            printf("* ");
        }

        printf("\n");

    }
}