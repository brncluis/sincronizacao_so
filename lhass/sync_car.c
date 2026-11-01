#include "sync_car.h"

void station_init(struct station *station){

    station->assentos_livres = 0;
    station->em_transito = 0;
    station->esperando = 0;

    pthread_mutex_init(&station->mutex, NULL);
    pthread_cond_init(&station->cond_chegou_carro, NULL);     
    pthread_cond_init(&station->cond_todos_sentados, NULL);   

}

void station_on_board(struct station *station) {

    pthread_mutex_lock(&station->mutex);

    station->em_transito--;

    if (station->em_transito == 0) {
        pthread_cond_signal(&station->cond_todos_sentados);
    }

    pthread_mutex_unlock(&station->mutex);
    
}

void station_wait_for_car(struct station *station) {

    pthread_mutex_lock(&station->mutex);

    station->esperando++;

    while (station->assentos_livres == 0) {
        pthread_cond_wait(&station->cond_chegou_carro, &station->mutex);
    }

    station->esperando--;
    station->assentos_livres--;
    station->em_transito++;

    pthread_mutex_unlock(&station->mutex);

}
