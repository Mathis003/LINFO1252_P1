#ifndef READER_WRITER_H
#define READER_WRITER_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthread.h>

#include "../../mutex/mutex.h"

#define NB_READS 2560
#define NB_WRITES 640

pthread_mutex_t writer_mutex, reader_mutex, general_mutex;
sem_t db_writer, db_reader;

int readsDone, writesDone = 0;
int readersCount, writersCount = 0;

void process(void);

void read_database();

void write_database();

void *reader(void *unused);

void *writer(void *unused);

int destroy_sem();

int destroy_all();

int main(int argc, char *argv[]);

#endif // READER_WRITER_H