#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string.h>
#include <conio.h>

using namespace std;

int Factorial(int N){
	if (N==0)
	   return 1;	
	else
	   return Factorial (N-1) * N;
};

int FactorialIte( int N ){
  int i, fact= 1;
  
  for (i=1; i<=N; i++)
      fact= fact * i;
	
  return fact;	   	
};

int Fibonacci(int N){
  if (( N==0 ) || (N==1))
     return N;
  else
     return Fibonacci( N - 1 ) + Fibonacci( N - 2 );
};

int FibonacciIte( int N ){
	int Fibo, fiba,fibb;
	int i;
	if (( N==0 ) || (N==1))
			 Fibo=N;
		else 
			 fiba=0,fibb=1,i=2;
			
	while(i<=N){
		Fibo=fibb+fiba;
		fiba=fibb;
		fibb=Fibo;
		i=i+1;
	}
	return Fibo;
	};


static bool Palindromo(char C[], int izq, int der){
	if (izq>der){
		return true;
	}else{
		if(C[izq]==C[der]){
			return Palindromo(C,izq+1,der-1);
		} else {
			return false;
		}
	}
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
	}
	
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
int Ackermann( int M, int N){
	if (M==0)
		return N+1;
	else
		if(N==0)
		 return (Ackermann(M-1,1));
		else
		 return (Ackermann(M-1,Ackermann(M,N-1))); 
}

	void Hanoi( int N, int A, int B, int C) {
		if(N==1){
			cout<<"Mover "<<A<<" A "<<C<<endl;
		}
		else{
			Hanoi(N-1,A,B,C);
			cout<<"Mover "<<A<<" A "<<C<<endl;
			Hanoi(N-1,B,A,C);
		}
	}	
	
	void HanoiIter( int N, char Orig, char Dest, char Aux){
		
	int MAX;
	int PILAN[MAX];
	int PILAO[MAX];
	int PILAD[MAX];
	int PILAX[MAX];
	int TOPE;
	char VARAUX;
	bool BAND;
	
	TOPE=0;
	BAND=false;
	
	while((N>0)&&(BAND=false)){
		while(N>1){
			TOPE=TOPE+1;
			PILAN[TOPE]=N;
			PILAO[TOPE]=Orig;
			PILAD[TOPE]=Dest;
			PILAX[TOPE]=Aux;
			
			N=N-1;
			VARAUX=Dest;
			Dest=Aux;
			Aux=VARAUX;
		}
		cout<<"Mover un disco de "<<Orig<<" a "<<Dest<<endl;
		BAND=true;
		
		if(TOPE>0){
			N=PILAN[TOPE];
			Orig=PILAO[TOPE];
			Dest=PILAD[TOPE];
			Aux=PILAX[TOPE];
			TOPE=TOPE-1;
			cout<<"Mover un disco de "<<Orig<<" a "<<Dest<<endl;
			N=N-1;
			VARAUX=Orig;
			Orig=Aux;
			Aux=VARAUX;
			BAND=false;
		}
	}
}


