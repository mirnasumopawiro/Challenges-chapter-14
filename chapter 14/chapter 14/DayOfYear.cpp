//
//  DayOfYear.cpp
//  chapter 14
//
//  Created by Mirna Sumopawiro on 10/31/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "DayOfYear.hpp"

dayOfYear::dayOfYear (int day)
{
    this->day = day;
}
void dayOfYear::printDate()
{
    int position = 0;
    
    cout << "Day " << day;
    
    for (int i = 11; i > 0; i--)
    {
        if (day <= 365)
        {
            position = i - 1;
            totalYear -= totalDay[i];
        }
    }
    
    
    for (int j = 0; j < position; j++)
    {
        int *ptrDate = &day;
        *ptrDate -= totalDay[j];
    }
    
    cout << " is " << monthArray[position] << " " << day << endl;
}
