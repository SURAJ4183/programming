#include <stdio.h>

#define V 4 // Number of vertices in the graph

// Function to print the matrix
void printMatrix(int matrix[V][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to compute the transitive closure
void transitiveClosure(int graph[V][V])
{
    int reach[V][V];

    // Initialize the reachability matrix with the input graph
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            reach[i][j] = graph[i][j];
        }
    }

    // Apply Floyd-Warshall Algorithm
    for (int k = 0; k < V; k++)
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
            }
        }
    }

    // Print the transitive closure matrix
    printf("Transitive Closure of the given graph:\n");
    printMatrix(reach);
}

int main()
{
    // Example graph (Adjacency matrix representation)
    int graph[V][V] = {
        {1, 1, 0, 0},
        {0, 1, 1, 0},
        {0, 1, 1, 0},
        {0, 0, 0, 1}};

    transitiveClosure(graph);
    return 0;
}
