/**
 * Arduino - Naive Bayes Library
 *
 * Classifier.h
 *
 * Abstract classifier.
 *
 * @author Dalmir da Silva <dalmirdasilva@gmail.com>
 */

#ifndef __ARDUINO_NAIVE_BAYES_CLASSIFIER_H__
#define __ARDUINO_NAIVE_BAYES_CLASSIFIER_H__ 1

#include <Sample.h>
#include <Class.h>

class Classifier {

public:

    virtual ~Classifier();

    virtual Class classify(Sample *sample) = 0;
};

#endif // __ARDUINO_NAIVE_BAYES_CLASSIFIER_H__
