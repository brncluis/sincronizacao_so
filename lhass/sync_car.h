#ifndef SYNC_CAR_H
#define SYNC_CAR_H

#include <pthread.h>

struct station {
    pthread_mutex_t mutex;                 
    pthread_cond_t  cond_chegou_carro;     
    pthread_cond_t  cond_todos_sentados;   
    int esperando;                         
    int assentos_livres;                   
    int em_transito;                       
};

void station_init(struct station *station);
void station_load_car(struct station *station, int count);
void station_wait_for_car(struct station *station);
void station_on_board(struct station *station);

#endif