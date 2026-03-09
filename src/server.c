#include "interface.h"
#include <string.h>

void sort_by_performance(GROUP *groups, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (groups[j].avg > groups[j + 1].avg) {
                GROUP temp = groups[j];
                groups[j] = groups[j + 1];
                groups[j + 1] = temp;
            }
        }
    }
}

void filter_by_age(GROUP *groups, int n) {
    int found = 0;

    for (int i = 0; i < n; i++) {
        int is_young = 0;
        if (groups[i].dat.year > 1990) is_young = 1;
        else if (groups[i].dat.year == 1990) {
            if (groups[i].dat.month > 12) is_young = 1;
            else if (groups[i].dat.month == 12 && groups[i].dat.day >= 1) is_young = 1;
        }

        if (is_young) {
            if (!found) { found = 1; }
        }
    }
}
