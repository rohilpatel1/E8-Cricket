#include <iostream>

#include "structures/player.hpp"

int main() {
  Player* RohitSharma = new Player(73, 27, false, "Right Handed Batsmen");
  Player* HardikPandya = new Player(67, 45, true, "Right Handed Batsmen/Right Arm Fast Bowler");

  RohitSharma->getPlayerStats();
  HardikPandya->getPlayerStats();
}