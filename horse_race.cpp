#include <random>

const int NUM_HORSES;
const int TRACK_LENGTH;

void advance(int, int*);
void printLane(int, int*);
bool isWinner(int, int*);

int main(){

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

