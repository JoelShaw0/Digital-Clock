#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    int hour, minute, second;
    int delay = 1000;
    printf("Set time : \n");
    scanf("%d%d%d", &hour, &minute, &second);
    if (hour > 12 || minute > 60 || second > 60)
    {
        printf("Invalid time entered. Please enter a valid time and try again");
        _exit(0);
    }
    while (1)
    {
        second++;
        if (second > 59)
        {
            minute++;
            second = 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }
        printf("\n The time Currently is :");
        printf("\n %02d:%02d:%02d", hour, minute, second);
        Sleep(delay);

        system("cls");
    }
}