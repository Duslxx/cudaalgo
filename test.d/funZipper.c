#include <stdio.h>
#include <stdlib.h>
#include "protoSort.h"

void zipper(int *a, int Na, int *b, int Nb, int *c)
{
    int i;
    int index = 0;
    int k = 0;

    for(i=0; i<Na; i++)
    {		
    	while (a[i]>b[k] && k<Nb)
        { 
            c[index] = b[k];
            index++;
            k++;
        } 
    	c[index] = a[i];
    	index++;
    }
	while (k<Nb){
        c[index] = b[k];
        index++;
        k++;
    }
}
