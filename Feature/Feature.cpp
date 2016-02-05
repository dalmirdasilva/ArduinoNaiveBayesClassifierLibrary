#include "Feature.h"

Feature::Feature(float value)
        : value(value) {
}

float Feature::getValue() {
    return this->value;
}

void Feature::getValue(float value) {
    this->value = value;
}
