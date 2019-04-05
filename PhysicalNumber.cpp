//
// Created by Peleg on 05/04/2019.
//

#include "PhysicalNumber.h"
using namespace ariel;
using namespace std;
//Positive
PhysicalNumber ariel::operator+(PhysicalNumber &a, PhysicalNumber &b) {
    //result is returned after ~|a+b = c (return c)|~
    return PhysicalNumber(0, Unit::HOUR);
}

PhysicalNumber ariel::operator+=(PhysicalNumber &number, PhysicalNumber &other) {
    //+= :
    //number = number + other
    return PhysicalNumber(0, Unit::HOUR);
}

PhysicalNumber ariel::operator+(const PhysicalNumber &a) {
    //unary +
    return PhysicalNumber(0, Unit::HOUR);
}

//negative
PhysicalNumber ariel::operator-(PhysicalNumber &a, PhysicalNumber &b) {
    return PhysicalNumber(0, Unit::HOUR);
}

PhysicalNumber ariel::operator-=(PhysicalNumber &number, PhysicalNumber &other) {
    return PhysicalNumber(0, Unit::HOUR);
}

PhysicalNumber ariel::operator-(PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::HOUR);
}

//comparison
bool ariel::operator==(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator>=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator <= (const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator>(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator<(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator!=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

PhysicalNumber ariel::operator++(PhysicalNumber &a, int) {
    //int t = a.data;
    return a;
}

PhysicalNumber ariel::operator++(PhysicalNumber &a) {
    return a;
}

//
istream &ariel::operator>>(std::istream &in, PhysicalNumber &a) {
    in >> a.data;
    return in;
}

ostream &ariel::operator<<(std::ostream &out, PhysicalNumber &a) {
    out <<a.data<<"["<<a.GetUnit()<<"]";
    return out;
}

