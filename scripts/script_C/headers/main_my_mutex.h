#ifndef MAIN_MY_MUTEX_H
#define MAIN_MY_MUTEX_H

#include <stdlib.h>
#include <pthread.h>

#include "user_defined_sync.h"

my_mutex_t *my_mutex;

int NBER_ITER;

void process(void);

void *thread_function(void *arg);

int main(int argc, char *argv[]);

#endif // MAIN_MY_MUTEX_H