#include <stdio.h>

void make_heap(int v[],int N) {
   int aux;
   int j;
   for (int i=1; i<=(N-1)/2; i++) {
     if (v[i]<=v[(2*i)+1]) {
        aux=v[i];
        v[i]=v[(2*i)+1];
        v[(2*i)+1]=aux;
     }
     else if (v[i]<=v[2*i]) {
        aux=v[i];
        v[i]=v[2*i];
        v[2*i]=aux;
     }
   j=i;
   }
   if ((2*j)<=N){
     if (v[j]<=v[2*j]) {
         aux=v[j];
         v[j]=v[2*j];
         v[2*j]=aux;
      }
   }
  }



int main () {
  int v[5+1]= {0,20,15,17,10,7};
  make_heap(v,5);
  for (int i=1; i<=5; i++) {
    printf("%d\n",v[i]); 
   }
  return 0;
 }
