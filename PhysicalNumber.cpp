//
// Created by peleg on 04-Apr-19.
//
#include <iostream>
#include <cstdlib>
#include "PhysicalNumber.h"
using namespace std;
using namespace ariel;

PhysicalNumber ariel::operator++(PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator+=(PhysicalNumber &b) {
    return PhysicalNumber(0, Unit::CM);
}

PhysicalNumber ariel::operator+(const PhysicalNumber &a, const PhysicalNumber &b) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator+(const PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator--(PhysicalNumber &a) {
    return PhysicalNumber(0, Unit::KM);
}

PhysicalNumber ariel::operator-=(PhysicalNumber &b) {
    return PhysicalNumber(0, Unit::CM);
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



/*int main(){
    PhysicalNumber a(2, Unit::TON);
    cout<<a.GetData()<<" "<<a.GetUnit() <<endl;
    a.SetUnit(Unit::CM);
    cout<<a.GetData()<<" "<<a.GetUnit() <<endl;
    return 0;
}*/
