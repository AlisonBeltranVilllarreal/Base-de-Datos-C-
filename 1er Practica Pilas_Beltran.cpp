#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

#define MAX 20

//Definicion de alias de un tipo

typedef char TipoDato;

struct Pila{
	int Tope;
	TipoDato Elementos[MAX];
};

//Definicion del tipo de pila
typedef struct Pila TipoPila;

//Operaciones Auxiliares
void InicializarPila( TipoPila &P){
	P.Tope= -1;
}

int PilaVacia( TipoPila P){
	if(P.Tope==-1)
	return 1;
else
	return 0;
}

int PilaLlena(TipoPila P){
	if (P.Tope==MAX-1)
		return 1;
	else
		return 0;
}

//Operaciones Principales

void PonerPila(TipoPila &P, TipoDato X){
	if (PilaLlena(P)==1){
		printf("La Pila esta Llena...");
		system("pause");
	}
	else{
		P.Tope=P.Tope +1;
		P.Elementos[P.Tope]=X;
	}
}

TipoDato QuitarPila( TipoPila &P){
	TipoDato Dato=NULL;
	if (PilaVacia(P)==1){
		printf("La pila esta vacia... Vuelva Pronto...");
		system("pause");
	}
	else{
		Dato= P.Elementos[ P.Tope];
		P.Tope= P.Tope-1;
	}
	return Dato;
}

int main(){
	
	//Variables
	TipoPila X;
	char Frase[MAX];
	
	InicializarPila(X);
	
	cout<<"Ingresa una frase: "<<endl;
	cin>>Frase;
	
	for(int i=0; i<=strlen(Frase);i++){
		PonerPila(X,Frase[i]);
		}	
		while(PilaVacia(X)!=true){	
		cout<<QuitarPila(X);
	}
}


