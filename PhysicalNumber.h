//
// Created by peleg on 04-Apr-19.
//
#include <stdio.h>
#include "Unit.h"
using namespace std;
namespace ariel{
    class PhysicalNumber{
        private:
        int data;
        Unit::unit unitType;

        public:
            PhysicalNumber(int num , Unit::unit type)
            :data(num), unitType(type){}
            string GetUnit(){
                switch (unitType) {
                    case 0:return "CM";
                    case 1:return "M";
                    case 2:return "KM";
                    case 3:return "SEC";
                    case 4:return "MIN";
                    case 5:return "HOUR";
                    case 6:return "G";
                    case 7:return "KG";
                    case 8:return "TON";
                }
            }
            int GetData(){
                return data;
            }
            void SetData(int numb){
                this->data=numb;
            }
            void SetUnit(Unit::unit(mida)){
                this->unitType=mida;
            }
        //positive Operators:
        friend PhysicalNumber operator++(PhysicalNumber& a);
        friend PhysicalNumber operator+=(PhysicalNumber&a, PhysicalNumber& b);
        friend PhysicalNumber operator+ (const PhysicalNumber& a, const PhysicalNumber& b);
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
}
