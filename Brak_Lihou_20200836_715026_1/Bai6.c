//Brak Lihou 20200836
#include<stdio.h>
#include<stdlib.h>
int *a;
int n,j, i,tmp;
int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d", a + i);
    printf("The input array is: \n");
    for(i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");
    for(i=0; i<n; i++)
        for( j=i; j<n; j++){
            if(*(a+i) > *(a+j)){
                int tmp;
                tmp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
        }
    printf("The sorted array is: \n");
    for(i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    free(a);
    return 0;
}

