#include<stdio.h>
int dfs(int n,int cost[10][10],int u,int s[])
{
    int v;
    s[u]=1;
    for(v=0;v<n;v++){
        if((cost[u][v]==1) && (s[v]==0))
            dfs(n,cost,v,s);
    }
}

int main()
{
    int n,cost[10][10],s[10],i,j,connected,flag;
    printf("Enter the number of vertices");
    scanf("%d",&n);
    printf("Enter the Adjacency matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&cost[i][j]);
        }
    }
    connected=0;
    for(j=0;j<n;j++){
        for(i=0;i<n;i++)
            s[i]=0;
        dfs(n,cost,j,s);
        flag=0;
        for(i=0;i<n;i++){
            if(s[i]==0)
               flag=1;
        }
            if(flag==0)
                connected=1;
        }
    if(connected==1)
        printf("Graph is Connected");
    else
        printf("Graph is not Connected");
    return 0;
}