#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef int TipoDato;

struct nodo{
	TipoDato Info;
	struct nodo *Liga;
};

typedef struct nodo*Lista;

void InicializarLista(Lista &P){
	P=NULL;
}

int ListaVacia(Lista P){
	if(P==NULL)
		return 1;
	else
		return 0;
}

void RecorrerLista(Lista P){
	Lista Q;
	Q=P;
	
	while(Q!=NULL){
		cout<< Q-> Info<< " ";
		Q=Q->Liga;
	}
}
// InsertarFinal
void InsertarFinal(Lista &P,TipoDato Dato){
	Lista Q, T;
	if(ListaVacia(P)!=1){
		Q= new nodo;
		Q->Info=Dato;
		Q->Liga=NULL;
		T=P;
		while(T->Liga!=NULL){
			T=T->Liga;
		}
		T-> Liga=Q;
	}
}

void InsertarAntes(Lista &P,TipoDato Dato, TipoDato REF){
	Lista Q, T,X;
	int Band=1;
	if(ListaVacia(P)!=1){
		Q=P;
	while(REF!=Q->Info && Band==1){
		if(Q->Liga==NULL)
			Band=0;
		else{
		T=Q;
		Q=Q->Liga;
		}
	}
		if(Band==1){
			X=new nodo;
			X -> Info=Dato;
			if(P==Q){
				X->Liga=P;
				P=X;}
			else {
				T->Liga=X;
				X->Liga=Q;
			}
		 }
	}
}

void InsertarDespues(Lista &P,TipoDato Dato, TipoDato REF){
	Lista Q,T,X;
	int Band=1;
	if(ListaVacia(P)!=1){
		Q=P;
	while(REF!=Q->Info && Band==1){
		if(Q->Liga==NULL)
			Band=0;
		else{
		Q=Q->Liga;
		}
	}
		if(Band==1){
			X=new nodo;
			X -> Info=Dato;
			X->Liga=Q->Liga;
			Q->Liga=X;
		}
			else {
				T->Liga=X;
				X->Liga=Q;
			}
		 }
	}

void Crear_Inicio(){
	Lista P,Q,T ;
	int RES;
	
	//Se crea nodo raiz
	P=new nodo;
	cout<<"Escriba valor del nodo: ";
	cin>> P->Info;
	P->Liga=NULL;
	T=P;
	
	//Pregunta por un nuevo nodo
	cout<<"Desea ingrasar otro nodo? Si:1 No:2 ";
	cin>>RES;
	while (RES==1){
		Q=new nodo;
		cout<<"Escriba valor del nodo: ";
		cin>> Q->Info;
		Q->Liga=NULL;
		T->Liga=Q;
		T=Q;
		
	cout<<"Desea ingrasar otro nodo? Si:1 No:2 ";
	cin>>RES;
	} 
	RecorrerLista (P);
}

	void InsertarInicio(Lista &P, TipoDato X){
		Lista Q;
		Q=new nodo;
		Q->Info=X;
		Q->Liga=P;
		P=Q;
	};
	
	void EliminarPrimero(Lista &P){
		Lista Q;
		if(ListaVacia(P)==1){
			cout<<"Error";
		}
		else{
			Q=P;
			P=Q->Liga;
			delete Q;
		}
	}
	
		void EliminarUltimo(Lista &P){
		Lista Q,T;
		if(ListaVacia(P)==1){
			cout<<"Error";
		}
		else{
			Q=P;
			while(Q->Liga!=NULL){
				T=Q;
				Q=Q->Liga;
			}
			if(P==Q)
			P=NULL;
			else 
			T->Liga=NULL;
			delete Q;
		}
	}
	
	void EliminarX(Lista &P, TipoDato REF){
		Lista Q,T;
		Q=P;
		int Band =1;
		if(ListaVacia(P)==1){
			cout<<"No tiene elementos la lista";
			}
			else{
				Q=P;
			while(Q->Info!=REF && Band==1){
				if(Q->Liga==NULL){
					Band=0;}
				else{
					T=Q;
					Q=Q->Liga;
				}
			}
				
				if(Band==1){
					if(Q==P){
						P=Q->Liga;
						}
					else{
						T->Liga=Q->Liga;
					}
				}
				delete Q;
			}
		}


	void EliminarAX(Lista &P, TipoDato Dato){
	Lista Q,T,R;
	int Band=1;
	if(ListaVacia(P)!=1){
		if(P->Info==Dato){
			cout<<"No existe un nodo anterior a X \n";
		}
		else{
			Q=P;
			T=P;
			Band=1;
			while((Q->Info!=Dato)&&(Band==1)){
				if(Q->Liga!=NULL){
					R=T;
					T=Q;
					Q=Q->Liga;
				}
				else{
					Band=0;
				}
			}
			if(Band==0){
				cout<<"El elemento no esta en la lista \n";
			}
			else{
				if(P->Liga==Q){
					P=Q;
				}
			else{
				R->Liga=Q;
				}
			}
			delete T;
		}
	}	
}


	void EliminarDX(Lista &P, TipoDato Dato){
	Lista Q,T,R;
	int Band=1;
	if(ListaVacia(P)!=1){
		if(P->Liga==NULL){
			cout<<"No existe un nodo Despues de X \n";
			system("Pause");
		}
		else{
			Q=P;
			T=P;
			Band=1;
			while((Q->Info!=Dato)&&(Band==1)){
				if(Q->Liga!=NULL){
					R=T;
					T=Q;
					Q=Q->Liga;
				}
				else{
					Band=0;
				}
			}
			if(Band==0){
				cout<<"El elemento no esta en la lista \n";
			}
			else{
				if(Q->Liga!=NULL){
								T=Q->Liga;
							if(T->Liga==NULL){
								Q->Liga=NULL;
							}
							else{
								R=T;
								R=R->Liga;
								Q->Liga=R;
							}
						
							delete T;
						}
						else{
							cout<<"No existe un nodo Despues de X \n";
							system("Pause");
						}
					}
		}
	}	
}
	
