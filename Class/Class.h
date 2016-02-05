/**
 * Arduino - Naive Bayes Library
 *
 * Class.h
 *
 * Class class.
 *
 * @author Dalmir da Silva <dalmirdasilva@gmail.com>
 */

#ifndef __ARDUINO_NAIVE_BAYES_CLASS_H__
#define __ARDUINO_NAIVE_BAYES_CLASS_H__ 1

class Class {

    unsigned char code;

public:

    Class(unsigned char code);

    unsigned char getCode();

    void setCode(unsigned char code);
};

#endif // __ARDUINO_NAIVE_BAYES_CLASS_H__
