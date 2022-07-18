#include<bits/stdc++.h>
using namespace std;

void bfs(vector< list<int> > adj) {
    queue<int> Q;
    vector<bool> visited(adj.size());
    Q.push(1); // B?t d?u t? d?nh s? 1
    while (!Q.empty()) {
        int u=Q.front();
        if (!visited[u]){
            visited[u] = true;
            std::cout<< u << std::endl;
        }
        if (!adj[u].empty()){
            int v=adj[u].front(); adj[u].pop_front();
            if(!visited[v]){
                Q.push(v);
            }
        }else { Q.pop();}
    }
}

int main(){
    printf("Ho Va Ten: Brak Lihou\n");
    printf("MSSV: 20200836\n\n");
    int n = 7;
    vector< list<int> > adj;
    adj.resize(n + 1);
    adj[1].push_back(2);
    adj[2].push_back(4);
    adj[1].push_back(3);
    adj[3].push_back(4);
    adj[3].push_back(5);
    adj[5].push_back(2);
    adj[2].push_back(7);
    adj[6].push_back(7);
    bfs(adj);
}
