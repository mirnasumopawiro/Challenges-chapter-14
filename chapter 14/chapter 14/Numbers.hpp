//
//  Numbers.hpp
//  chapter 14
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#ifndef Numbers_hpp
#define Numbers_hpp

#include <iostream>
using namespace std;

class Numbers
{
private:
    int number;
    string lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string hundred = "hundred";
    string thousand = "thousand";
public:
    Numbers (int number);
    void printDescription();
    
};


#endif /* Numbers_hpp */
