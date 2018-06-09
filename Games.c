#include<stdio.h>
int main()
{
    int i,j,n,count=0;
    int a[100],b[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {

            scanf("%d %d", &a[i], &b[i]);

    }
      for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
                count++;
        }
    }
    printf("%d", count);

}
