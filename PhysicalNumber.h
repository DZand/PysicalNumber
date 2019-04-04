//
// Created by peleg on 04-Apr-19.
//
#include <stdio.h>
#include "Unit.h"
using namespace std;
namespace ariel{
    class PhysicalNumber{
        private:


        PhysicalNumber(double num, Unit type);

        double data;
        Unit unitType;

        public:
            PhysicalNumber(int num , Unit type);

            int GetData(){
                return data;
            }
            void SetData(double numb){
                this->data=numb;
            }
            void SetUnit(Unit::unit(mida)){
                this->unitType=mida;
            }
        //positive Operators:
        friend PhysicalNumber operator++(PhysicalNumber& a);
        friend PhysicalNumber& operator+=(PhysicalNumber& a ,PhysicalNumber& b);
        //friend PhysicalNumber operator+ (PhysicalNumber const &b);
        friend PhysicalNumber operator+ (const PhysicalNumber& a);

        //negative Operators:
        friend PhysicalNumber operator--(PhysicalNumber& a);
        friend PhysicalNumber operator-=(PhysicalNumber& a,PhysicalNumber& b);
        friend PhysicalNumber operator- (const PhysicalNumber& a, const PhysicalNumber& b);
        friend PhysicalNumber operator- (const PhysicalNumber& a);

        //Compare Operators:
        friend bool operator<(const PhysicalNumber& a,const PhysicalNumber& b);
        friend bool operator<=(const PhysicalNumber& a,const PhysicalNumber& b);
        friend bool operator>(const PhysicalNumber& a,const PhysicalNumber& b);
        friend bool operator>=(const PhysicalNumber& a,const PhysicalNumber& b);
        friend bool operator!=(const PhysicalNumber& a,const PhysicalNumber& b);
        friend bool operator==(const PhysicalNumber& a,const PhysicalNumber& b);

        //I/O Stream Operators:
        friend istream& operator>>(istream& in, PhysicalNumber& a);
        friend ostream& operator<<(ostream& out,const PhysicalNumber& a);
    };
};
