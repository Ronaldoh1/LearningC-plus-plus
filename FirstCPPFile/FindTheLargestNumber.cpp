//
//  FindTheLargestNumber.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/23/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "FindTheLargestNumber.hpp"
#include <iostream>

using namespace std;
int main(){

    int a, b, c;

    cin>>a>>b>>c;

    if (a>b && b>c) {
        cout<<"A is the largest number";
    }else if (b>a && b >c){
        cout<<"B is the largest number";
    }else if(c>b && c > a){
        cout<<"C is the largest number";
    }
    
}