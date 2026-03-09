#include <stdio.h>
#include "interface.h"

int main() {
    GROUP gr5[10];
    int n = 10; // По заданию 10 структур

    printf("Input data for 10 students:\n");
    input_group(gr5, n);

    printf("\n--- Sorted by Performance ---\n");
    sort_by_performance(gr5, n);
    print_group(gr5, n);

    printf("\n--- Students under 20 (as of 01.12.2010) ---\n");
    filter_by_age(gr5, n);

    return 0;
}
