#include <iostream>
#include <cstdlib>
using namespace std;

struct AdjListNode
{
    int dest;
    struct AdjListNode* next;
};

struct AdjList
{
    struct AdjListNode *head;
};

class Graph
{
    private:
        int V;
        struct AdjList* array;
    public:
        Graph(int V)
        {
            this->V = V;
            array = new AdjList [V];
            for (int i = 1; i < V; ++i)
                array[i].head = NULL;
        }

        AdjListNode* newAdjListNode(int dest)
        {
            AdjListNode* newNode = new AdjListNode;
            newNode->dest = dest;
            newNode->next = NULL;
            return newNode;
        }

        void addEdge(int src, int dest)
        {
            AdjListNode* newNode = newAdjListNode(dest);
            newNode->next = array[src].head;
            array[src].head = newNode;
            newNode = newAdjListNode(src);
            newNode->next = array[dest].head;
            array[dest].head = newNode;
        }

        void printGraph()
        {
            int v;
            for (v = 1; v < V; ++v)
            {
                AdjListNode* pCrawl = array[v].head;
                cout<<"Adjacency list of vertex "<<v<<"\nhead ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};

int main()
{
    Graph g(9);

    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);
    g.addEdge(3, 5);
    g.addEdge(3, 7);
    g.addEdge(3, 8);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.addEdge(7, 8);

    cout<<"Input    : (1, 2),(1, 3),(2, 3),(2, 4),(2, 5),(3, 5),"<<endl;
    cout<<"           (3, 7),(3, 8),(4, 5),(5, 6),(7, 8)"<<endl;
    cout<<"Output   :"<<endl;

    g.printGraph();

    return 0;
}
