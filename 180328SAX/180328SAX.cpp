// 180328SAX.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
#include "saxquantizer.hpp"

using namespace std;

int main()
{
	SaxQuantizer::Sax sax(6, 1, 5);
	vector<double> input = { 1, 1, 1, 1, 2, 2, 10, 10, 100 };
	vector<int> output;
	sax.quantize(input, &output, false); // true for reduction

	cout << "input:";
	for (const auto & x : input) cout << " " << x;
	cout << endl;

	cout << "output:";
	for (const auto & x : output) cout << " " << x;
	cout << endl;

	system("pause");
    return 0;
}

