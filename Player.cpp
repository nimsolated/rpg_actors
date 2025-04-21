#include "Player.hpp"

Player::Player(const std::string& initName, const size_t& initHealth, const size_t& initDamage){
    m_name = initName;
    m_hp = initHealth;
    m_damage = initDamage;
    m_isDead = false;
}