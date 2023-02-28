#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

#define MAX 20

int V[ MAX];
int N= -1;

void Mostrar(){
	for (int i=0; i<=N; i++)
	printf(" %i ", V[i]);
	
	system("pause");
}

void insertarDes(int Y){
	if(N< MAX -1){
		N= N+1;
		V[ N]= Y;
	}
	else{
		printf("El valor de Y no se puede insertar. Esta Full");
		system("pause");
	};
	
}

void ModificarDesordenado(int X, int Y){
	int I;
	I=0;
	while ((I<= N) &&( X != V[I]))
	I++;
	if (I> N){
		printf("El valor X no se encuentra en el arreglo");
		system("Pause");
	}
	else{
		V[I]= Y;
}
}

void EliminarDesordenado(int X){
	int I, K;
	I=0;
	while ((I<= N) &&( X != V[I]))
	I++;
	
	if (I> N){
		printf("El valor X no se encuentra en el arreglo");
		system("Pause");
	}
	else{
		for (K=I; K<= N-1; K++)
		V[K]= V[K+1];
		N--;
	}
}
/*
int main(){
	int X, V;
	printf("Inserta un valor para X: ");
	scanf("%i", &X);
	insertarDes(V, X);
	system("pause");
	
	Mostrar();
	return 0;
}
*/


void MenuPrincipal(){
	int Opc;
	int X, Y;
	
	do{
		system("CLS");
		cout<<"ARREGLOS DESORDENADOS"<<endl;
		cout<<"1. Insertar"<<endl;
		cout<<"2. Eliminar"<<endl;
		cout<<"3. Modificar"<<endl;
		cout<<"4. Consultar"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Opcion: ";
		scanf("%i", &Opc);
		
		switch(Opc){
			
			case 1:
				printf("Escribir el valor a insertar: ");
				scanf("%i", &X);
				insertarDes( X);
				break;
			
			case 2:
				printf("Escriba el valor a eliminar: ");
				scanf("%i", &Y);
				EliminarDesordenado(Y);
				break;
				
			case 3:
				printf("Escriba el valor a cambiar: ");
				scanf("%i",&X);
				printf("Escriba el nuevo valor: ");
				scanf("%i",&Y);
				ModificarDesordenado(X,Y);
				break;
			case 4:
				Mostrar();
				break;	
		};
	}while(Opc!=5);
	system("Pause");
}

int main (){
	MenuPrincipal();
}