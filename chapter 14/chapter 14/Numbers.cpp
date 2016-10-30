//
//  Numbers.cpp
//  chapter 14
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include "Numbers.hpp"

Numbers::Numbers (int number)
{
    if (number >= 0 && number < 10000)
    {
        this->number = number;
    }
    else
    {
        cout << "Invalid number";
        exit(0);
    }
}

void Numbers::printDescription()
{
    if (number < 20) //less than 20
    {
        cout << lessThan20[number];
    }
    else if (number >= 20 && number < 100) //less than 100
    {
        int a = (number / 10) - 2; // tens
        int b = (number % 10); // ones
        
        cout << tens[a] << " " << lessThan20[b];
    }
    else if (number >= 100 && number < 1000) //less than 1000
    {
        if ((number % 100) > 19) //hundreds number with tens >= 20
        {
            int a = (number / 100); //hundreds
            int b = ((number % 100) / 10) - 2; //tens
            int c = ((number % 100) % 10); //ones
            
            cout << a << " " << hundred << " " << tens[b] << " " << lessThan20[c];
        }
        else
        {
            int a = (number / 100); //hundreds
            int b = (number % 100); //ones
            
            cout << a << " " << hundred << " " << lessThan20[b];
        }
    }
    else if (number >= 1000 && number < 10000) // less than 10.000
    {
        if ((number % 1000) > 100) //number > 1100
        {
            if (((number%1000) % 100) <= 20) // last two digits > 20
            {
                int a = (number / 1000); //thousands
                int b = ((number % 1000) / 100); //hundreds
                int c = (((number % 1000) % 100) / 10) - 2; //tens
                int d = (((number % 1000) % 100) % 10); //ones
                
                cout << lessThan20[a] << " " << thousand << " " << lessThan20[b] << " " << hundred << " " << tens[c] << " " << lessThan20[d];
            }
            else if (((number%1000) % 100) > 20)//last two digits is 00
            {
                int a = (number / 1000); //thousands
                int b = ((number % 1000) / 100); //hundreds
                int c = (((number % 1000) % 100) / 10) - 2; //tens
                
                cout << lessThan20[a] << " " << thousand << " " << lessThan20[b] << " " << hundred << " " << tens[c] << endl;
            }
        }
    }
}







































