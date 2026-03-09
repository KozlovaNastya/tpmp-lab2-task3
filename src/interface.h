#ifndef INTERFACE_H
#define INTERFACE_H

typedef struct {
    int year;
    int month;
    int day;
} DATE;

typedef struct {
    char name[50];
    DATE dat;
    int ses[3];
    float avg;
} GROUP;

void sort_by_performance(GROUP *groups, int n);
void filter_by_age(GROUP *groups, int n);
void input_group(GROUP *groups, int n);
void print_group(GROUP *groups, int n);

#endif
