//KNAPSACK PROBLEM
#include<stdio.h>
int w[20],p[20];
float r[20];
int count=0;
int check(float);
int main()
{
    int i,rc,n,weight,profit,location;
    float value,x[20],tp=0.0;
    printf("Enter the capacity\n");
    scanf("%d",&rc);
    printf("Enter the objects\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the weight %d object\t",i);
        scanf("%d",&weight);
        printf("Enter the profit %d object\t",i);
        scanf("%d",&profit);
        value=(float)profit/weight;
        location=check(value);
        r[location]=value;
        w[location]=weight;
        p[location]=profit;
        count++;
    }
    for(i=1;i<=n;i++)
    {
        if(rc>w[i])
        {
            x[i]=1;
            tp=tp+p[i];
            rc=rc-w[i];
        }
        else if(rc<w[i])
        {
            x[i]=((float)rc)/w[i];
            tp=tp+p[i]*x[i];
            rc=rc-w[i]*x[i];
        }
    }
    for(i=1;i<=n;i++)
        printf("x[%d]=%f\n",i,x[i]);
    printf("total profit=%f\n",tp);
}
int check(float value)
{
    int i=1,j;
    while(r[i]>value)
        i++;
    for(j=count;j>=i;j--)
    {
        r[j+1]=r[j];
        w[j+1]=w[j];
        p[j+1]=p[j];
    }
    return(i);
}

