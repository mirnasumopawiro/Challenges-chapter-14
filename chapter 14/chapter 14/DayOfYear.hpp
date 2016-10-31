//
//  DayOfYear.hpp
//  chapter 14
//
//  Created by Mirna Sumopawiro on 10/31/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef DayOfYear_hpp
#define DayOfYear_hpp

#include <iostream>
using namespace std;

class dayOfYear
{
private:
    int day;
    string monthArray[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int totalDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
public:
    dayOfYear (int day);
    void printDate();
};

#endif /* DayOfYear_hpp */
