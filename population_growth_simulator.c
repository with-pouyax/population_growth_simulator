#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int population;
    do
    {
        population = get_int("Enter the population size: \n");
    }
    while (population < 9);

    // TODO: Prompt for end size
    int endPopulation;
    do
    {
        endPopulation = get_int("Enter the end population size: ");
    }
    while (endPopulation < population);

    // TODO: Calculate number of years until we reach threshold
    int yearlyPopulation = population;
    int year = 0;

    for (int i = 0; yearlyPopulation < endPopulation; i++)
    {
        int yearlyBorn = yearlyPopulation / 3;
        int yearlyDeath = yearlyPopulation / 4;
        yearlyPopulation = yearlyPopulation + yearlyBorn - yearlyDeath;
        year++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", year);
}
