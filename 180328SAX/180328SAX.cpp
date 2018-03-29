// 180328SAX.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>
#include "saxquantizer.hpp"
#include <boost/math/distributions/normal.hpp>

using namespace std;



int main()  
{
	boost::math::normal dist(0.0, 1.0);


	cout << boost::math::quantile(dist, 0.89993)<<" "<< boost::math::cdf(dist, 1.28115) << endl;
	cout << boost::math::mean(dist) << " " << boost::math::mode(dist) << endl;
	cout << boost::math::median(dist) << " " << boost::math::pdf(dist, 1) << endl;


	SaxQuantizer::Sax sax(3, 1, 3);
	vector<double> input = { 2, 1, 1, 1, 2, 2, 10, 10, 100 },output1;
	vector<int> output;
	sax.quantize(input, &output, false); // true for reduction
	cout << "input:";
	for (const auto & x : input) cout << " " << x;
	cout << endl;

	cout << "output:";
	for (const auto & x : output) cout << " " << x;
	cout << endl;


	SaxQuantizer::Sax sax1(9, 3);
	sax1.getSAX(input, output1);

	system("pause");
    return 0;
}

