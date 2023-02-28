//Equipo 3
//Shakersort

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

#define MAX 100

int A[MAX];

int Shakersort(int A[], int N){
	int i,Izq,Der,K,Aux;
	Izq=2;
	Der=N;
	K=N;
	while(Der>=Izq){
	 for (i=Der;i>=Izq;i--){
	  if(A[i-1]>A[i]){
	  	Aux=A[i-1];
	  	A[i-1]=A[i];
	  	A[i]=Aux;
	  	K=i;
	    }
      }
    Izq=K+1;
     for(i=Izq;i<=Der;i++){
    	if(A[i-1]>A[i]){
    		Aux=A[i-1];
    		A[i-1]=A[i];
    		A[i]=Aux;
    		K=i;
		}
	  }
	Der=K-1; 
	}
}

int main (){
  int N, i;
   cout<<"Ingresa el tamaño del arreglo: ";
   cin>>N;
   int A[N];
   for(i = 1; i <= N; i++) {
      cout<<"Ingresa el valor de la posicion "<<i<<": ";
      cin>>A[i];
   }
   Shakersort(A, N);
   cout<<"\n\tArreglo ordenado:\n\t ";
   for (i = 1; i <= N; i++)
      cout<<" -> "<<A[i];
      cout<<endl<<"\t";
   return 0;
}

