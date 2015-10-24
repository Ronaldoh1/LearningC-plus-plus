//
//  StringPractice.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/24/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "StringPractice.hpp"
#include "iostream"

using namespace std;

int main(){

    char name[30];
    cout<<"Enter the name: ";
    cin.getline(name, 30);

    cout<<name<<endl;

    return 0;
}