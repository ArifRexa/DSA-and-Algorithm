#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;

int visited[N];
int level[N];

vector<int> adj_list[N];

void BFS(int src)
{
    queue<int> q;

    visited[src] = 1;
    level[src] = 0;
    q.push(src);

    while (!q.empty())
    {
        int head = q.front();
        q.pop();

        cout << head << " \n";

        for (int adj_node : adj_list[head])
        {
            if (visited[adj_node] == 0)
            {
                visited[adj_node] = 1;
                level[adj_node] = level[head] + 1;
                q.push(adj_node);
            }
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    int src = 0;
    BFS(src);

    for (int i = 0; i < nodes; i++)
    {
        cout << "node: " << i << " ==> level: " << level[i] << "\n";
    }

    return 0;
}

/*

0----1----2----3
     |    |
     |    |
     5----4

6 6

0 1
2 3
1 5
2 4
5 4
1 2


outPUT:
0 1 5 2 4 3

node: 0 ==> level: 0
node: 1 ==> level: 1
node: 2 ==> level: 2
node: 3 ==> level: 3
node: 4 ==> level: 3
node: 5 ==> level: 2



0----1    2----3
     |    |
     |    |
     5----4

6 5

0 1
2 3
1 5
2 4
5 4

output:
0 1 5 4 2 3

node: 0 ==> level: 0
node: 1 ==> level: 1
node: 2 ==> level: 4
node: 3 ==> level: 5
node: 4 ==> level: 3
node: 5 ==> level: 2




6 7

0 1
0 3
0 4
1 2
1 5
2 4
5 4
*/