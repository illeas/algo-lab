/*
 * CSE 2026 - Algorithms lab
 * Undirected BFS (Basic)
*/

#include <bits/stdc++.h>

using namespace std;

// Visited is a boolean. if visited[i] == true then node i is visited
bool visited[1000];

int graph[100][100], nodes, edges;

void bfs(int source, int destination)
{
    queue<int> q;

    // Push source into queue and make it visited
    q.push(source);
    visited[source] = true;

    printf("\n\nTraversing from source to destination: ");
    while (!q.empty()) // Keep looping until queue is empty
    {

        int f = q.front();
        printf("%d ",f);
        q.pop();

        // End loop if destination is traversed
        if(f == destination)
        {
            printf("\n");
            break;
        }

        // Check all the nodes to see if it is connected with f
        for(int i=1; i<=nodes; i++)
        {
            // If f and i are connected and i is not visited then push i and make it visited
            if(graph[f][i] == 1 && visited[i] == false)
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
int main()
{
    printf("Input number of Nodes and Edges: ");
    scanf("%d %d",&nodes,&edges);

    int a, b, source, destination;
    printf("\nInput the edges: \n");


    /*
    * NOTE: If you input code to have 5 nodes in total. Node 1,2,3,4,5 is created.
    * So you have to input connection between these nodes only [1~5].
    * For example, if number of nodes is 5 then you cant connect 1 6 [Node 1 and 6] as node 6 has not been created.
    */
    for (int i = 1; i <= edges; i++)
    {
        scanf("%d %d",&a,&b);

        // Making an undirected graph. if graph[a][b] has value of 1 means a and b are connected
        graph[a][b] = 1;
        graph[b][a] = 1; // If a and b is connected then we also need to connect b and a
    }

    printf("\n\nInput source: ");
    scanf("%d",&source);

    printf("\n\nInput destination: ");
    scanf("%d",&destination);

    // Send source and destination to the function
    bfs(source, destination);

    return 0;
}

