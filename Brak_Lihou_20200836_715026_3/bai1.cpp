#include<iostream>
using namespace std;

int lucas(int n) {
   if(n==0) return 2;
   if(n==1) return 1;
   
   else return lucas(n-1)+lucas(n-2); 
    
}

int main(){
	 
	printf("-- Brak Lihou --\n");
    printf("-- 20200836--\n\n");
    
	int n;
	cout<<lucas(5);
	
	return 0;
}
