#include <bits/stdc++.h>

using namespace std;
bool visited[1000];
int graph[100][100], nodes, edges;

void dfs(int source, int destination)
{
    stack<int> s;

    s.push(source);
    visited[source] = true;

    printf("\n\nTraversing from source to destination: ");
    while (!s.empty())
    {

        int t = s.top();
        printf("%d ",t);
        s.pop();

        // End loop if destination is traversed
        if(t == destination)
        {
            printf("\n");
            break;
        }

        // Check all the nodes to see if it is connected with f
        for(int i=1; i<=nodes; i++)
        {
            // If f and i are connected and i is not visited then push i and make it visited
            if(graph[t][i] == 1 && visited[i] == false)
            {
                s.push(i);
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
    dfs(source, destination);

    return 0;
}
