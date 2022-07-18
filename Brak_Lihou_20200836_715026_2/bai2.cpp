#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void rotate(int &x, int &y, int &z) {
    /****************
        Ho va ten : Brak Lihou
        MSSV : 20200836
    */

    int tmp = x;
    x = y;
    y = z;
    z = tmp;
    /*****************/
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    printf("Before: %d, %d, %d\n", x, y, z);
    rotate(x, y, z);
    printf("After: %d, %d, %d\n", x, y, z);
    return 0;
}
