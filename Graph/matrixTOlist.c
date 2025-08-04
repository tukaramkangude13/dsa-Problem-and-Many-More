#include<stdio.h>
#define MAX 5
void convertlist( int matrxi[MAX][MAX],int vertices){

    printf(" adjecny list representation");
     for (int  i = 0; i <vertices; i++)
     {
            printf("vertext %d:",i+1);
            for (int  j = 0; j < vertices; j++)
            {
            if (matrxi[i][j] == 1)
                {
                printf("%d",j+1);
                }
                
            }
            printf("\n");
            
     }
     
}
int main()
{
    int matrxi[MAX][MAX];
    int vertices;
      printf("enter the  verices ");
      scanf("%d",&vertices);
    if (vertices > MAX)
    {
        printf(" enter vertices less then %d",MAX);
    }
      for (int  i = 0; i < vertices; i++)
      {
         for (int j = 0; i <  vertices; j++)
         {
           printf("Enter The Number:[%d][%d]",i,j);
           scanf("%d",&matrxi[i][j]);
         }
         
      }
       convertlist(matrxi,vertices);

       return 0;
      
     
    
}