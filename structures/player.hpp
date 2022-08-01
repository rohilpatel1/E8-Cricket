#pragma once

#include <iostream>
#include <string>
#include <vector>

class Player {
private:
	int mBat = 0;
	int mBowl = 0;
	bool mAllRounder = false;
	std::string mDescription = ""; // Right handed batsman, right arm off spin bowler...
public:
	Player(int bat, int mBowl, bool allRounder, std::string description) {
		mBat = bat;
		mBowl = bowl;
		mAllRounder = allRounder;
		mDescription = description;
	}

	void stateInformation() {
		std::cout << "This player has a batting rating of " << mBat << " and a bowling rating of " << mBowl << ""
	}
};

// Assign bat and bowl to something less than 100
// Maybe we do something like make then supplements of each other idk
// We could also do teams