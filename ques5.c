#include <stdio.h>
#include <time.h>

int main() {
    // Get the current time
    time_t t = time(NULL);

    // Convert the time to a local time
    struct tm* tm = localtime(&t);

    // Print the date in the format "YYYY-MM-DD"
    printf("Current date: %04d-%02d-%02d\n", tm->tm_year + 1900, tm->tm_mon + 1, tm->tm_mday);

    return 0;
}
