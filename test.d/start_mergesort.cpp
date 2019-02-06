#include <stdio.h>
#include <stdlib.h>
#include "sort_dustin.h"

int main()
{
    int i, N, k;	
	N = 16;
	
	int *arr = (int *)malloc(N*sizeof(int));
	int* workArr = (int *)malloc(N*sizeof(int));	

    printf("\n");
	for (i=0; i<N; i++)
    {
	    arr[i] = int(rand() % (2*N));
	    printf("\n");
    }

    printf("\n");
	mergesort(arr, workArr, N);

	for(k=0; k<N; k++)
    {
	    arr[k]=workArr[k];
	    printf("%d", workArr[k]);
    }
}
