/*
 * ST_American_DonutEnthusiest.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: allan
 */

#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/constants.h"

ST_American_DonutEnthusiest::ST_American_DonutEnthusiest(int i):Smalltalk_American(i) {
	populatePhrases();
}

ST_American_DonutEnthusiest::~ST_American_DonutEnthusiest(void){
}

void ST_American_DonutEnthusiest::populatePhrases() {
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_1);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_2);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_3);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_4);
	mySmallTalk.push_back(AMERICAN_DE_PHRASE_5);

}
