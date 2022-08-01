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
	Player(int bat, int bowl, bool allRounder, std::string description) {
		mBat = bat;
		mBowl = bowl;
		mAllRounder = allRounder;
		mDescription = description;
	}

	void getPlayerStats() {
		std::string isRounder = "No";

		if (mAllRounder == true) isRounder = "Yes";
		std::cout << "\nBatting Rating: " 
			<< std::to_string(mBat) 
			<< "\nBowling Rating: " 
			<< std::to_string(mBowl) 
			<< "\nAll Rounder: " 
			<< isRounder << "\nDescription: " 
			<< mDescription  
			<< "\n" 
			<< std::endl;
	}
};

// Assign bat and bowl to something less than 100
// Maybe we do something like make then supplements of each other idk
// We could also do teams