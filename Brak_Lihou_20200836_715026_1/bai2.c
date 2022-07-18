//Brak Lihou 20200836
#include<stdio.h>
int main(){
  int x,y,z;
  int *ptr;
  scanf("%d %d %d", &x, &y, &z);
  printf("Here are the values of x, y, and z:\n");
  printf("%d %d %d\n", x, y, z);
  printf("Once again, here are the values of x, y, and z: \n");
  ptr=&x;
  x=*ptr+100;
  ptr=&y;
  y=*ptr+100;
  ptr=&z;
  z=*ptr+100;
  printf("%d %d %d\n", x, y, z);  
  return 0;
}