void MenuPrincipal(){
	Lista Z;
	InicializarLista(Z);
	int Opc;
	int X, Y;
	
	do{
		system("CLS");
		cout<<"---MENU DE LISTAS---"<<endl;
		cout<<"1. Insertar Inicio"<<endl;
		cout<<"2. Insertar Final"<<endl;
		cout<<"3. Insertar Antes de X"<<endl;
		cout<<"4. Insertar Despues de X"<<endl;
		cout<<"5. Eliminar Primero"<<endl;
		cout<<"6. Eliminar Ultimo"<<endl;
		cout<<"7. Eliminar X"<<endl;
		cout<<"8. Eliminar Antes de X"<<endl;
		cout<<"9. Eliminar Despues de X"<<endl;
		cout<<"10. Mostrar Lista"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"Opcion: ";
		scanf("%i", &Opc);
		
		switch(Opc){
			
			case 1:
				printf("Escribir el valor a insertar: ");
				scanf("%i", &X);
				InsertarInicio( Z, X);
				break;
			
			case 2:
				printf("Escribir el valor a insertar: ");
				scanf("%i", &X);
				InsertarFinal( Z, X);
				break;
				
			case 3:
				printf("Escribir el valor a insertar: \n");
				scanf("%i", &X);
				printf("Escriba la referencia a insertar: ");
				scanf("%i", &Y);
				InsertarAntes( Z, X, Y);
				break;
				
			case 4:
				printf("Escribir el valor a insertar: ");
				scanf("%i", &X);
				printf("Escriba la referencia a insertar: ");
				scanf("%i", &Y);
				InsertarDespues( Z, X, 	Y);
				break;
				
			case 5:
				printf("Elimino el Primero Dato ");
				EliminarPrimero( Z);
				system("Pause");
				break;
			
			case 6:
				printf("Elimino el Ultimo Dato ");
				EliminarUltimo( Z);
				system("Pause");
				break;
				
			case 7:
				printf("Escribir el valor a Eliminar X: ");
				scanf("%i", &X);
				EliminarX( Z, X);
				break;
				
			case 8:
				printf("Escribir el valor a Eliminar antes de X: ");
				scanf("%i", &X);
				EliminarAX( Z, X);
				break;
			
			case 9:
				printf("Escribir el valor a Eliminar despues de X: ");
				scanf("%i", &X);
				EliminarDX( Z, X);
				break;
				
			case 10:
				RecorrerLista(Z);
				system("Pause");
				break;	
		};
	}while(Opc!=0);
	system("Pause");
}

int main( ){
	MenuPrincipal();
/*	for(int i=0; i<=10; i=i+2)
	InsertarDespues(Z, i,100);
	
	for(int i=0; i<=10; i=i+2)
	InsertarAntes(Z, i,100);
	
	for(int i=0; i<=100; i=i+2)
	InsertarInicio(Z, i);
	
	for(int i=0; i<=100; i=i+2)
	InsertarFinal(Z, i);
	
	RecorrerLista(Z); */ //mostrar
	system("pause");
	
	return 0;
}
