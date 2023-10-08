#include "extra-task-1.h"
#include <assert.h>
#include <cmath>

double seconds_difference(double time_1, double time_2)
{
    assert((time_1 >= 0) && (time_2 >= 0));
    return time_2 - time_1;
}
double hours_difference(double time_1, double time_2)
{
    assert((time_1 >= 0) && (time_2 >= 0));
    return seconds_difference(time_1, time_2) / 3600;
}
double to_float_hours(int hours, int minutes, int seconds)
{
    assert((0 <= minutes < 60) & (0 <= seconds < 60));
    return (double)hours + (double)(minutes / 60.0) + (double)(seconds / 3600.0); 
}
double to_24_hour_clock(double hours)
{
    assert(hours >= 0);
    return (int)hours % 24 + ((hours - trunc(hours)));
}
int get_hours(int seconds)
{
    assert(seconds >= 0);
    return seconds / 3600;
}
int get_minutes(int seconds)
{
    assert(seconds >= 0);
    int h = get_hours(seconds);
    int remaining_time = seconds - 3600 * h;
    return remaining_time / 60;
}
int get_seconds(int seconds)
{
    assert(seconds >= 0);
    return seconds % 60;
}
double time_to_utc(int utc_offset, double time)
{
    assert((-12 <= utc_offset <= 12) && (0.0 <= time <= 24.0));
    if (time - utc_offset < 0)
        return 24 - abs(time - utc_offset % 24) + time - trunc(time);
    return (int)(time - utc_offset) % 24 + time - trunc(time);
}
double time_from_utc(int utc_offset, double time)
{
    assert((-12 <= utc_offset <= 12) && (0.0 <= time <= 24.0));
    if (time + utc_offset < 0)
        return 24 - abs(time + utc_offset % 24) + time - trunc(time);
    return (int)(time + utc_offset) % 24 + time - trunc(time);
}

