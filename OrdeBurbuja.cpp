//Ordenamiento
#include<iostream>
using namespace std;
int main(){
	int const TAM=10;
	int x[]={234,56,7,8,98,65,44,67,45,245};
	int n;
	int i;
	int j;
	int aux;
	//Imprecion del arreglo
	for(i=0;i<TAM;i++){
		cout<<x[i]<<" "; //x[], contiene los valores del array, con i, le indico la posicion
	}
	cout<<endl;
	//Inicio del ciclo anidado
	for(i=0;i<TAM;i++){
		for(j=i+1;j<TAM;j++){
			//Condicion
			if(x[j]<x[i]){
				aux=x[j];
				x[j]=x[i];
				x[i]=x[j];
				x[i]=aux;
			}
		}
		//Imprecion del ordenamiento
		}
		for(i=0;i<TAM;i++){
		cout<<x[i]<<" ";	
		
	}
	return 0;
	
}






