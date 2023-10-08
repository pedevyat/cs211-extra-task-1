#pragma once

// Return the number of seconds later that a time in seconds time_2 is than a time in seconds time_1.
double seconds_difference(double, double);

// Return the number of hours later that a time in seconds time_2 is than a time in seconds time_1.
double hours_difference(double, double);

// Return the total number of hours in the specified number of hours, minutes, and seconds.
double to_float_hours(int, int, int);

// hours is a number of hours since midnight. Return the hour as seen on a 24 - hour clock.
double to_24_hour_clock(double);

// They are used to determine the hours part
int get_hours(int);

// They are used to determine the minutes part
int get_minutes(int);

// They are used to determine the seconds part
int get_seconds(int);

// return time at utc+0, where utc_offset is the number of hours away from utc + 0
double time_to_utc(int, double);


