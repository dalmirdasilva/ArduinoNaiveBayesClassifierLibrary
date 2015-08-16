/**
 * Arduino - Naive Bayes Library
 *
 * NaiveBayesClassifier.h
 *
 * Naive Bayes Classifier implementation.
 *
 * @author Dalmir da Silva <dalmirdasilva@gmail.com>
 */

#ifndef __ARDUINO_NAIVE_BAYES_CLASSIFIER_H__
#define __ARDUINO_NAIVE_BAYES_CLASSIFIER_H__ 1

#include <Class.h>

class NaiveBayesClassifier : public Classifier, public Learner {

public:

    NaiveBayesClassifier();

    virtual void learn(Sample *sample);

    virtual Class classify(Sample *sample);
};

#endif // __ARDUINO_NAIVE_BAYES_CLASSIFIER_H__
