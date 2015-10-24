//
//  PointerPractice.cpp
//  FirstCPPFile
//
//  Created by Ronald Hernandez on 10/24/15.
//  Copyright © 2015 Wahoo. All rights reserved.
//

#include "PointerPractice.hpp"
#include <iostream>

using namespace std;

void swap(int *num1, int *num2);

int main(){
    int a = 3, b = 33, c;

//    cout<<a<<"\t"<<b<<endl;
////passing by values.
//    swap(&a,&b);
//
//    cout<<a<<"\t"<<b<<endl;
//passing by references.

//    c =a;
//    a=b;
////    b=c;
//
//    cout<<a<<"\t"<<b<<endl;

//    int a =34;
//
//    int *p;
//
//    p =&a;
//
//
//    cout<<"The address of a is : "<<p;
//
//    cout<<"The value of p is: "<<*p;
    return 0;

}

void swap(int *num1, int *num2){


    int num3;
    num3 = *num1;
    *num1 = *num2;
    *num2 = num3;

}