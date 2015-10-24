//
//  Functions.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/24/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "Functions.hpp"
#include <iostream>

using namespace std;


int add(int num1, int num2);
int sub(int num1, int num2);

int main(){

    int a, b, c, m;
    a  = 10;
    b = 20;
    c = add(a, b);
    m = sub(a, b);
    cout<<c<<endl;
    cout<<m;

    return 0;
}

int add(int num1, int num2){

    return num1 + num2;
}
int sub(int num1, int num2){

    return num2 - num1;
}