void MenuPrincipal(){
  int op1, op2, Num;
  char Frase[ 20 ];
  char palabra[ 20 ];
  char *Cad="Guadalajara";
  char Orig, Dest, Aux, c;
  int N, M;
  int izq, der;
  izq=0;
  
  do{
  	cout<<"-MENU PRINCIPAL-"<<endl;
  	cout<<"1. Iterativo."<<endl;
  	cout<<"2. Recursivo."<<endl;
  	cout<<"Opcion: ";
  	cin>>op1;
  	switch(op1){
  		
  		
  		case 1:
  			do {
              system("cls");
              cout<<"-MENU ITERATIVO-"<<endl;
              cout<<"1. Factorial."<<endl;
              cout<<"2. Serie Fibonacci."<<endl;
              cout<<"3. Euclides."<<endl;
              cout<<"4. Invierte Cadena."<<endl;
              cout<<"5. Palindromo."<<endl;
              cout<<"6. Torres de Hanoi."<<endl;
              cout<<"0. Salir."<<endl;
              cout<<"Opcion: "; 
	          cin>>op2;
              system("cls");
              switch (op2) {
                 case 1: //Numero factorial
                      system("cls");
                      cout<<"Dame un numero: ";
                      cin>>Num;
                      cout<<"El factorial de "<<Num<< " es = " << Factorial(Num) << endl;
                      system("Pause");  
                 break;
                 
                 case 2: //Serie fibonacci
                      system("cls");
                      cout<<"Dame un numero: ";
                      cin>>Num;
                      cout<<"La serie Fibonacci de "<<Num<<" es = "<<FibonacciIte(Num)<<endl;
                      system("Pause");  
                 break;
                 
                 case 3: //Algoritmo de Euclides o MCD
        				int N;
						int M;			       
						cout << "Dame el primer valor: ";
						cin >> M;
						cout << "Dame el segundo valor: ";
						cin >> N;
						EuclidesIte(M,N);
						cout<<EuclidesIte(M, N)<<endl;
						system("pause");		        
                 break;
                 
		         case 4: // Invierte Cadena
                      system("cls");
                      cout<<"Escriba una frase: ";
                      cin>>Frase;
                      //cout<<Invierte(Frase, 0, strlen( Frase )-1);
                      system("PAUSE");
                 break;
                                  
                 case 5: //Palindromo
                       cout<<"Ingresa una palabra: ";
                       cin>>palabra;
                       if (Palindromo(palabra,0,strlen(palabra)-1)==true){
               	           cout<<"Si es un palindromo"<<endl;
               	       }else{
               		       cout<<"No es un palindromo"<<endl;
				        }
				         system("pause");
				 break;

		         case 6: //Torres de Hanoi
            	      Orig= 'A';
	                  Aux= 'B';
	                  Dest= 'C';
	            
             	      cout<<"Numero de discos: ";
	                  cin>>N;
	                  cout<<"\n Los movimientos a realizar son: "<<endl;
                      Hanoi( N, Orig, Dest, Aux);         
	                  system("Pause");
                 break; 
				 } 
				             
	     } while (op2!=0);
	     break;
	     
	     //MENU PRINCIPAL
	     case 2:
	     	do{
	     	  system("cls");
              cout<<"-MENU RECURSIVO-"<<endl;
              cout<<"1. Factorial."<<endl;
              cout<<"2. Serie Fibonacci."<<endl;
              cout<<"3. Euclides."<<endl;
              cout<<"4. Invierte Cadena."<<endl;
              cout<<"5. Palindromo."<<endl;
              cout<<"6. Ackermann."<<endl;
              cout<<"7. Torres de Hanoi."<<endl;
              cout<<"0. Salir."<<endl;
              cout<<"Opcion: "; 
	          cin>>op2;
              system("cls");
              switch (op2) {
                 case 1: //Numero factorial
                      system("cls");
                      cout<<"Dame un numero: ";
                      cin>>Num;
                      cout<<"El factorial de "<<Num<< " es = " << Factorial(Num) << endl;
                      system("Pause");  
                 break;
                 
                 case 2: //Serie fibonacci
                      system("cls");
                      cout<<"Dame un numero: ";
                      cin>>Num;
                      cout<<"La serie Fibonacci de "<<Num<<" es = "<<Fibonacci(Num)<<endl;
                      system("Pause");  
                 break;
                 
                 case 3: //Algoritmo de Euclides o MCD
        
                 break;
		         case 4: // Invierte Cadena
                      system("cls");
                      cout<<"Escriba una frase: ";
                      cin>>Frase;
                      //cout<< Invierte( Frase, 0, strlen( Frase )-1 );
                      system("PAUSE");
                 break;
                                  
                 case 5: //Palindromo
                       cout<<"Ingresa una palabra: ";
                       cin>>palabra;
                       if (Palindromo(palabra,0,strlen(palabra)-1)==true){
               	           cout<<"Si es un palindromo"<<endl;
               	       }else{
               		       cout<<"No es un palindromo"<<endl;
				        }
				         system("pause");
				 break;

                 case 6: //Algoritmo de Ackermann
        			cout<<"Ingresa el valor de M: ";
					        cin>>M;
					        cout<<"Ingresa el valor de N: ";
					        cin>>N;
					        cout<<"Ackerman: "<<Ackermann(M,N)<<endl;
					    system("pause");
                 break;
                 
		         case 7: //Torres de Hanoi
						int A=1;
						int B=2;
						int C=3;
						N=0;
							
						cout << "Con cuantos discos desea Jugar? ";
						cin >> N;
							
						cout << "\n Los movimientos a realizar son: \n";
						Hanoi( N, A, B, C);         
						system("Pause");
						break; 
							             
				 } 
				             
	     } while (op2!=0);
	     break;
	     }
} while (op1!=0);
}

int main (){
	  
  MenuPrincipal(); 
  getchar();
	
  return 0;
}
