#include <iostream>
using namespace std;

class Graph {
private:
      bool** adjMatrix;
      int numVertices;
public:
      Graph(int numVertices) {
            this->numVertices = numVertices;
            adjMatrix = new bool*[numVertices];
            for (int i = 1; i <= numVertices; i++) {
                  adjMatrix[i] = new bool[numVertices];
                  for (int j = 1; j <= numVertices; j++)
                        adjMatrix[i][j] = false;
          }
    }

      void addEdge(int i, int j) {
                  adjMatrix[i][j] = true;
                  adjMatrix[j][i] = true;
    }

      void removeEdge(int i, int j) {
                  adjMatrix[i][j] = false;
                  adjMatrix[j][i] = false;
    }

      bool isEdge(int i, int j) {
                  return adjMatrix[i][j];
    }

    void toString() {
      for (int i = 1; i <= numVertices; i++) {
                  cout << i << " : ";
                  for (int j = 1; j <= numVertices; j++)
                        cout << adjMatrix[i][j] << " ";
                  cout << "\n";
      }

    }

    ~Graph() {
            for (int i = 1; i <= numVertices; i++)
                  delete[] adjMatrix[i];
            delete[] adjMatrix;
    }
};


int main(){
        Graph g(8);

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

        g.toString();
}
