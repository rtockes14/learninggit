#include <stdio.h>

int hour = 3;
int minutes = 00;

int last_hour = 22;
int last_minutes = 32;

int main(void)
{
    int hourDifference = (hour - last_hour) * 60;     
    int minutesDifference = minutes - last_minutes;

    int timeDifference = hourDifference + minutesDifference;

    if(timeDifference < 0)
    {
        timeDifference += 1440;
    }

    int remainderHour = timeDifference / 60;
    int remainderMinutes = timeDifference % 60;



  printf("%d %d:%d", timeDifference, remainderHour, remainderMinutes);

  return  0;
}