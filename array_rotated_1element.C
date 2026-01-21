#include<stdio.h>
int main()
{
    int pn,i;
    printf("enter size:");
    scanf("%d",&pn);
    int pawan[pn];
    for(i=0;i<pn;i++)
    {
        scanf("%d",&pawan[i]);
    }
    int anurag=pawan[0];
    for(i=1;i<pn;i++)
    {
        pawan[i-1]=pawan[i];
    }
    pawan[pn-1]=anurag;
    for(i=0;i<pn;i++)
    {
        printf("%d ", pawan[i]);
    }
    return 0;
}