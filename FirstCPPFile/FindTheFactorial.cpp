//
//  FindTheFactorial.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/23/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "FindTheFactorial.hpp"
#include <iostream>

using namespace std;

int main(){

//    int number, factorial = 1;
//    cout<<"Please enter any number: ";
//
//    cin>>number;
//
//
//    while (number > 0) {
//        factorial = factorial * number;
//        number --;
//    }
//
//    cout<<"The Factorial is "<<factorial;
//
//    int i = 1;
//    while (i<100) {
//        cout<<i<<endl;
//        i++;
//        if (i == 51) {
//            break;
//        }
//    }

    int i = 0;
    while (i<=9) {
        i++;

        if (i > 3 && i <9) {
            continue;
        }
        cout<<i<<endl;


    }
    
    return  0;
}