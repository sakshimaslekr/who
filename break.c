#include<stdio.h>
int main()
{
    int scores[1000],i=0,j=0;
    int low,high,a[2];
    int n,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);

    }
        low=high=scores[0];
    for(i=0;i<n;i++)
    {
        if(scores[i]<low)
        {
            low=scores[i];
             j++;
           }
        else if(scores[i]>high)
             {
                 high=scores[i];
                  k++;
             }

    }
    a[0]=j;
    a[1]=k;
    for(i=0;i<2;i++)
        printf("%d ",a[i]);
}
