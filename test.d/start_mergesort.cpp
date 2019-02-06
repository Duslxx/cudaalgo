#include "stdio.h"
#include "stdlib.h"
#include "sort_dustin.h"
#include <iostream>


int main(){



int i,N,k;
	
	
	
	N=16;
	
	int*Array=(int*)malloc(N*sizeof(int));
	int* WorkArray=(int*)malloc(N*sizeof(int));	

	std::cout<<std::endl;
	



	for(i=0;i<N;i++){
	Array[i]=int(rand() % (2*N));
	std::cout<<Array[i]<<" ";
	}


	std::cout<<std::endl;
	mergesort(Array,WorkArray,N);


	for(k=0;k<N;k++){
	Array[k]=WorkArray[k];
	std::cout<<WorkArray[k]<<" ";


}

}