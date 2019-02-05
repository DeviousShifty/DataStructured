//
//  Timer.hpp
//  DataStructured
//
//  Created by Mumford, Ethan on 2/5/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <iostream>
#include <assert.h>
#include <time.h>

class Timer
{
private:
    clock_t executionTime;
    
public:
    Timer();
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayInformation();
    long getTimeInMicroseconds();

};
#endif /* Timer_hpp */
