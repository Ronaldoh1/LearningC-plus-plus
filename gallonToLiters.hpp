//
//  gallonToLiters.hpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/21/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#ifndef gallonToLiters_hpp
#define gallonToLiters_hpp

#include <stdio.h>
#include <iostream>

int main(){

    using namespace std;
    float gallons, liters;

    cout<<"Enter the no of gallons: ";

    cin>>gallons;

    liters = gallons * 3.7854;

    cout<<"liters is equal to: "<<liters<<endl;

    int a, b, c;
    using namespace std;

    cout<<"Enter twot numbers : ";
    cin>>a>>b;
    c = a + b;
    cout<<"Answer = "<<c;

}



#endif /* gallonToLiters_hpp */
