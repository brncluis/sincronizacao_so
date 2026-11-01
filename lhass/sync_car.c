#include "sync_car.h"

void station_init(struct station *station){

    station->assentos_livres = 0;
    station->em_transito = 0;
    station->esperando = 0;

    pthread_mutex_init(&station->mutex, NULL);
    pthread_cond_init(&station->cond_chegou_carro, NULL);     
    pthread_cond_init(&station->cond_todos_sentados, NULL);   

}

