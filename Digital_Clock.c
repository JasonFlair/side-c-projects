#include <stdio.h>
#include <windows.h>

int main(void)
{
    int h, m, s;
    int d = 1000; /* delay time by 1,000 miliseconds */

    printf("Set Time h:m:s: \n");
    scanf("%d%d%d", &h, &m, &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR\n");
    }
    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("Time: %02d:%02d:%02d", h,m,s);
        Sleep(d); /* slow down count by 1000 milisecs */
        system("cls");
    }
}