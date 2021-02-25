/* Matthew Connelly
   23 Jan 2021
   CS210 / Professor Bill Chan
   Project One
*/

#include<iostream>
#include "Clock.h"
#include "TwelveHourClock.h"    // inclusion of header files containing all classes and methods called upon in main
#include "TwentyFourHourClock.h"

using namespace std;

void displayTime(TwelveHourClock& clock12, TwentyFourHourClock& clock24) { // & creates ref to 12 and 24 hour clocks to check parameters
    cout << "12 Hour Clock    24 Hour Clock \n" << " ";

    if(clock12.hour < 9) cout << "0"; cout << clock12.hour + 1 << ":"; // 
    if(clock12.minute < 10) cout << "0"; cout << clock12.minute << ":";
    if(clock12.second < 10) cout << "0"; cout << clock12.second; cout << " " << clock12.ampm; // call to ampm variable to display correct am/pm format
    cout << " ";

    cout << "        ";
    if(clock24.hour < 10) cout << "0"; cout << clock24.hour + 1 << ":";
    if(clock24.minute < 10) cout << "0"; cout << clock24.minute << ":";
    if(clock24.second < 10) cout << "0"; cout << clock24.second << "\n";
    
}

void displayMenu() { // Menu to display options for user 
    cout << "1 - Add One Hour\n";
    cout << "2 - Add One Minute\n";
    cout << "3 - Add One Second\n";
    cout << "4 - Exit The Program\n";
}

int main() { // Main method of program
    // Clock creation

    TwelveHourClock clock12(00, 00, 00); // Starting display of 12 Hour Clock

    TwentyFourHourClock clock24(00, 00, 00); // Starting display of 24 Hour Clock

    displayTime(clock12, clock24); // Time display method with respective clock parameters

    while(true) { // While loop allows for the program to keep asking 
                  // user for input until they decide to exit
                  // I had to create this loop because without it, only one
                  // case returns and the program ends
    displayMenu();

    int userInput;

    cin >> userInput;

    if(cin.fail() == true) {
        cout << "Invalid entry, please try again" << endl;
        cin.clear(); // cin.clear and ignore clears error flag on cin
        cin.ignore(10000, '\n'); // cin.clear and ignore cleared bug where if user decided to enter two instead of 2 for example, the displayMenu would return infinitely

        displayTime(clock12,clock24);

        continue;} // continue allows for the if statement to execute while also jumping to the beginning of the method to allow for user input again  

    // Create menu option functionality

    switch (userInput) {

        case 1:

            clock12.addOneHour();
            clock24.addOneHour();

            displayTime(clock12, clock24);

            break; 
    
        case 2:

            clock12.addOneMinute();
            clock24.addOneMinute();

            displayTime(clock12, clock24);
            
            break;

        case 3:

            clock12.addOneSecond();
            clock24.addOneSecond();

            displayTime(clock12, clock24);

            break;
        
        case 4:

            cout << "Thank you for using the program, now exiting.";

            exit(1);

            break;

        default:

        cout << "Error: Invalid choice entered, please try again.\n";
    
        break;
    }}}




