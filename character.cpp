
#include <cstdlib>
#include <iostream>
#include <string>
#include "character.hpp"
#include "potions.hpp"
using namespace std;

  Character::Character(): m_attack(5), m_defense(1), m_resistance(1), m_level(0), m_health(100) ,m_mana(100), m_stamina(100), m_stat_points(0){

  }

  bool Character::is_alive() const{
    return (m_health>0);
  }

  void Character::get_hit(int damage){
    m_health-=damage-m_defense;
  }

  void Character::attack(Character &target){
    target.m_health-=m_dpa;
  }

  void Character::level_up(){
    m_level++;
    m_attack++;
    m_defense++;
    m_resistance++;
    m_stat_points+=3;
  }
  
  void Character::use_points(){

  }

  void drink_potion(Potion &potion);

  void Character::stats_tab() const{
    cout<< "Name: " << m_name << endl
        << "Level: " << m_level << endl
        << "Health Points: " << m_health << endl
        << "Stamina: " << m_stamina << endl
        << "Mana Points: " << m_mana << endl
        << "Attack Points: " << m_attack << endl
        << "Defence: " << m_defense << endl
        << "Resistance: " << m_resistance << endl
        << "Stats Points: " << m_stat_points << endl;
  }