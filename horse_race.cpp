/* Algorithm:
 *
 * random number generator that stores 1 or 0 in variable coin
 *
 * void advance(int horseNum, int* horses){
 *
 * }
 *
 * void printLane(int horseNum, int* horses){
 *
 * }
 *
 * bool isWinner(int horseNum, int* horses){
 *
 * }
 *
 * main(){
 *
 * }
 *
*/

#include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

coin = dist(rd);


