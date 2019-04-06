//
// Created by Peleg on 05/04/2019.
//
#pragma
#include "PhysicalNumber.h"
using namespace std;
//Positive
ariel::PhysicalNumber operator+(const ariel::PhysicalNumber &b) {
    //result is returned after ~|a+b = c (return c)|~
    return ariel::PhysicalNumber(0, ariel::Unit::HOUR);
}

ariel::PhysicalNumber ariel::operator+(ariel::PhysicalNumber &a, const ariel::PhysicalNumber &b) {
    return ariel::PhysicalNumber(0, Unit::KM);
}

ariel::PhysicalNumber ariel::operator+=(ariel::PhysicalNumber &number, const PhysicalNumber &other) {
    //+= :
    //number = number + other
    return number;
}

ariel::PhysicalNumber ariel::operator+( PhysicalNumber &a) {
    //unary +
    return ariel::PhysicalNumber(0, Unit::HOUR);
}

//negative
ariel::PhysicalNumber ariel::operator-(PhysicalNumber &a, PhysicalNumber &b) {
    return PhysicalNumber(0, Unit::HOUR);
}

ariel::PhysicalNumber ariel::operator-=(PhysicalNumber &number, PhysicalNumber &other) {
    return PhysicalNumber(0, Unit::HOUR);
}

ariel::PhysicalNumber ariel::operator-(PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::HOUR);
}

//comparison
bool ariel::operator==(const PhysicalNumber &a, const PhysicalNumber &b) {
    return true;
}

bool ariel::operator>=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return true;
}

bool ariel::operator <= (const PhysicalNumber &a, const PhysicalNumber &b) {
    return true;
}

bool ariel::operator>(const PhysicalNumber &a, const PhysicalNumber &b) {
    return true;
}

bool ariel::operator<(const PhysicalNumber &a, const PhysicalNumber &b) {
    return true;
}

bool ariel::operator!=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return true;
}

istream &ariel::operator>>(istream &in, ariel::PhysicalNumber &a) {
    return in;
}

ostream &ariel::operator<<(ostream &out,const ariel::PhysicalNumber &a) {
    return out;
}

//


