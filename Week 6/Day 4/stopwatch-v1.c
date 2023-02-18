#include <stdio.h>
#include <time.h>

void timer() {
    int minutes;
    printf("Enter the number of minutes for the timer: ");
    scanf("%d", &minutes);
    for (int i = minutes; i >= 0; i--) {
        for (int j = 59; j >= 0; j--) {
            printf("Time remaining: %d:%d\n", i, j);
            sleep(1); // sleep for 1 second
        }
    }
    printf("Time's up!\n");
}

void stopwatch() {
    int seconds = 0;
    printf("Stopwatch started. Press 'q' to stop.\n");
    while (getchar() != 'q') {
        printf("Time elapsed: %d:%d\n", seconds / 60, seconds % 60);
        sleep(1); // sleep for 1 second
        seconds++;
    }
    printf("Stopwatch stopped.\n");
}

int main() {
    int choice;
    printf("1. Timer\n2. Stopwatch\nEnter your choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        timer();
    } else if (choice == 2) {
        stopwatch();
    } else {
        printf("Invalid choice.\n");
    }
    return 0;
}