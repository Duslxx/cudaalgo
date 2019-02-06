
#include "stdio.h"
#include "stdlib.h"
#include "sort_dustin.h"


void mergesort(int* StartArray, int* WorkArray, int Nt) {
int N;
N=Nt;
int off;
int index;
int range;
int i,k;

off=1;

while(N>1){	
N=N/2;
index=0;


for(i=0;i<N;i++){
	zipper(StartArray+index,off,StartArray+index+off,off,WorkArray+index);
	index=index+2*off;
		}

		for(k=0;k<Nt;k++){

		StartArray[k]=WorkArray[k];

				}

			off=2*off;



	}



}