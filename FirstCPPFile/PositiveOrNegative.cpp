//
//  PositiveOrNegative.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/23/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "PositiveOrNegative.hpp"
#include <iostream>

using namespace std;

int main(){

    int number;

    cout<<"Enter a number";
    cin>>number;

    if (number >= 0) {
        cout<<"Number you entered is positive";

    }else{
        cout<<"Number Entred is Negative";
    }

    return 0;
}