//
//  2.cpp
//  chapter 14
//
//  Created by Mirna Sumopawiro on 10/31/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include "DayOfYear.hpp"
using namespace std;

int main()
{
    int choice;
    cout << "Enter a number from 0-365: ";
    cin >> choice;
    
    dayOfYear day(choice);
    
    day.printDate();
    
    return 0;
}
