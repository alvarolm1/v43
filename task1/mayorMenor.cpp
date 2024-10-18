#include <iostream>
#include <stdio.h>
#include <omp.h>
using namespace std;

int vector[] = {1,2,3,4,5,6,7,8,9,10};
int mayor;
int menor;

void definir_mayor(){
    for (int i=0;i<10;++i){
        if(i==0){
            mayor=vector[i];
        }
        else{
            if(vector[i]>mayor){
                mayor=vector[i];
            }
        }        
    }
}

void definir_menor(){
        for (int i=0;i<10;++i){
        if(i==0){
            menor=vector[i];
        }
        else{
            if(vector[i]<menor){
                menor=vector[i];
            }
        }        
    }
}
int main(){
    double start=omp_get_wtime();
    definir_mayor();
    definir_menor();
    cout << "El número mayor es " << mayor;
    cout<< "\n";
    cout << "\nEl número menor es " << menor;
    cout<< "\n";
    double end=omp_get_wtime();
    printf("\nEl tiempo del programa es %f \n",end-start);
    cout<< "\n";

    
}
