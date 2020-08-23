#include <stdio.h>

int main()
{
    int i, x = 0, y = 0, z = 0, date = 0;
    char *day[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    scanf("%d %d %d", &x, &y, &z);
    int d[39] = {0, 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 0, 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    for (i = z % 4 * 13; i <= z % 4 * 13 + y; i++)
    {
        date += d[i];
    }
    int e[4] = {366, 365, 365, 365};
    for (i = 1; i < x; i++)
    {
        date += e[i % 4];
    }
    date += z;
    date %= 7;
    printf("%s", day[date]);
}