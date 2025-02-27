#include <iostream> 
#include <vector>
using namespace std;

class unionFind{
    vector<int> parent; 
    vector<int> rank;

    public: 
    unionFind(int n){
        this->parent.resize(n);
        this->rank.resize(n);
        for (int i = 0; i < n; i++){
            parent[i] = i; 
            rank[i] = 1;
        }
    }

    int find(int x){
        if (this->parent[x] != x) parent[x] = find(parent[x]);
        return parent[x]; 
    }

    void join(int x, int y){
        int rootX = this->find(x); 
        int rootY = this->find(y); 
        
        if (rootX != rootY){
            if (this->rank[rootX] < this->rank[rootY]) this->parent[rootX] = this->parent[rootY];
            else if (this->rank[rootX] > this->rank[rootY]) this->parent[rootY] = this->parent[rootX];
            else {
                this->parent[rootX] = this->parent[rootY];
                this->rank[rootY]++; 
            }
        }
    }
}; 


// int main(){
//     unionFind *a = new unionFind(5); 
//     a->join(0, 1); 
//     a->join(1, 2); 
//     a->join(3, 2); 
//     cout << a->find(3);
//     return 0;
// }