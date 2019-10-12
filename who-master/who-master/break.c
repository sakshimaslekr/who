#include<stdio.h>
int main()
{
    int score[100],i=0,j=0;
    int low,high,a[2];
    int n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&score[i]);

    }
        low=high=score[0];
    for(i=0;i<n;i++)
    {
        if(score[i]<low)
        {
            low=score[i];
             j++;
           }
        else if(score[i]>high)
             {
                 high=score[i];
                  k++;
             }

    }
    a[0]=j;
    a[1]=k;
    for(i=0;i<2;i++)
        printf("%d ",a[i]);
}
