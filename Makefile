sync_car: sync_car.c sync_car-runner.c sync_car.h
	gcc -Wall -Wextra -pthread -o sync_car sync_car.c sync_car-runner.c

clean:
	rm -f sync_car *.o
	
.PHONY: clean