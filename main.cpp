#include "Player.hpp"

int main(){
    Player player1("Steven", 250, 25);
    Player player2("Goob", 100, player1.getHealth() * 0.5);

    while(!player1.isDead() || !player2.isDead()){
        player1.dealDamage(&player2);
        if (player2.isDead()) break;
        player2.dealDamage(&player1);
        if (player1.isDead()) break;
    }

    if (player1.isDead() && player2.isDead()){
        std::cout << "It's a tie!" << std::endl;
    } else if (player1.isDead()){
        std::cout << "Player 2 wins!" << std::endl;
        player2.printInfo();
    } else{
        std::cout << "Player 1 wins!" << std::endl;
        player1.printInfo();
    }

    return 0;
}