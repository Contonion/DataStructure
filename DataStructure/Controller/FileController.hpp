//
//  FileController.hpp
//  DataStructure
//
//  Created by Jackman, Cade on 2/13/19.
//  Copyright © 2019 CadeJackman. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
//#include "../Model/Linear/Array.hpp"
#include "../Model/Linear/LinkedList.hpp"
//#include "../Model/NonLinear/BinarySearchTree.hpp"

#include "../Resources/CrimeData.hpp"
#include "../Resources/Music.hpp"
#include <stdio.h>
using namespace std;
class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVector(string filename);
    static vector<Music> musicDataToVector(string filename);
    static LinkedList<CrimeData> readDataToList(string filename);
    static LinkedList<Music> musicDataToList(string filename);
};
vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\r');
            
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return crimeVector;
    
    
}
vector<Music> FileController :: musicDataToVector(string filename)
{
    vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    if (dataFile.is_open())
    {
        while (!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\n');
            
            if (rowCount != 0)
            {
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicVector;
    
    
}
#endif /* FileController_hpp */
