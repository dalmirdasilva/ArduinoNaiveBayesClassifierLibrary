#include "Sample.h"

Sample::Sample(Class* classification, Feature** features, unsigned char featureSize)
        : classification(classification), features(features), featureSize(featureSize) {
}

Class* Sample::getClass() {
    return this->classification;
}

void Sample::setClass(Class* classification) {
    this->classification = classification;
}

Feature** Sample::getFeatures() {
    return this->features;
}

void Sample::setFeature(Feature** features) {
    this->features = features;
}

unsigned char Sample::getFeaturesSize() {
    return this->featureSize;
}

void Sample::setFeatureSize(unsigned char features) {
    this->featureSize = featureSize;
}
