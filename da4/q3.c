#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main(void)
{
    // returns the current time in seconds since midnight on January 1, 1970
    time_t now = time(NULL);

    // time_t is really a long value, so we can print it out with %ld
    printf("%ld\n", now);

    // We can use difftime to get the difference between two times; in this case, we sleep for 2 seconds to create a time difference.

    sleep(2);
    time_t seconds_2 = time(NULL);
    printf("%ld\n", seconds_2);
    double diff = difftime(seconds_2, now);
    printf("diff: %f\n", diff);

    // The time will be represented as a beautifully formatted string using ctime.
    char *formatted_time = ctime(&now);
    printf("%s\n", formatted_time);

    // gmtime returns a pointer to a struct tm that has members for each piece of time data that we would want to manipulate. It'll be returned in Greenwich Mean Time.
    struct tm *gm_time = gmtime(&now);

    printf("tm_sec: %d\n", gm_time->tm_sec);
    printf("tm_min: %d\n", gm_time->tm_min);
    printf("tm_hour: %d\n", gm_time->tm_hour);
    printf("tm_mday: %d\n", gm_time->tm_mday);
    printf("tm_mon: %d\n", gm_time->tm_mon);
    printf("tm_year: %d\n", gm_time->tm_year);
    printf("tm_wday: %d\n", gm_time->tm_wday);
    printf("tm_yday: %d\n", gm_time->tm_yday);
    printf("tm_isdst: %d\n", gm_time->tm_isdst);
    printf("\n");

    // Local time returns a struct tm as well, but just for our own time zone.
    struct tm *cur_time = localtime(&now);
    printf("tm_sec: %d\n", cur_time->tm_sec);
    printf("tm_min: %d\n", cur_time->tm_min);
    printf("tm_hour: %d\n", cur_time->tm_hour);
    printf("tm_mday: %d\n", cur_time->tm_mday);
    printf("tm_mon: %d\n", cur_time->tm_mon);
    printf("tm_year: %d\n", cur_time->tm_year);
    printf("tm_wday: %d\n", cur_time->tm_wday);
    printf("tm_yday: %d\n", cur_time->tm_yday);
    printf("tm_isdst: %d\n", cur_time->tm_isdst);

    // Asctime creates a neatly formatted string representation of the time using a struct tm.
    char *formatted_time2 = asctime(cur_time);
    printf("%s\n", formatted_time2);

    // mktime will convert a struct tm time to a time t representation. Here, we increase the number of minutes in cur time by 1 and then convert it, resulting in a difference of 60 seconds when compared to now!
    cur_time->tm_min = cur_time->tm_min + 1;
    time_t new_time = mktime(cur_time);
    printf("now: %ld\n", now);
    printf("new_time: %ld\n", new_time);

    // strftime will format a string representation of a given time based on the specifiers, which can be found here:
    // The function takes a buffer to hold the string, a maximum amount of characters, a string with format specifiers, and a time in the form of a struct tm. It returns the length of the newly produced string (or 0 if the string exceeds the provided maximum length).
    char s[100];
    int strlen = strftime(s, 100, "%l %p", cur_time);
    printf("%s\n", s);
    printf("%d\n", strlen);

    // We can acquire the clock tics before and after some process (stored as clock t type data) and divide by the constant value CLOCKS PER SEC to determine the number of seconds (possibly a fraction of seconds) for some process to occur by calling clock()!
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 999999999; i++)
    {
    }
    end = clock();

    double total = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time: %fs\n", total);

    return 0;
}