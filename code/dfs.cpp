#include <iostream>
# include <vector>  
using namespace std; 
// Using adjacency matrix: 
class Graph{
    int nVertices; 
    vector<vector<int> >adjacencyMatrix; 
    public: 
    Graph(int vertices): nVertices(vertices), adjacencyMatrix(vertices, vector<int>(vertices,0)){}
    void addEdges(int startingNode, int endNode){
        this->adjacencyMatrix[startingNode][endNode] = 1; 
    }; 
    void printGraph(){
        for (int i = 0; i < nVertices; i++){
            cout << "The node " << i << " is connected to: "; 
            for (int j = 0; j < nVertices; j++){
                if (adjacencyMatrix[i][j] == 1) cout << j << " ";
            }
            cout << "\n";
        }
    }
}; 


// Using adjacency list: 

class _Graph{
    int nVertices; 
    vector<vector<int> >adjacencyList; 
    public: 
    _Graph(int vertices): nVertices(vertices), adjacencyList(vertices){}
    void addEdges(int startingNode, int endNode){
        this->adjacencyList[startingNode].push_back(endNode); 
    }; 
    void printGraph(){
        for (int i = 0; i < nVertices; i++){
            cout << "The node " << i << " is connected to: "; 
            for (int j: adjacencyList[i]){
                cout << j << " ";
            }
            cout << "\n";
        }
    }
}; 




// int main(){
//     Graph *a = new Graph(5); 
//     a->addEdges(1, 2); 
//     a->addEdges(1, 3); 
//     a->addEdges(3, 2); 
//     a->addEdges(4, 2); 
//     a->addEdges(4, 3); 
//     a->addEdges(4, 5); 
//     a->printGraph();
// }


int main(){
    _Graph *a = new _Graph(5); 
    a->addEdges(0, 1); 
    a->addEdges(0, 2); 
    a->addEdges(2, 1); 
    a->addEdges(3, 1); 
    a->addEdges(3, 2); 
    a->addEdges(3, 4); 
    a->printGraph();
}