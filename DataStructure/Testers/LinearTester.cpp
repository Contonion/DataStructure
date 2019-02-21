//
//  LinearTester.cpp
//  DataStructure
//
//  Created by Jackman, Cade on 2/13/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#include "LinearTester.hpp"

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/cjac5770/Documents/C++Workspace/DataStructure/DataStructure/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/cjac5770/Documents/C++Workspace/DataStructure/DataStructure/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crime TimerSTL.getTimeInMicroSeconds() << " microseconds" << endl;
    
    musicSTL.startTimer();
    vector<Music> tinez = FileController :: musicDataToVector("/Users/cjac5770/Documents/C++Workspace/DataStructure/DataStructure/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController : musicDataToList("/Users/cjac5770/Documents/C++Workspace/DataStructure/DataStructure/Resources/crime.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
}
