#include <iostream>
#include <stdio.h>
#include <omp.h>
// using namespace std;

int main(){

    double start=omp_get_wtime();
    int vector[] = {0,1,2,3,4,5,6,7,8,9,10};
    int mayor;
    int menor;
    int i=0;
    mayor=vector[0];
    menor=vector[0];
    omp_set_num_threads(10);
    #pragma omp parallel
    {
        int id=omp_get_thread_num();
        if(vector[i]<menor){
                menor=vector[i];
        }
        if(vector[i]>mayor){
                mayor=vector[i];
        }
        i++;
    }

    double end=omp_get_wtime();
    printf("\nTiempo de ejecución: %f \n", end - start);
    
}
