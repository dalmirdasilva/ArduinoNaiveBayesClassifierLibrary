/**
 * Arduino - Naive Bayes Library
 *
 * Feature.h
 *
 * Feature class.
 *
 * @author Dalmir da Silva <dalmirdasilva@gmail.com>
 */

#ifndef __ARDUINO_NAIVE_BAYES_FEATURE_H__
#define __ARDUINO_NAIVE_BAYES_FEATURE_H__ 1

class Feature {

    float value;

public:

    Feature(float value);

    float getValue();

    void getValue(float value);
};

#endif // __ARDUINO_NAIVE_BAYES_FEATURE_H__
