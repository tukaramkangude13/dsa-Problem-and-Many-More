#include <stdio.h>

#define V 4  // Number of vertices

void printAdjList(int adjMatrix[V][V], int V) {
    printf("Adjacency List:\n");
    for (int i = 0; i < V; i++) {
        printf("Vertex %c: ", 'A' + i);
        for (int j = 0; j < V; j++) {
            if (adjMatrix[i][j] == 1) {
                printf("%c ", 'A' + j);
            }
        }
        printf("\n");
    }
}

int main() {
    // Adjacency Matrix representation (Directed Graph)
    int adjMatrix[V][V] = {
        {0, 1, 0, 1},  // A -> B, D
        {0, 0, 1, 0},  // B -> C
        {0, 0, 0, 0},  // C -> 
        {0, 0, 1, 0}   // D -> C
    };

    // Printing the Adjacency List
    printAdjList(adjMatrix, V);

    return 0;
}
