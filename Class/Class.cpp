#include "Class.h"

Class::Class(unsigned char code) : code(code) {
}

unsigned char Class::getCode() {
    return this->code;
}

void Class::setCode(unsigned char code) {
    this->code = code;
}
