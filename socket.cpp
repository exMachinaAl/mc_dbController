#include <iostream>
#include "socket.h"

int connectId () {

    srand(time(NULL));
    return (rand() % 100) + 1;
}