/* Matthew Connelly
   23 Jan 2021
   CS210 / Professor Bill Chan
   Project One
*/

#ifndef CLOCK24_H
#define CLOCK24_H
#include "Clock.h"
#include "TwelveHourClock.h"

class TwentyFourHourClock : public Clock { // TwentyFourHourClock class to inherit Clock class

public:

TwentyFourHourClock(int h, int m, int s) { // Method to manage 24 hour clock
    hour = h;
    minute = m;
    second = s;
}

void addOneHour() {
    if (hour == 23) {
        hour = 0;
    }else {
        hour += 1;
    }
}

void addOneMinute() {
    if (minute == 59) {
        minute = 0;
        addOneHour();
    }else {
        minute += 1;
    }
}

void addOneSecond() {
    if (second == 59) {
        second = 0;
        addOneMinute();
    }else {
        second += 1;
    }
}
};
#endif