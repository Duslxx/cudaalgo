#include "stdio.h"
#include "stdlib.h"
#include "sort_dustin.h"

void mergesort(int *startArr, int *workArr, int Nt) 
{
    int N = Nt;
    int off = 1;
    int index;
    int i, k;

    while (N>1)
    {	
        N = N/2;
        index = 0; 
        for (i=0; i<N; i++)
        {
            zipper(
                startArr + index
                ,off
                ,startArr + index+off
                ,off
                ,workArr + index
            );
            index = index + 2 * off;
        }
        for (k=0; k<Nt; k++)
        {
            startArr[k] = workArr[k];
        }
        off = 2 * off;
	}
}
