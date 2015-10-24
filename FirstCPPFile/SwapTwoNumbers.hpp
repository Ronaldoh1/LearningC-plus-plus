//
//  SwapTwoNumbers.hpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/21/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#ifndef SwapTwoNumbers_hpp
#define SwapTwoNumbers_hpp

#include <stdio.h>
#include <iostream>


int main(){
    using namespace std;

    int a, b, c;
    a = 23;
    b = 10;

    cout<<"The values before swapping "<<a<<b<<endl;

    //let's swap the values.

    c = a;
    a = b;
    b = c;

    cout<<"The values after swapping are :"<<a<<b<<endl;

    //we can also do this with only two numbers;
    int x = 10;
    int y = 20;

    x = x + y;
    y = x - y;
    x = x - y;
    cout<<"The values after swapping are: " <<x<<y;

    

    return 0;
}
#endif /* SwapTwoNumbers_hpp */
