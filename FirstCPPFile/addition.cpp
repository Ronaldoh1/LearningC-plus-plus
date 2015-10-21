//
//  addition.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/21/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "addition.hpp"
#include <iostream>

int main(){
    int a, b, c;
    using namespace std;

     cout<<"Enter twot numbers : ";
    cin>>a>>b;
    c = a + b;
    cout<<"Answer = "<<c;

    return 0;
}