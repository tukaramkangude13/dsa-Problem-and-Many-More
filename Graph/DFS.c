#include <stdio.h>
#define MAX 5

// Function prototypes
void insert(int matrix[MAX][MAX], int ver);
void display(int matrix[MAX][MAX], int ver);
void DFS(int matrix[MAX][MAX], int ver, int start, int visited[]);

// Function to input the adjacency matrix
void insert(int matrix[MAX][MAX], int ver) {
    int i, j;
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < ver; i++) {
        for (j = 0; j < ver; j++) {
            printf("Enter the value for index [%d][%d] (0 or 1): ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display the adjacency matrix
void display(int matrix[MAX][MAX], int ver) {
    int i, j;
    printf("The adjacency matrix is:\n");
    for (i = 0; i < ver; i++) {
        for (j = 0; j < ver; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// DFS function to traverse the graph
void DFS(int matrix[MAX][MAX], int ver, int start, int visited[]) {
    printf("%d ", start);
    visited[start] = 1;

    for (int i = 0; i < ver; i++) {
        if (matrix[start][i] == 1 && !visited[i]) {
            DFS(matrix, ver, i, visited);
        }
    }
}

int main() {
    int matrix[MAX][MAX];
    int ver, start;
    int visited[MAX] = {0};  // Array to keep track of visited nodes

    printf("Enter the number of vertices (max %d): ", MAX);
    scanf("%d", &ver);

    if (ver > MAX) {
        printf("Error: Number of vertices must be less than or equal to %d\n", MAX);
        return 1;
    }

    insert(matrix, ver);  // Input the adjacency matrix
    display(matrix, ver); // Display the adjacency matrix

    printf("Enter the starting vertex for DFS traversal: ");
    scanf("%d", &start);

    printf("DFS traversal starting from vertex %d: ", start);
    DFS(matrix, ver, start, visited);

    return 0;
}
