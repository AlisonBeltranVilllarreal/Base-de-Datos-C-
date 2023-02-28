//ArrayOrdenado
//Beltran Villarreal Alison 

	
#include <iostream>
#include <stdio.h>

using namespace std;
	
#define MAX 20
	
	int V[MAX];
	int N = -1;

	void Mostrar(){
    for (int i=0; i<=N; i++)
    printf(" %i ", V[i]);

    system("pause");
	}
	
	int BuscarOrdenado(int X){
		
	int i;
	i=0;
	
	while ((i<=N)&&(V[i]<X))
	i++;
	
	if((i>N)||(V[i]>X))
	return (-i);
	else
	return (i);
	}
	
	void insertarOrdenado(int Y){
		int POS,i;
		
    if(N<MAX){
    	POS=BuscarOrdenado(Y);
    	if(POS>0){
    		cout<<"El elemento ya existe"<<endl;	
		}
    	else{
    		POS=POS*(-1);
    		N=N+1;
    		for(i=N; i>=(POS+1);i--){
    			V[i]=V[i-1];
			}
			V[POS]=Y;				
		}
	}	
	else {
    		cout<<"No hay espacion en el arreglo"<<endl;	
		}
	}
	
	void EliminarOrdenado (int X){
		
		int POS,i;
		
		if(N>0){
			
			POS=BuscarOrdenado(X);
			
			if(POS<0){
				cout<<"El elemento no existe."<<endl;
		 	} 
			else
				N=N-1;
			
				for(i=POS; i<=N; i++){
					V[i]=V[i+1];
					}
			}	

	}
		
void ModificarOrdenado(int X, int Y){
		
		int POS,i;
		
		int I;
		I=0;
		while ((I<= N) &&( X != V[I]))
		I++;
		if (I> N){
			printf("El valor X no se encuentra en el arreglo");
			system("Pause");
		}
		else{
				POS=BuscarOrdenado(X);
			
			if(POS<0){
				cout<<"El elemento no existe."<<endl;
		 	} 
			else
				N=N-1;
			
				for(i=POS; i<=N; i++){
					V[i]=V[i+1];
					}
			POS=BuscarOrdenado(Y);
			if(POS>0){
	    		cout<<"El elemento ya existe"<<endl;	
			}
	    	else{
	    		POS=POS*(-1);
	    		N=N+1;
	    		for(i=N; i>=(POS+1);i--){
	    			V[i]=V[i-1];
				}
				V[POS]=Y;
					
			}	
						
					
			}
	}
	
	void MenuPrincipal(){
		
	int X,Y;
	int Opc;  	
	
	do{
		system("CLS");
		cout<<"ARREGLO ORDENADO:\n";
		cout<<"1. Insertar Ordenado."<<endl;
		cout<<"2. Eliminar."<<endl;
		cout<<"3. Modificar ordenado."<<endl;
		cout<<"4. Mostrar ordenado."<<endl;
		cout<<"5. Salir.\n"<<endl;
		cout<<"Opcion: ";
		scanf("%i", &Opc);
		
		     switch(Opc){
		     	
			 case 1:
                printf("Escribir el valor a insertar: ");
                scanf("%i", &Y);
                insertarOrdenado(Y);

                break;

            case 2:
                
				printf("Escribir el valor a eliminar: \n");
                scanf("%i", &X);
				
			    EliminarOrdenado (X);
                break;
			 		
			case 3:
			
				printf("Escriba el valor a cambiar: ");
				scanf("%i",&X);
				printf("Escriba el nuevo valor: \n");
				scanf("%i",&Y);
				ModificarOrdenado(X,Y);
				break;
			
			case 4:
				Mostrar();
			    break;
			   		
		    	
		}
		}while (Opc!=5);
		
	}
	
	
		
	int main(){
	
	MenuPrincipal();
	system("pause");
	return 0;
	
	}
