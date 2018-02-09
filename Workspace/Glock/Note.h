/*
 * Note.h
 *
 *  Created on: 07.02.2018
 *      Author: Jakob
 */

#ifndef NOTE_H_
#define NOTE_H_

#include "Arduino.h"

enum State {
	stopped,
	triggered,
	running
};

class Note {
public:
	Note(uint8_t note);
	virtual ~Note();
	void on(uint8_t velocity);
	void off();
	int16_t run();
	State state();

private:
	uint8_t note;
	uint8_t velocity;
	State currentstate;

};

#endif /* NOTE_H_ */
