#include "NaiveBayesClassifier.h"
#include <Sample.h>
#include <Class.h>

NaiveBayesClassifier::NaiveBayesClassifier(void* model) : model(model) {
}

void NaiveBayesClassifier::learn(Sample *sample) {

}

Class NaiveBayesClassifier::classify(Sample *sample) {
    return Class(0);
}
