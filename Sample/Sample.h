/**
 * Arduino - Naive Bayes Library
 *
 * Sample.h
 *
 * Abstract classifier.
 *
 * @author Dalmir da Silva <dalmirdasilva@gmail.com>
 */

#ifndef __ARDUINO_NAIVE_BAYES_SAMPLE_H__
#define __ARDUINO_NAIVE_BAYES_SAMPLE_H__ 1

#include <Class.h>
#include <Feature.h>

class Sample {

    Class* classification;

    Feature** features;

    unsigned char featureSize;

public:

    Sample(Class* classification, Feature** features, unsigned char featureSize);

    Class* getClass();

    void setClass(Class* classification);

    Feature** getFeatures();

    void setFeature(Feature** features);

    unsigned char getFeaturesSize();

    void setFeatureSize(unsigned char featureSize);
};

#endif // __ARDUINO_NAIVE_BAYES_SAMPLE_H__
