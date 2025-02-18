///  ~~~~~Bismillah'hir Rah'maanir Rahim~~~~~  ///

/*  "  Allah(SWT) blesses with knowledge whom he wants. "   */
/*  " Indeed with Hardship, comes Ease. "    */


///         Originator : Sabrina Mostafa
///         Dept. Of CSE
///         International Islamic University Chittagong




#include<bits/stdc++.h>
using namespace std ;

#define   FastRead      ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define   ULL               unsigned long long
#define   LL                  long long
#define   ST                  string
#define   F                    first
#define   S                    second
#define   PB                 push_back
#define   MP                make_pair
#define   pi                   acos(-1.0)
#define   NL                 "\n"
#define    _                    " "






// Space Complexity: O(Nodes)
// Time Complexity: O(Nodes)+O(2*Edges)



#define mx 200
vector<int> adjacency_Matrix[mx+5] ;
bool visited[mx+5] ;
vector<int>ans ;


void DFS(int source)
{
    int curr_node = source ;
    visited[curr_node] = 1 ;    // we will mark the current node as visited(1)
    ans.push_back(curr_node) ;

    for(int i=0; i<adjacency_Matrix[curr_node].size(); i++)
    {
        int temp = adjacency_Matrix[curr_node][i] ;
        if(visited[temp]==0)
        {
            DFS(temp) ;       // doing the same for this new unvisited node
        }
    }
}


int main ()
{
    int nodes, edges, source ;
    cin>>nodes>>edges ;                  //  number of nodes and edges

    for(int i=1; i<=edges ; i++)
    {
            int u, v ;                   //  nodes of each edges
            cin>>u>>v ;
            adjacency_Matrix[u].PB(v) ;              //  as they are adjacent to each other
            adjacency_Matrix[v].PB(u) ;          //  as they are adjacent to each other
    }
    cin>>source ;


    DFS(source) ;          //for DFS(recursion) Stack data structure is used


    int cnt=0 ;
    for(auto i: ans)
    {
        cnt++ ;
        cout<<i ;
        if(cnt<ans.size())
        cout<<" -> " ;
    }


    return 0 ;
}


/*
INPUT:
7 7
1 2
1 3
2 4
3 4
3 7
4 5
4 6
1
GRAPH:
      1
     / \
    2   3
     \  / \
      4    7
     / \
    5   6

OUTPUT:
1 -> 2 -> 4 -> 3 -> 7 -> 5 -> 6

*/
