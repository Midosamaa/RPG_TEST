#ifndef DEF_ARMS
#define DEF_ARMS

#include <cstdlib>
#include <iostream>
#include <string>
#include "potions.hpp"
#include "character.hpp"

class Arm{

    //methods

    public:

    Arm();
    Arm(std::string name, int damage);

    void upgrade();

    void info()const;

    // attributes

    private:
    std::string m_name;
    std::string m_rarity;
    Character m_user;
    int m_dpa;
    int m_level;
    int m_upgrade_cost;
    int m_drop_rate;
    // passive?(posion, ignition...)

};

#endif