#include<stdio.h>
#define MAX 5
int isUndirected(int matrix[MAX][MAX],int ver){
    for (int  i = 0; i < ver; i++)
    {
        for (int  j = 0; j < ver; j++)
        {
        if (matrix[MAX][MAX]!=matrix[j][i])
        {
            return 0;
        }
        
        }
        
    }
    return 1;
    
}
int main()
{
    int matrix[MAX][MAX];
    int ver;
    printf("entet  the  number od vertices ");
    scanf("%d",&ver);
    printf("enter the number \n");
    for (int  i = 0; i < ver; i++)
    {
    for (int j = 0; j < ver; j++)
    {
    scanf("%d",&matrix[i][j]);
    }
    
    }
    if(isUndirected(matrix,ver)){
        printf(" graph is undirected ");
    }
    else{
        printf(" graph is directed ");
    }
    

return 0;

}