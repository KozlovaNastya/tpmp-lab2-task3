#include <stdio.h>
#include "interface.h"

void input_group(GROUP *groups, int n) {
    for (int i = 0; i < n; i++) {
        printf("--- Student %d ---\n", i + 1);
        printf("Name: ");
        scanf("%s", groups[i].name);
        printf("Birth Date (YYYY MM DD): ");
        scanf("%d %d %d", &groups[i].dat.year, &groups[i].dat.month, &groups[i].dat.day);

        float sum = 0;
        printf("Enter 3 session marks: ");
        for (int j = 0; j < 3; j++) {
            scanf("%d", &groups[i].ses[j]);
            sum += groups[i].ses[j];
        }
        groups[i].avg = sum / 3.0f;
    }
}

void print_group(GROUP *groups, int n) {
    printf("\n%-20s %-15s %-10s\n", "Name", "Birth Date", "Avg Mark");
    for (int i = 0; i < n; i++) {
        printf("%-20s %04d-%02d-%02d    %-10.2f\n",
               groups[i].name,
               groups[i].dat.year, groups[i].dat.month, groups[i].dat.day,
               groups[i].avg);
    }
}
