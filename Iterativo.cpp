//Algoritmos Recursivo (Factoriales)
	
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string.h>
#include <conio.h>


using namespace std;

	int Factorial(int N){
			if(N==1 || N==0){
				return 1;
				
			}
			else 
				return(Factorial(N-1)*N);
		}
	
	int FactorialIte( int N ){
	
			int f=1;
			
			for(int i=1; i<=N; i++){
				f=f*i;
				
			}
			return f;
		}
	
	int Fibonacci(int N){
	  if (( N==0 ) || (N==1))
	     return N;
	  else
	     return Fibonacci( N - 1 ) + Fibonacci( N - 2 );
	};
	
	int FibonacciIte( int N ){
		
	};
	
	int Euclides(int M, int N) {
		int e;	
		
		if(N==0){
		e=M;
			}
		else 
		return e=(Euclides(N,M%N));
	}
	
	int EuclidesIte(int M, int N) {
    int temporal;//Para no perder b
    while (N != 0) {
        temporal = N;
        N = M % N;
        M = temporal;
    }
    return M;
}
	
	
	void Hanoi( int N, int Orig, int Dest, int Aux)         
	{
		
	}
	
	
	
	static bool Palindromo( char c[], int limIzq, int limDer){
	
		if (limIzq>limDer){
			return true;
		}
		else 
			if(	c[limIzq]==c[limDer]){
				return Palindromo(c,limIzq+1,limDer-1);
			}
		else
			return false;
	}
	
	 static bool PalindromoIte(char palin[] ){
	       
			int longitud;
			int inicio=0,fin;
	
	    longitud=strlen(palin);
	
	    for(fin=longitud-1; palin[fin]==palin[inicio] && fin>=0; inicio++,fin--);
	
	    if(inicio==longitud){
	        printf("\nEs un palindromo");
	      }else{
	        printf ("\nNo es palindromo");
	    } 
	
	    getch(); //Para que no se cierre la ventana hasta pulsar una tecla
	         
	}


