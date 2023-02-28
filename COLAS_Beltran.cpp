#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

#define MAX 30

typedef int TipoDato;

struct Cola{
	int Frente;
	int Final;
	TipoDato Elementos [MAX];
	
};

typedef struct Cola TipoCola;

void InicializarCola(TipoCola &C){
	C.Frente = -1;
	C.Final= -1;
};

int ColaVacia( TipoCola C){
	if( C.Frente == -1 && C.Final==-1)
		return 1;
	else
		return 0;
}

int ColaLlena( TipoCola C){
	if ((C.Frente==0 && C.Final==MAX-1) || (C.Final==C.Frente-1))
		return 1;
	else
		return 0;
}

void InsertarCola(TipoCola &C, TipoDato X){
	if (ColaLlena(C)==1){
		printf("La Cola esta Llena...Se desborda NOOOO ---" );
		system("pause");
	}
	else{
		if(C.Final==MAX-1)
		C.Final=0;
		else{
			C.Final=C.Final+1;
		}
		C.Elementos[C.Final]=X;
	}
}

TipoDato EliminarCola( TipoCola &C){
	TipoDato Dato=NULL;
	if (ColaVacia(C)==1){
		printf("La Cola esta vacia... Vuelva Pronto...");
		system("pause");
	}
	else{
		Dato= C.Elementos[ C.Frente];
		if(C.Frente ==C.Final)//Un solo elemeto existe
			InicializarCola(C);
		else{
			if(C.Frente==MAX-1)
			C.Frente=0;
			else
			C.Frente = C.Frente +1;
		}			
	}
	return Dato;
}

int main(){
	TipoCola Z;
	InicializarCola(Z);
	
	int Sgd=1;
	int Computadora=4;
	int Laptod=9;
	int Ipad=14;
	int i;
		
		cout<<"Tienes 60 segundos para imprimir \n";
		Sleep(1000);
while(i<=59){
			
			system("cls");
			cout<<"Tiempo: "<<Sgd<<endl;
			Sleep(1000);
	
		if(Computadora==0){
			InsertarCola(Z,1);
			Computadora=5;
			cout<<"Imprimio Computadora 1"<<endl;
			Sleep(1000);
			
		}
		if(Laptod==0){
			InsertarCola(Z,2);
			Laptod=10;
			cout<<"Imprimio Laptod 2"<<endl;
			Sleep(1000);
		}
		if(Ipad==0){
			InsertarCola(Z,3);
			Ipad=15;
			cout<<"Imprimio Ipad 3"<<endl;
			Sleep(1000);
		}
		Sgd++;
		Computadora--;
		Laptod--;
		Ipad--;
		i++;
	}		 
	cout<<endl<<"Trabajos Almacenados: ";
	
	EliminarCola(Z);
	
	while (ColaVacia(Z)!=1)
		cout<<EliminarCola(Z)<<"_";
	cout<<endl;
	system("pause");
	
}
