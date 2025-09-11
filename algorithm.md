# Algorithm:

function advance (integer, array):\
&nbsp;&nbsp;random number generator that stores 1 or 0 in variable coin\
&nbsp;&nbsp;add coin to horse's position value in the array

function printLane(integer, array):\
&nbsp;&nbsp;for i from zero to TRACKLENGTH:\
&nbsp;&nbsp;&nbsp;&nbsp;if current loop index is equal to the horse's value:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print the horseNum\
&nbsp;&nbsp;&nbsp;&nbsp;else:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;print .

function isWinner(integer, array):\
&nbsp;&nbsp;if a horse's value is equal to TRACKLENGTH:\
&nbsp;&nbsp;&nbsp;&nbsp;print Horse horseNum wins!!!\
&nbsp;&nbsp;&nbsp;&nbsp;set keepGoing to false

main():\
&nbsp;&nbsp;make an array of 5 0 values, call it horses\
&nbsp;&nbsp;set keepGoing to true

&nbsp;&nbsp;while keepGoing:\
&nbsp;&nbsp;&nbsp;&nbsp;run through each horse in array:\
&nbsp;&nbsp;&nbsp;&nbsp;advance that horse\
&nbsp;&nbsp;&nbsp;&nbsp;print that horse's lane\
&nbsp;&nbsp;&nbsp;&nbsp;if that horse won:\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;set keepGoing to false\
&nbsp;&nbsp;&nbsp;&nbsp;ask user for input to start next turn
