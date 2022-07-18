#include <iostream>
using namespace std;
int gcd(int a, int b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

int gcd2(int a, int b){
    while(b != 0){
        int tmp = a % b;
        a = b;
        b = tmp;
    }

   return a;
}

int main() {
	printf("-- Brak Lihou --\n");
    printf("-- 20200836 --\n\n");
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl << gcd2(a, b);
    return 0;
}
