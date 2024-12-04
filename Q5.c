#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#include "Q.h"

struct timespec start_time;
struct timespec end_time;

void start_timer() {
    clock_gettime(CLOCK_MONOTONIC, &start_time);
}

void end_timer() {
    clock_gettime(CLOCK_MONOTONIC, &end_time);
}

int get_time() {
    int delta = ((double)(end_time.tv_sec - start_time.tv_sec)*1e3 + (double)(end_time.tv_nsec - start_time.tv_nsec) / 1e6);
    write_message(TIME_MSG, delta);
    return delta;

}