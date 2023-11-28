#include<stdio.h>
#include<stdlib.h>
void print();
int main()
{
    int n,e,mat[20][20],i,j;
    printf("ENTER THE NUMBER OF VERTICES\n");
    scanf("%d",%n);
    printf("ENTER THE NUMBE OF EDGES\n");
    scanf("%d",&e);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }


}
void print()
{
    printf("MATRIX IS \n",mat[i][j]);
}
