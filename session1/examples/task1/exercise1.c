#include <stdio.h>
#include <stdlib.h>

void get_speed_limit(int speed);
void get_driver_speed(int driver_speed);
int calculate_fine(int excess_speed);

int main() {
  int speed_limit, driver_speed, fine = 0;
  char input[20];

  get_speed_limit(speed);
  get_driver_speed(driver_speed);
  calculate_fine(excess_speed);

void get_speed_limit(int speed):
  {
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }

}

void get_driver_speed(int driver_speed):{

  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
  }

}

int calculate_fine(int excess_speed):{

  // Determine if the driver is speeding
  if (driver_speed > speed_limit) {
    int fine = 0
    int excess_speed = driver_speed - speed_limit;

    // Calculate fine based on how much over the limit
    if (excess_speed <= 10) {
      fine = 50;
    } else if (excess_speed <= 20) {
      fine = 100;
    } else {
      fine = 200;
    }
    printf("Fine: $%d\n", fine);
  } else {
    printf("No fine needed.\n");
  }

    return 0;
  }

}