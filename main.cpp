#include <stdio.h>

const int N=6;
int i,j,jMin;
int A[]={1,4,-2,3,0,9};

void predefined(){
printf("The array elements are:\n");
for(i=0;i<N;i++){
    printf("Array[%d]=%d\n",i,A[i]);
}

    for (i = 0; i < N-1; i++)
{
    int jMin = i;
    for (j = i+1; j < N; j++)
    {
        if (A[j] < A[jMin])
        {
            jMin = j;
        }
    }
    if (jMin != i)
   {

       swap(A[i], A[jMin]);
    }
}
