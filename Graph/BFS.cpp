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


void BFS(int source)
{
    vector<int>ans ;
    queue<int>Q ;
    
    Q.push(source) ;
    visited[source] = 1 ;  // whenever we push a NODE we mark them as Visited

    while(!Q.empty())
    {
        int curr_node = Q.front() ;
        ans.push_back(curr_node) ;
        Q.pop() ;
        for(int i=0; i<adjacency_Matrix[curr_node].size(); i++)
        {
            if(visited[adjacency_Matrix[curr_node][i]]==0)
            {
                Q.push(adjacency_Matrix[curr_node][i]) ;
                visited[adjacency_Matrix[curr_node][i]] = 1 ;
            }
        }
    }
    
    int cnt=0 ;
    for(auto i: ans)
    {
        cnt++ ;
        cout<<i ;
        if(cnt<ans.size())
        cout<<" -> " ;
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

    BFS(source) ;          //for BFS Queue data structure is used


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
1 -> 2 -> 3 -> 4 -> 7 -> 5 -> 6

*/
