# Population growth simulation

**CS50 C exercise** · Estimates years needed to reach a target population using integer annual births of population/3 and deaths of population/4.

## Build and use

```sh
clang population_growth_simulator.c -lcs50 -o population
./population
```

The executable uses the example or prompts shown in the source.

## Implementation note

Start population must be at least 9. This is a fixed-rate educational model, not a demographic forecast.

Source: [`population_growth_simulator.c`](population_growth_simulator.c). [License](LICENSE).
