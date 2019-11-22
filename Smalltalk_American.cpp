/*
 * Smalltalk_American.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: allan
 */
#include "./includes/Smalltalk_American.h"
#include "./includes/constants.h"

Smalltalk_American::Smalltalk_American(int iPerson):Smalltalk(AMERICAN,iPerson) {
	populatePhrases();
}

Smalltalk_American::Smalltalk_American(std::string myNationality, int iPerson):Smalltalk(myNationality,iPerson) {
}

Smalltalk_American::~Smalltalk_American(void) {
}

void Smalltalk_American::populatePhrases() {
}
