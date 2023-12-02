#pragma once
#include <fstream>
#include <iostream>

using namespace std;

class Date
{
	int year, month, day;

public:
	static Date readData(std::ifstream& in);
	void writeData();
};

