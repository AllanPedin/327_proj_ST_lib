//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: keith
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {
		//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> people;

		//add brits to vector
	for(int i=0;i<numBrit;i++){
		people.emplace_back(new Smalltalk_Brit());
	}
		//add americans  to vector
	for(int i=0;i<numAmerican;i++){
		people.emplace_back(new Smalltalk_Brit());
	}
		//add american donut enthusiest  to vector
	for(int i=0;i<numbAmericanDonutEnthusiest;i++){
		people.emplace_back(new ST_American_DonutEnthusiest());
	}
		//create some watches (as long as number watches <= numb people)
		//then give the watches away to first NUM_WATCHES people in the vector
		// when you are finished using the vector you return
		//from this function(see Smalltalk header for hints)
	int watches=-1;
	if(people.size()<numWatches){
		watches=people.size();
	}else{
		watches=numWatches;
	}
	for(int i=0;i<watches;i++){
		std::unique_ptr<Watch> watch = std::unique_ptr<Watch>(new Watch());
		people[i].get()->giveWatch(watch);
	}
		//return your vector
	return people;
}
