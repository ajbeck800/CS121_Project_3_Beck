#include <random>

const int NUM_HORSES = 5;
const int TRACK_LENGTH = 15;

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

int main(){
	std::int horses[] = {0, 0, 0, 0, 0};
	std::int keepGoing = true;

	while (keepGoing){

	} // end while
} // end main

void advance(int horseNum, int* horses){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	
	coin = dist(rd);
} // end advance

void printLane(int horseNum, int* horses){

} // end printLane

bool isWinner(int horseNum, int* horses){

} // end isWinner

