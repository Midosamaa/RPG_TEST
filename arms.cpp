
#include <cstdlib>
#include <iostream>
#include <string>
#include "character.hpp"
#include "potions.hpp"
#include "arms.hpp"
using namespace std;

Arm::Arm(): m_level(0){

}

void Arm::upgrade(){
    m_level++;
    m_dpa+= m_level*2;
    //m_user.Character::m_upgrade_points-=m_upgrade_cost;
}

void Arm::info()const{
    cout<< "Name: " << m_name << endl
        << "Level: " << m_level << endl
        << "Rarity: " << m_rarity << endl
        << "Damage: " << m_dpa <<endl
        << "Upgrade Cost: " << m_upgrade_cost << endl;
}