void MenuPrincipal()
{
  int Opc, Opc2, Num;
  char Frase[ 20 ];
  char *Cad="Guadalajara";
  char Orig, Dest, Aux,c;
  int N, M;
  char palabra[20];
  int limIzq, limDer;
  limIzq=0;
  char palin[20];
  
  
  
  
  do {
       system("cls");
       cout << "Elige que tipo de algoritmos deseas: " << endl;
       cout << "1. Recursivo." << endl;
       cout << "2. Iterativo." << endl;
       cout << "0. Salir." << endl;
       
       cout << "Opcion: "; cin >> Opc;
       
       switch (Opc) {
         case 1: // Recursivo
                 do {
							       system("cls");
							       cout << "Ejemplos utilizando algoritmos Recursivos" << endl;
							       cout << "1. Factorial." << endl;
							       cout << "2. Serie Fibonacci." << endl;
							       cout << "3. Euclides." << endl;
							       cout << "4. Invierte Cadena." << endl;
							       cout << "5. Palindromo." << endl;
							       cout << "6. Ackermann." << endl;
							       cout << "7. Torres de Hanoi." << endl;
							       cout << "0. Salir." << endl;
							       
							       cout << "Opcion: "; cin >> Opc2;
							       
							       switch (Opc2) {
							         case 1: // Numero factorial
							                 system("cls");
							                 cout << "Dame un numero: ";
							                 cin >> Num;
							                 cout << "El factorial de " << Num << " es = " << Factorial(Num) << endl;
							                 system("Pause");  
							                 break;
							                 
							        case 2: // Serie fibonacci
							                 system("cls");
							                 cout << "Dame un numero: ";
							                 cin >> Num;
							                 
							                 cout << "La serie Fibonacci de " << Num << " es = " << Fibonacci(Num) << endl;
							                 system("Pause");  
							                 break;
							                 
							        case 3: // Algoritmo de Euclides o MCD
									        int N;
									        int M;
									        
							        		cout << "Dame el primer valor: ";
							        		cin >> M;
							        		cout << "Dame el segundo valor: ";
							        		cin >> N;
							        		Euclides(M,N);
							        		cout<<Euclides(M, N)<<endl;
							        		system("pause");
							        
							        
							        		break;
													
									case 4: // Invierte Cadena
							                system("cls");
							                cout << "Escriba una frase: ";
							                cin >> Frase;
							                //cout << Invierte( Frase, 0, strlen( Frase )-1 );
							                system("PAUSE");
							                break;
							                                  
							        case 5: // Palindromo
							        		
							                system("cls");
							                cout << "Cual es tu frase?: ";
							                cin >> palabra; 
							                if(Palindromo(palabra,0,strlen(palabra)-1)==true){
							                	cout<<"Si es un palindromo "<<endl;
											}
							                	else cout<<"No es un palindromo "<<endl;
							                 system("Pause");  
											break;
							        case 6: // Algoritmo de Ackermann
							        
									case 7: // Torres de Hanoi
							            	Orig= 'A';
								            Aux= 'B';
								            Dest= 'C';
							
							             	cout << "Numero de discos: ";
								            cin >> N;
							
								            cout << "\n Los movimientos a realizar son: \n";
							                Hanoi( N, Orig, Dest, Aux);         
								            system("Pause");
							                break; 
							       };            
							      
							  } while (Opc2!=0);
                				 break;
                 
        case 2: // Iterativo
						                 do {
						       system("cls");
						       cout << "Ejemplos utilizando algoritmos Iterativos" << endl;
						       cout << "1. Factorial." << endl;
						       cout << "2. Serie Fibonacci." << endl;
						       cout << "3. Euclides." << endl;
						       cout << "4. Invierte Cadena." << endl;
						       cout << "5. Palindromo." << endl;

						       cout << "6. Torres de Hanoi." << endl;
						       cout << "0. Salir." << endl;
						       
						       cout << "Opcion: "; cin >> Opc2;
						       
						       switch (Opc2) {
						         case 1: // Numero factorialIterativo
						                 system("cls");
						                 cout << "Dame un numero: ";
						                 cin >> Num;
						                 cout << "El factorial de " << Num << " es = " << FactorialIte(Num) << endl;
						                 system("Pause");  
						                 break;
						                 
						        case 2: // Serie fibonacci
						                 system("cls");
						                 cout << "Dame un numero: ";
						                 cin >> Num;
						                 cout << "La serie Fibonacci de " << Num << " es = " << Fibonacci(Num) << endl;
						                 system("Pause");  
						                 break;
						                 
						        case 3: // Algoritmo de Euclides o MCD
						        	
						        		int N;
									    int M;
									       
							        	cout << "Dame el primer valor: ";
							        	cin >> M;
							        	cout << "Dame el segundo valor: ";
							        	cin >> N;
							        	EuclidesIte(M,N);
							        	cout<<EuclidesIte(M, N)<<endl;
							        	system("pause");
						        
								case 4: // Invierte Cadena
						                system("cls");
						                cout << "Escriba una frase: ";
						                cin >> Frase;
						                //cout << Invierte( Frase, 0, strlen( Frase )-1 );
						                system("PAUSE");
						                break;
						                                  
						        case 5: // Palindromo
						                cout << "Escriba una frase: ";
						                cin >> palin;
    									cout<<PalindromoIte(palin);
    									
										break;
		
								case 7: // Torres de Hanoi
						            	Orig= 'A';
							            Aux= 'B';
							            Dest= 'C';
						
						             	cout << "Numero de discos: ";
							            cin >> N;
						
							            cout << "\n Los movimientos a realizar son: \n";
						                Hanoi( N, Orig, Dest, Aux);         
							            system("Pause");
						                break; 
						       };            
						      
						  } while (Opc2!=0);
					}
                 			break;
                 
        
      
  } while (Opc!=0);
}
  
int main (){
	  
  MenuPrincipal(); 
  getchar();
	
  return 0;
}
