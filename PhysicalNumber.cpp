//
// Created by peleg on 04-Apr-19.
//
#include <iostream>
#include <cstdlib>
#include "PhysicalNumber.h"
using namespace std;
using ariel::PhysicalNumber;

PhysicalNumber::PhysicalNumber(double num , Unit type)
        :data(num), unitType(type){}

PhysicalNumber ariel::operator++(PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber& ariel::operator+=(PhysicalNumber &a, PhysicalNumber &b) {

    return b;
}



PhysicalNumber ariel::operator+(const PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator--(PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator-=(PhysicalNumber &a, PhysicalNumber &b) {
    return b;
}

PhysicalNumber ariel::operator-(const PhysicalNumber &a, const PhysicalNumber &b) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator-(const PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

bool ariel::operator<(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator<=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator>(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator>=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

bool ariel::operator!=(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}



bool ariel::operator==(const PhysicalNumber &a, const PhysicalNumber &b) {
    return false;
}

istream &ariel::operator>>(istream &in, PhysicalNumber &a) {
    return in;
}

ostream& ariel::operator<< (ostream &os,const PhysicalNumber& num){
    return os;
}

