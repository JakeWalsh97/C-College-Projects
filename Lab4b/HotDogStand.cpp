#include "HotDogStand.h"

	HotDogStand::HotDogStand(int id, int numSold) {
		idNum = id;
		numSoldThatDay = numSold;
	}

	void HotDogStand::justSold() {
		numSoldThatDay = numSoldThatDay + 1;
	}

	int HotDogStand::totalSold() {
		numSoldByAll += numSoldThatDay;
		return numSoldThatDay;
	}

	int HotDogStand::totalSoldByAll() {
		return numSoldByAll;
	}

	int HotDogStand::getID() const
	{
		return idNum;
	}

	int HotDogStand::getNumSold() const
	{
		return numSoldThatDay;
	}

	int HotDogStand::numSoldByAll = 0;
