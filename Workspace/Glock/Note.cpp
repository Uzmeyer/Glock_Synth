/*
 * Note.cpp
 *
 *  Created on: 07.02.2018
 *      Author: Jakob
 */

#include "Note.h"

Note::Note(uint8_t note) {
	this->note = note;
	this->velocity = 0;
	this->currentstate = stopped;

}

Note::~Note() {
	// TODO Auto-generated destructor stub
}

