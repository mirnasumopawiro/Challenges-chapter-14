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
    for (int i = 0; i < 12; i++)
        if (day <= 365)
        {
            day -= totalDay[i];
            position = i++;
        }
}
