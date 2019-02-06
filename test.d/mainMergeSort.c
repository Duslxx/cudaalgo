#include <stdio.h>
#include <stdlib.h>
#include "protoSort.h"

int main()
{
    int i, N, k;	
	N = 8 << 26;
	
	int *arr = (int*) malloc(N*sizeof(int));
	int* workArr = (int*) malloc(N*sizeof(int));	

	for (i=0; i<N; i++)
    {
	    arr[i] = (int) (rand() % (2*N));
	    // printf("%d ", arr[i]);
    }

	mergesort(arr, workArr, N);

	for(k=0; k<N; k++)
    {
	    arr[k]=workArr[k];
	    // printf("%d ", workArr[k]);
    }

    printf("\n\t%lu GB\n", sizeof(int) * N * 2 / 1024 / 1024 / 1024);
    return 0;
}
