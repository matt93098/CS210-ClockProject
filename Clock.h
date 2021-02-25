/* Matthew Connelly
   23 Jan 2021
   CS210 / Professor Bill Chan
   Project One
*/

#ifndef CLOCK_H
#define CLOCK_H

class Clock { // Parent class to be used as source of inheritance for 12 and 24 hour clock classes
    public:

    int hour;
    int minute;
    int second;

    void addOneHour(); 
    void addOneMinute(); // Program will return these methods for use within both 12 hour and 24 hour clock
    void addOneSecond();
    
};
#endif