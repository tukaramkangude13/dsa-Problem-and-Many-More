#include<stdio.h>
#define MAX 2
void adjsmatrix(int matrix[MAX][MAX],int vertices){

    printf(" enter the number");
    for(int i=0;i<vertices;i++){
        for (int j = 0; j < vertices; j++)
        {
        
        scanf("%d",&matrix[i][j]);
        }
       
        
    }
}
void dislay(int matrix[MAX][MAX],int vertices){

    for(int i=0;i<vertices;i++){
        for (int j = 0; j < vertices; j++)
        {
        printf("%d\t",matrix[i][j]);
        }
         printf("\n");
    }
}
void degree( int matrix[MAX][MAX],int vertices,int isDirected ){
     for (int  i = 0; i < vertices; i++)
     {
     int in=0,out=0,total=0;
      for (int  j = 0; j < vertices; j++)
      {
            if (matrix[i][j]==1)
            {
                out++;

            }
            if (matrix[j][i]==1)
            {
                in++;
            }
            if (isDirected)
            {
             printf(" vertex %d in-degree=%d,out Degree =%d,total degree=%d\n,",i,in,out,total+out);

            }
            else{
                printf("vertex %d : Total degree=%d ",i+total);
            }
            
            
            
      }
      
     }
     

}
 int main()
 {

    int matrix[MAX][MAX];
    int vertices;
    printf("enter the number  of verticrs ");
    scanf("%d",&vertices);
    if (vertices> MAX){
        printf("Error: Number Of Vertices exceeds the maximum allowed .\n");
        return 1;
    }
    int isDirected;
printf(" Is the graph directed ? (1 for yes And 0 for No):");
scanf("%d",&isDirected);
    adjsmatrix(matrix,vertices);

    dislay(matrix,vertices);
    degree(matrix,vertices,isDirected);
    return 0;
 }