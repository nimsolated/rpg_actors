#include "Actor.hpp"

class Player : public Actor{
    public:
        using Actor::Actor;

        Player(const std::string& initName, const size_t& initHealth, const size_t& initDamage);
};