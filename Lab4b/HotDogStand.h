#include <iostream>

using namespace std;

#ifndef HOTDOGSTAND_H
#define HOTDOGSTAND_H

class HotDogStand {
public:
	HotDogStand(int, int);
	void justSold();
	int totalSold();
	int getID() const;
	int getNumSold() const;
	static int totalSoldByAll();

private:
	int idNum = 0;
	int numSoldThatDay = 0;
	static int numSoldByAll;
};

#endif