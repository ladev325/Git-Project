#pragma once
#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct PC {
	char name[50] = "undefined";
	float freq = 1.2;
	int ram = 4;
	bool dvd_rom = false;
	int price = 5000;

	void showInfo() {
		cout << setw(20) << "Name: " << name << endl;
		cout << setw(20) << "Frequency: " << freq << endl;
		cout << setw(20) << "RAM: " << ram << endl;
		cout << setw(20) << "DVD: " << boolalpha << dvd_rom << endl;
		cout << setw(20) << "Price: " << price << "UAN" << endl;
	}
};