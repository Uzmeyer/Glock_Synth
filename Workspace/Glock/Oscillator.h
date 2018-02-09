/*
 * Oscillator.h
 *
 *  Created on: 09.02.2018
 *      Author: Jakob
 */

#ifndef OSCILLATOR_H_
#define OSCILLATOR_H_

#include "TimedSynthComponent.h"

class Oscillator: public TimedSynthComponent {
public:
	Oscillator();
	virtual ~Oscillator();
};

#endif /* OSCILLATOR_H_ */
