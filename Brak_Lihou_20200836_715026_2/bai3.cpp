#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
/****************
    Ho va ten : Brak Lihou
    MSSV : 20200836
*/
int get_value(int x, int a=2, int b=1, int c=0){
    int S = a*x*x + b*x + c;
    return S;
}
/*****************/

int main(){
    int x;
    scanf("%d", &x);

    int a = 2; 
    int b = 1; 
    int c = 0; 
    cin >> a >> b >> c;
    printf("a=2, b=1, c=0: %d\n", get_value(x));
    printf("a=%d, b=1, c=0: %d\n", a, get_value(x, a));
    printf("a=%d, b=%d, c=0: %d\n", a, b, get_value(x, a, b));
    printf("a=%d, b=%d, c=%d: %d\n", a, b, c, get_value(x, a, b, c));

    return 0;
}
