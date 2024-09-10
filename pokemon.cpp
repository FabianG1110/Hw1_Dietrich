
//
//  pokemon.cpp
//  
//
//  Created by Anthony Enriquez on 9/8/24.
//

#include "pokemon.h"



Pokemon::Pokemon(string name, int ndex,Type type1){   
        _name = name;
        _ndex = ndex;
        types[0]= type1;

}
Pokemon::Pokemon(string name, int ndex, Type type1, Type type2){  //constructormulti-type
        _name = name;
        _ndex = ndex;
        types[0] = type1;
        types[1]= type2;

        
}
string Pokemon::name(){
    return _name;                                                       //Returns name 
}
int Pokemon::Ndex(){
    return _ndex;                                                       //Returns Ndex
}
Pokemon::Type Pokemon::type1(){
    return types[0];

}
bool Pokemon::is_multitype() { 
    
}
Pokemon::Type Pokemon::type2(){ 
    return types[1];
}
float Pokemon::damage_multiplier(Type attack_type){

}