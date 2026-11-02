# Implementação 4: Sincronização do Metrô

## Arquivos

- `sync_car.c`: implementação da `struct station` e das funções `station_init`, `station_load_car`, `station_wait_for_car` e `station_on_board`.
- `sync_car.h`: declaração da `struct station` e dos protótipos das funções.
- `sync_car-runner.c`: programa de teste fornecido pelo professor (sem alterações).
- `Makefile`: compilação e limpeza.
- `evidencias.log`: registro do terminal com a compilação e as execuções de teste.

## Compilar

```bash
make
```

Gera o executável `sync_car`. 

Para remover os arquivos compilados:

```bash
make clean
```

## Executar e testar

```bash
./sync_car
```

O teste termina com `Looks good!` se tudo tiver correto.

## Sistema operacional

Ubuntu 26.04.1 LTS (Linux).