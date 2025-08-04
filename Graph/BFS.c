#include<stdio.h>
#define MAX 5


void display( int matrix[MAX][MAX],int ver){

    for (int  i = 0; i < ver; i++){
    for (int j = 0; j < ver; j++){
    printf("%d",matrix[i][j]);
    }
    }
    }
 void degree(int matrix[MAX][MAX],int ver,int isDirectd){

    for (int i = 0; i < ver i++){
        int in=0,out=0;
    for (int j = 0; j < ver; j++){
   if (matrix[i][j]==1){
    out++;

   }
   if (matrix[j][i]==1){
    in++;
   }
   
   
    }

    if (isDirectd){
      printf("Vertex %d -> In-degree :%d,out-degree:%d,total Degree:%d",i,in,out,in+out);
    }
    else{
        printf("vertex %d-> Total-Degree%d\n",i,in+out);
    }
    
    }
    
 }

 void bfs(int matrix[MAX][MAX],int ver,int start){

    int queue[MAX],rear=0,front=0;
    int viseted[MAX]={0};
    printf("BFS Travesal");
    viseted[start]=1;
queue[rear++]=start;
while(front<rear){
    int current = queue[front++];
    printf("%d ",current);

    for (int  i = 0; i < ver; i++){
         if(matrix[current][i]==1 && !viseted[i]){
            viseted[i]=1;
            queue[rear++]=i;
         }
    }
    
}
printf("\n");

 }

int main(){
    int  matrix[MAX][MAX];
    int ver;
    printf("Enter THe Verices:\n");
    scanf("%d",&ver);

if (ver> MAX){

    printf("Vertices  Must Be Less Than %d",MAX);
return 1;
}

for (int  i = 0; i < ver; i++){
for (int j = 0; j < ver; j++){
 scanf("%d",&matrix[i][j]);

}}
 int start;
 printf("Enter The Starting Vertex For BFS:");
 scanf("%d",&start);
   if (start>=0 && start< ver){
    bfs(matrix,ver,start);

   }
   else{
printf(" Invalid starting  vertex");
   }
   
   int isDirected;
   printf("Is the Graph Directed? ( 1 for yes ,0 for no):")
   scanf("%d",&isDirected);
display(matrix,ver);
degree(matrix,ver,isDirected);
return 0;
}