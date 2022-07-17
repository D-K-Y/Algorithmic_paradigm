#pragma once
#include <iostream>
#include <vector>
#include "BinarySearch/binarySearch.h"
int main(){

    /*
        Binary Search Example ..
    */
    binarySearch<int> b;
    std::vector<int> v{ 2 ,4 ,6 ,7 ,9 , 10 ,23, 25, 28 , 29, 30 ,36 ,101 ,1005 };
    int sVal = 1005;
    if (b.search(v, sVal))
        std::cout << "Found";
    else
        std::cout << "Not Found";
    
    //b.search();
    //std::cout<<"Hello";
    return 0;
}