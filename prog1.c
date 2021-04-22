#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,m,n;
    printf("Input m: ");
    scanf("%d",&m);
    printf("Input n: ");
    scanf("%d",&n);
    int array[50][50];
    for (i=0; i<m; i++)
    {
        for (j=0; j<n; j++)
        {

            array[i][j] = rand()%100-50;
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
    int change,p,q;
    printf("Input p: ");
    scanf("%d",&p);
    printf("Input q: ");
    scanf("%d",&q);
    if((p<m)&&(p<n))
    {
        for (j=0; j<m; j++)
        {
            change=array[p-1][j];
            array[p-1][j]=array[q-1][j];
            array[q-1][j]=change;
        }
    }
    else
    {
        printf("Error");
    }
    printf("Matricea sortata\n");
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}
