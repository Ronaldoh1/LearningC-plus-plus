//
//  TwoDimensionalArrays.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/24/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "TwoDimensionalArrays.hpp"
#include <iostream>

using namespace std;

int main(){

    int a[2][2] = {{1,2}, {3,4}};


    for (int i = 0; i<2; i++) {
        for (int j = 0; j<2; j++){
            cout<<"a["<<i<<"]["<<j<<"]"<<a[i][j]<<endl;

        }
    }
    return 0;

}