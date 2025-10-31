#include <stdio.h>

int main() {
    double population = 100000;  // initial population
    double growthRate = 10;      // annual growth rate in percent
    int year;

    printf("Year\tPopulation\n");
    printf("---------------------\n");

    // Loop for 10 years
    for (year = 1; year <= 10; year++) {
        // Calculate population at the end of the year
        population = population + (population * growthRate / 100);
        printf("%d\t%.0f\n", year, population);
    }

    return 0;
}

