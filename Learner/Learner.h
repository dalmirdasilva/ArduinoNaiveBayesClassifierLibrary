/**
 * Arduino - Naive Bayes Library
 *
 * Learner.h
 *
 * Abstract learner.
 *
 * @author Dalmir da Silva <dalmirdasilva@gmail.com>
 */

#ifndef __ARDUINO_NAIVE_BAYES_LEARNER_H__
#define __ARDUINO_NAIVE_BAYES_LEARNER_H__ 1

#include <Sample.h>

class Learner {

public:

    virtual ~Learner();

    virtual void learn(Sample *sample) = 0;
};

#endif // __ARDUINO_NAIVE_BAYES_LEARNER_H__
