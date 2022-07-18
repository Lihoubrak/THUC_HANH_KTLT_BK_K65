//Brak Lihou 20200836
#include<stdio.h>
double*maximum(double*a,int size){
    double*max;
    max=a;
    int i;
    if(a==NULL)
    return NULL;
    else
    {
        *max=a[0];
        for(i=0;i<size;i++)
        {
            if(*max<a[i]){
                *max=a[i];
            }
        }
    }
    return max;
}
