#include <iostream>

class Actor{
    protected:
        std::string m_name;
        size_t m_hp;
        size_t m_damage;
        bool m_isDead;

        Actor();

    public:
        void setName(const std::string& newName);
        void setName(std::string&& newName);
        std::string getName() const;
        
        void setHealth(const size_t& newHealth);
        void setHealth(size_t&& newHealth);
        size_t getHealth() const;

        void setDamage(const size_t& newDamage);
        void setDamage(size_t&& newDamage);
        size_t getDamage() const;

        void die();

        void takeDamage(const size_t& damageTaken);
        void takeDamage(size_t&& damageTaken);

        void dealDamage(Actor* other);

        bool isDead() const;
        void printInfo();
};