#include<stdio.h>
int ProductoMayor(int A[],int tam,int ind2);

main(){
	
	int A[10]={3,6,7,5,3,5,6,2,9,1};
//	int A[10]={2,7,0,9,3,6,0,6,2,6};

printf("\nEl Producto Mas Grande De La Serie Es: %d ",ProductoMayor(A,10,5));	

}


int ProductoMayor(int A[],int tam,int ind2){
	
	int ind1=0;
	int aux=0;
	int acum=1;
	int max=0;
	
	for(ind1=0;ind2<=tam;ind1++){	 
		
		aux=ind1;
		
		while(aux<ind2){
			acum=acum*A[aux];
			aux++;
		}
		
		if(max<acum){
			max=acum;
		}
		
		acum=1;
		ind2++;
	}
	
	return max;
}
