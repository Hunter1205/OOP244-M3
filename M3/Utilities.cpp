// TODO: add file header comments here
//Milestone 3
//Assignment Submission
//hahmad20@myseneca.ca
//Haasher Ahmad
//OOP244SFG
//136588167
//03/17/2019

#include <iostream>
#include <cstring>

#include "Product.h"
#include "ErrorState.h"
#include "Utilities.h"

using namespace std;

namespace ama{
  	double operator+=(double& total, const Product& cost){
		return total += cost.total_cost();
	}

 	std::ostream& operator<<(std::ostream& out, const Product& b){
		return b.write(out, write_human);
	}

	std::istream& operator>>(std::istream& in, Product& b){
		return b.read(in, true);
	}
}