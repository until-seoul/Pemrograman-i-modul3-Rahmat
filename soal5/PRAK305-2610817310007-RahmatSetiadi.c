#include <stdio.h>

int main()
{
    int seconds_total;
    int days, hours, minutes, seconds;
    int remaining;

    scanf("%d", &seconds_total);

    days = seconds_total / 86400;
    remaining = seconds_total % 86400;

    hours = remaining / 3600;
    remaining = remaining % 3600;

    minutes = remaining / 60;
    seconds = remaining % 60;

    if (days > 0)
    {
        printf("%d hari %02d:%02d:%02d\n", days, hours, minutes, seconds);
    }
    else
    {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }
    return 0;
}
