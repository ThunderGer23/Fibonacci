// Created by ThunderGer on 21/10/20.
// for Applicaciones Distribuidas
// Henrik Niels, Serie Fibonacci

//Librerias Prronas UwUr
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void  Fibo(void *arg);

int main(int argc, char *argv[]){

    pthread_t H;
    int Err;
    int Num;
    if (argc != 2){
        printf("Debe incluir el numero hasta donde\ndebera llegar la serie");
        exit(-1);
    }else{
        Num = atoi(argv[1]);
    }

    printf("Se generará la serie de Fibonacci hasta\n el %i elemento",Num);
    Err = pthread_create($H, NULL, Fibo, &Num);
    if (Err){
        printf("Error al crear el hilo");
    }
}

void Fibo(void *arg){
    int Act, Pen = 0, Ult = 0;
    int Num = *(int *)arg;

    for (int i = 0; i < Num; ++i) {
        printf("%d ", Ult);
        Act = Pen+Ult;
        Pen = Ult;
        Ult = Act;
    }
}