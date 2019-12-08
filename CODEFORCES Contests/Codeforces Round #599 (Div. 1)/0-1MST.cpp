#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge {

public:

    long src,dest,weight;
};



class Graph {

public:
    long V,E;
  Edge *edge;



};

Graph* createGraph(long V, long E)
{
    Graph* graph = new Graph;
    // Graph graph[E]
    graph->V = V;
    graph->E = E;

    graph->edge = new Edge[E];

    return graph;
}

class subset
{
    public:
      long parent;
      long rank;
};

subset subsets[100001];

// bool myComp(const Edge* a, const Edge* b)
// {
//     // Edge* a1 = (Edge*)a;
//     // Edge* b1 = (Edge*)b;
//     if (*a->weight > *b->weight)
//     {
//       return true;
//     }
//     return false;
// }

int myComp(const void* a, const void* b)
{
    Edge* a1 = (Edge*)a;
    Edge* b1 = (Edge*)b;
    return a1->weight > b1->weight;
}
// long find(subset subsets[], long i)
// {
//     // find root and make root as parent of i
//     // (path compression)
//     if (subsets[i].parent != i)
//         subsets[i].parent = find(subsets, subsets[i].parent);
//
//     return subsets[i].parent;
// }
long find(long i)
{
    // find root and make root as parent of i
    // (path compression)
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets[i].parent);

    return subsets[i].parent;
}
// A function that does union of two sets of x and y
// (uses union by rank)
// void Union(subset subsets[], long x, long y)
void Union(long x, long y)
{
      // long xroot = find(subsets, x);
      // long yroot = find(subsets, y);

      long xroot = find(x);
      long yroot = find(y);

    // Attach smaller rank tree under root of high
    // rank tree (Union by Rank)
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;

    // If ranks are same, then make one as root and
    // increment its rank by one
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}




int main(int argc, char const *argv[])
{
  long V,E,m,src,dest,i,j;
  std::cin >> V>>m;
  E = V*(V-1)/2;
  if (m==0)
  {
    cout<<0;
    return 0;
  }
    long graph[V+1][V+1];
  for (i = 1; i <= V; i++)
  {
    for (j = 1; j <= V; j++)
      {
      graph[i][j] = 0;
        // if (i==j)
        // {
          /* code */
        // }
      }
  }
  // Graph* graph = createGraph(V, E);
  for (i = 0; i < m; i++)
  {
    std::cin >> src>>dest;
    graph[src][dest] = 1;
  }
  //sort
  // std::cout << "Poots" << '\n';

  Edge result[V];
    long k = 0;
  Graph* graph1 = createGraph(V, E);
      // Graph graph1;
      // graph1->V = V;
      // graph1->E = E;
  for (i = 1; i <= V; i++)
  {
    for (j = i+1; j <= V; j++)
    {
      graph1->edge[k].src = i;
      graph1->edge[k].dest = j;
      graph1->edge[k].weight = graph[i][j] ;
      k++;

    }
  }

  // sort(graph1->edge,graph1->edge+E,myComp);
  qsort(graph1->edge, graph1->E, sizeof(graph1->edge[0]), myComp);
  for (  int i = 0; i < E; i++)
  {
    std::cout << "\n\nPoopy "<<graph1->edge[i].src<<" "<<graph1->edge[i].dest<<" "<<graph1->edge[i].weight << '\n';
  }

  // subset *subsets = new subset[( V * sizeof(subset) )];
  // std::cout << "Poots" << '\n';

  for (long v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

      long e=0,tmp=0;

    while (e < V - 1 && tmp < E)
      {

          Edge next_edge = graph1->edge[tmp++];

            // long x = find(subsets, next_edge.src);
            // long y = find(subsets, next_edge.dest);
            long x = find(next_edge.src);
            long y = find(next_edge.dest);

          if (x != y)
          {
              result[e++] = next_edge;
              // Union(subsets, x, y);
              Union(x, y);

          }
      }

      long ans = 0;
    for ( i = 0; i < V; i++)
    {
      ans += result[i].weight;
    }
    std::cout << ans;



  return 0;
}
