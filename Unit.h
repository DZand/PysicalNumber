//
// Created by peleg on 04-Apr-19.
//

#ifndef PELEGO_UNIT_H
#define PELEGO_UNIT_H

#endif //PELEGO_UNIT_H

namespace ariel{
 class Unit{
 public:
     enum unit{
         CM=0,
         M=1,
         KM=2,
         SEC=3,
         MIN=4,
         HOUR=5,
         G=6,
         KG=7,
         TON=8
     };
     void SetUnit(unit name){
         this->_UNIT=name;
     }
     unit GetUnit(){
         return this->_UNIT;
     }
     Unit(unit name){
         if(name<=8 && name >=0){
             this->_UNIT=name;
         }else{
             throw std::invalid_argument( "received wrong unit" );
         }
     }
 private:
     unit _UNIT;
 };
};