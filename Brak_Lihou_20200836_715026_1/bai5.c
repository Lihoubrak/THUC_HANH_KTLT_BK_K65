//Brak Lihou 20200836
#include<stdio.h>
void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    while(l<r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
}
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    while(l<r){
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;
        l++;
        r--;
    }
}
int main(){
    int i,arr[] = {2,4,9,6,7,8};
    int arr2[]={3,4,7,1,9,6};
    ptr_reversearray(arr,6);
    for( i=0; i<6; i++)
        printf("\t%d", arr[i]);
    }

