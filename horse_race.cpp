#include <iostream>
#include <random>

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

int main(){
	int horses[] = {0, 0, 0, 0, 0};
	bool keepGoing = true;

	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++) {
			advance(i, horses);
			printLane(i, horses);
			if (isWinner(i, horses) == true){
				keepGoing = false;
			} // end if
		} // end for
		std::cout << "Press enter for another turn" << std::endl;
		std::cin.ignore();
	} // end while
	return 0;
} // end main

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	
	int coin = dist(rd);

	horses[horseNum] += coin;
} // end advance

void printLane(int horseNum, int* horses){
	for (int i = 0; i < TRACK_LENGTH; i++){
		if (horses[horseNum] == i){
			std::cout << horseNum;
		} // end if
		else {
			std::cout << ".";
		} // end else
	} // end for
	std::cout << std::endl;
} // end printLane

bool isWinner(int horseNum, int* horses){
	bool result = false;
	if (horses[horseNum] == TRACK_LENGTH){
		result = true;
		std::cout << "Horse " << horseNum << " wins!!!" << std::endl;
	} // end if
	return result;
} // end isWinner

