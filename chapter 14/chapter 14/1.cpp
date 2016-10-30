//
//  main.cpp
//  chapter 14
//
//  Created by Mirna Sumopawiro on 10/30/16.
//  Copyright © 2016 Mirna Sumopawiro. All rights reserved.
//

#include <iostream>
#include "Numbers.hpp"
using namespace std;

int main() {
    
    int num;
    
    cout << "Please enter a positive number less than 10.000\n";
    cin >> num;
    
    Numbers toPrint (num);
    
    toPrint.printDescription();
    return 0;
}
