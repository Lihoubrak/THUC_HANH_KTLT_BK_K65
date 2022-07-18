#include <stdio.h>

int x[100], mark[100], n,i,j;

void print(){
    for ( i = 1; i <= n; ++i) printf("%d ", x[i]);
    printf("\n");
}

void process(int i) {
    if (i > n){
        print();
        return;
    }
    for ( j = 1; j <= n; ++j)
        if (!mark[j]){
            mark[j] = 1;
            x[i] = j;
            process(i+1);
            mark[j] = 0;
        }
}

int main() {
    printf("Ho Va Ten:Brak Lihou\n");
    printf("MSSV: 20200836\n\n");
    n = 5;
    process(1);
    return 0;
}
