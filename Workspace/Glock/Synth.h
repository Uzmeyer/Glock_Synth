/*
 * Synth.h
 *
 *  Created on: 21.01.2018
 *      Author: Jakob
 */

#ifndef SYNTH_H_
#define SYNTH_H_

#include "Arduino.h"
#include "Note.h"


class Synth {
public:
	Synth();
	virtual ~Synth();
	void start();
	void noteOn(uint8_t note, uint8_t channel, uint8_t velocity);
	void noteOff(uint8_t note, uint8_t channel, uint8_t velocity);

private:
	Note NoteTable [16][128];

};
#endif /* SYNTH_H_ */

