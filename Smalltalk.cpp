/*
 * Smalltalk.cpp
 *
 *  Created on: Nov 6, 2019
 *      Author: allan
 */
#include "./includes/Smalltalk.h"


using namespace std;
/**derived class will set Nationality, iPerson.
 *  iPerson is just a counter used to distinguish between objects of the same type*/
Smalltalk::Smalltalk(std::string myNationality, int iPerson):nationality(myNationality),iPerson(iPerson){
	mySmallTalk =  vector<string>();
	current_phrase = 0;
	pWatch = 0;
}

Smalltalk::~Smalltalk(void){
}
/**	cycles through phrases added in populatePhrases.
 * Returns them 1 by 1 starting with the first and ending with the last
 * and then it starts over takes the form Nationality iPerson: phrase
 * for instance the following string comes from an American instance, the 10th iPerson and it is printing AMERICAN_PHRASE_2
 * AMERICAN 10:Why yes, I would like to supersize that*/
std::string Smalltalk::saySomething() {
	if(current_phrase >=mySmallTalk.size()){
		current_phrase=0;
	}
	return mySmallTalk[current_phrase++];
}

std::string Smalltalk::getTime() {
	return pWatch->getTime();
}
/**removes*/
std::unique_ptr<Watch> Smalltalk::takeWatch(){
	std::unique_ptr<Watch> retWatch = std::move(pWatch);
	return retWatch;
}

bool Smalltalk::giveWatch(std::unique_ptr<Watch> &watch) {
	if(pWatch){
		return false;
	}
	pWatch=std::move(watch);
	return true;
}
