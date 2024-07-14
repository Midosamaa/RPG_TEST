#ifndef DEF_CHARACTER
#define DEF_CHARACTER

#include <cstdlib>
#include <iostream>
#include <string>
#include "potions.hpp"
#include "arms.hpp"

class Character{
    //methods

    public:

    Character();

    void get_hit(int damage);

    void attack(Character &target);

    bool is_alive() const;

    void level_up();

    void use_points();

    void drink_potion(Potion &potion);

    void stats_tab() const;

    ~Character();

    //attributes

    private:

    std::string m_name;
    int m_health;
    int m_mana;
    int m_dpa;  
    int m_stamina;
    int m_level;

    int m_defense;
    int m_resistance;
    int m_attack;

    int m_stat_points;
    int m_upgrade_points;

    Arm m_arm;


};

#endif