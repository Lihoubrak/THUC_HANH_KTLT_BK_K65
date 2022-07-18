#include <bits/stdc++.h>
using namespace std;
int a[1000], n;
int mem[1000]; 

void init(){
    memset(mem, -1, sizeof(mem));
}

void sol(){
    mem[0] = 1;

    for(int i=1; i<n; i++){
        mem[i] = 1;
        for(int j=0; j<i; j++){
            if(a[j] < a[i]){
                if(mem[i] < mem[j] + 1){
                    mem[i] = mem[j] + 1;
                }
            }
        }
    }
}
int lis(int i) {
    
    return mem[i];
    /*****************/
}

//# Truy vet loi giai
void trace(int i){
    for(int j = 0; j < i; j++){
        if (a[j] < a[i] && mem[i] == 1 + mem[j]){
            trace(j);
            break;
        }
    }
    cout << a[i] << " ";
}

int main(){
    printf("-- Brak Lihou --\n");
    printf("-- 20200836 --\n\n");
    init();
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    sol();

    int res = 1, pos = 0;
    for(int i = 1; i < n; i++){
        if (res < lis(i)){
            res = lis(i);
            pos = i;
        }
    }
    cout << res << endl;
    trace(pos);
    return 0;
}
