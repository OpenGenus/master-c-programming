#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <termios.h>
#include <sys/select.h>




void timer(int seconds) {
    int i;
    for (i = 0; i < seconds; i++) {
        printf("\rTime remaining: %d seconds [", seconds - i);
        int j;
        for (j = 0; j < (i * 20 / seconds); j++) {
            printf("-");
        }
        printf(">");
        for (j = (i * 20 / seconds); j < 20; j++) {
            printf(" ");
        }
        printf("] %d%%", (i * 100) / seconds);
        fflush(stdout);
        sleep(1);
    }
}


int kbhit() {
    struct timeval tv = { 0L, 0L };
    fd_set fds;
    FD_ZERO(&fds);
    FD_SET(0, &fds);
    return select(1, &fds, NULL, NULL, &tv);
}

void stopwatch() {
    int i = 0;
    char choice;
    printf("Stopwatch Instructions:\n 'p' to pause the stopwatch,\n 'c' to continue, \n 'r' to reset the stopwatch,\n 'q' to quit the stopwatch\n");
    while (1) {
        printf("\rTime elapsed: %d seconds", i);
        fflush(stdout);
        sleep(1);
        i++;
        if (kbhit()) {
            choice = getchar();
            if (choice == 'p') {
                printf("\nStopwatch paused. Press 'c' to continue, 'r' to reset or 'q' to quit\n");
                while (1) {
                    choice = getchar();
                    if (choice == 'c') {
                        break;
                    } else if (choice == 'r') {
                        i = 0;
                        break;
                    } else if (choice == 'q') {
                        return;
                    }
                }
            }
        }
    }
}
  
    
int main() {
    char choice;
    printf("Welcome to the Timer and Stopwatch application!\n");
    while (1) {
        printf("\nPlease choose an option:\n");
        printf("1. Timer\n2. Stopwatch\n3. Quit\n");
        scanf(" %c", &choice);
        switch (choice) {
            case '1': {
                int seconds;
                printf("Enter the number of seconds for the timer: ");
                scanf("%d", &seconds);
                timer(seconds);
                break;
            }
            case '2': {
                stopwatch();
                break;
            }
            case '3':
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
}