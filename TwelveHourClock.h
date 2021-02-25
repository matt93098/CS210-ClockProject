/* Matthew Connelly
   23 Jan 2021
   CS210 / Professor Bill Chan
   Project One
*/

#include <string>
using namespace std;

#ifndef CLOCK12_H
#define CLOCK12_H

#include "Clock.h"

class TwelveHourClock: public Clock { // TwelveHourClock class to inherit Clock class

public:
string ampm; // declaration of ampm variable within 12 hour clock class

TwelveHourClock(int h, int m, int s) { // Method to manage the 12 hour Clock

    hour = h;
    minute = m;
    second = s;
    ampm = "AM";
}

void addOneHour() {
    if (hour == 11) { // If clock displays hour value of 11, method will return 0 since it is a 12 hour clock
        hour = 0;
    }else {
        if (hour == 10 && ampm == "AM") {
            ampm = "PM";
        }else if (hour == 10) { // Nested if statement to check for and execute correct am/pm format
            ampm = "AM";
        }
        hour += 1;
    }    
}

void addOneMinute() {
    if (minute == 59) { // Intuitively, when minute is 59 upon method call, minute value turns into 0
        minute = 0;     // and addOneHour method is called to add an hour to the clock
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