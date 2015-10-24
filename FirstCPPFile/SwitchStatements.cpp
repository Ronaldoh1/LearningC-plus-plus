//
//  SwitchStatements.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/23/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "SwitchStatements.hpp"

#include <iostream>

using namespace std;

int main(){


    int a;
    cout<<"Enter 1 or 2";

    cin>>a;

    switch (a) {
        case 1:
            cout<<"You Entered 1";
            break;
        case 2:
            cout<<"You Entered 2";
            break;
        default:
            break;
    }
}