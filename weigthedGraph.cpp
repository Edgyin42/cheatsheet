# include <iostream>
# include <vector>
#include <queue> 
#include <limits>
# include <algorithm>

using namespace std;

class weightedGraph{
    private:
    int nVertices; 
    bool directed;
    vector<vector<pair<int, int> > > edges; 
    public:
    weightedGraph(int nVertices_, bool directed_): nVertices(nVertices_), directed(directed_){
        edges.resize(nVertices+1);
    }
    void insertEdges(int x, int y, int weight){
        edges[x].push_back({y, weight});
        if (!directed){
            edges[y].push_back({x, weight});

        }
    }
    void printGraph(){
        for (int i = 1; i < nVertices; i++){
            for (auto y: edges[i]){
                cout << i << " " << y.first << " " << y.second << endl;
            }
        }
    }

    void dijkstra(int start) {
        vector<int> dist(nVertices + 1, numeric_limits<int>::max()); // Distance array
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        // Start with the source node
        dist[start] = 0;
        pq.push({0, start}); // (distance, node)

        while (!pq.empty()) {
            int currentDist = pq.top().first;
            int currentNode = pq.top().second;
            pq.pop();

            // Skip processing if we've already found a better path
            if (currentDist > dist[currentNode]) continue;

            // Explore neighbors
            for (auto neighbor : edges[currentNode]) {
                int nextNode = neighbor.first;
                int weight = neighbor.second;

                // Relaxation step
                if (dist[currentNode] + weight < dist[nextNode]) {
                    dist[nextNode] = dist[currentNode] + weight;
                    pq.push({dist[nextNode], nextNode});
                }
            }
        }

        // Print shortest distances
        cout << "Shortest distances from node " << start << ":\n";
        for (int i = 0; i < nVertices; i++) {
            cout << "Node " << i << " -> Distance: " << dist[i] << endl;
        }
    }
};




int main(){
    weightedGraph *a = new weightedGraph(7, false);
    // a->insertEdges(1, 2, 6); 
    // a->insertEdges(1, 5, 5); 
    // a->insertEdges(2, 5, 3); 
    // a->insertEdges(2, 3, 4); 
    // a->insertEdges(5, 3, 7); 
    // a->insertEdges(2, 6, 10); 
    // a->insertEdges(5, 4, 2); 
    // a->insertEdges(4, 7, 10); 
    // a->insertEdges(6, 7, 2); 
    // a->insertEdges(6, 4, 7); 
    // a->printGraph();
    a->dijkstra(1);
    return 0;
}