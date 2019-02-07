//
//  Timer.hpp
//  DataStructure
//
//  Created by Jackman, Cade on 2/5/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>
#include <assert.h>
#include <iostream>
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
    void getTimeInMicroseconds();
};


#endif /* Timer_hpp */
