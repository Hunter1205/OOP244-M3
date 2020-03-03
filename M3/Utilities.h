// TODO: add file header comments here
//Milestone 3
//Assignment Submission
//hahmad20@myseneca.ca
//Haasher Ahmad
//OOP244SFG
//136588167
//03/17/2019

#ifndef AMA_UTILITIES_H
#define AMA_UTILITIES_H

#include <iostream>

#include "Product.h"

namespace ama{
    std::ostream& operator<<(std::ostream&, const Product&);
    std::istream& operator>>(std::istream&, Product&);
    double operator+=(double&, const Product&);
}
#endif