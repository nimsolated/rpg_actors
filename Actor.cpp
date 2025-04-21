#include "Actor.hpp"

Actor::Actor(){
    m_name = "Undefined";
    m_hp = 100;
    m_damage = 5;
    m_isDead = false;
}

void Actor::setName(const std::string& newName){
    m_name = newName;
}
void Actor::setName(std::string&& newName){
    m_name = newName;
}
std::string Actor::getName() const{
    return m_name;
}

void Actor::setHealth(const size_t& newHealth){
    m_hp = newHealth;

    if (m_hp == 0){
        this->die();
    }
}
void Actor::setHealth(size_t&& newHealth){
    m_hp = newHealth;

    if (m_hp == 0){
        this->die();
    }
}
size_t Actor::getHealth() const{
    return m_hp;
}

void Actor::setDamage(const size_t& newDamage){
    m_damage = newDamage;
}
void Actor::setDamage(size_t&& newDamage){
    m_damage = newDamage;
}
size_t Actor::getDamage() const{
    return m_damage;
}

void Actor::takeDamage(const size_t& damageTaken){
    if (damageTaken >= m_hp){
        m_hp = 0;
    } else{
        m_hp -= damageTaken;
    }

    if (m_hp == 0){
        this->die();
    }
}

void Actor::takeDamage(size_t&& damageTaken){
    if (damageTaken >= m_hp){
        m_hp = 0;
    } else{
        m_hp -= damageTaken;
    }

    if (m_hp == 0){
        this->die();
    }
}

void Actor::dealDamage(Actor* other){
    other->takeDamage(this->m_damage);
}

void Actor::die(){
    if (m_hp != 0){
        m_hp = 0;
    }

    m_isDead = true;
}

bool Actor::isDead() const{
    return m_isDead;
}

void Actor::printInfo(){
    std::cout << '[' << m_name << "]\n";
    std::cout << "Health: " << m_hp << '\n';
    std::cout << "Damage: " << m_damage << '\n';
}