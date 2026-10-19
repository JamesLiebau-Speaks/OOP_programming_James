#include <iostream>
#include "Spaceship.hpp"

int main(void) {
    Spaceship astroChuckler;
    std::cout << astroChuckler.getPosition() << std::endl;

    Spaceship lunacycle("RAALALL");
    std::cout << lunacycle.getPosition() << std::endl;
    
    Spaceship quirkonaut("AAAARAARLAAAARAAARRAAAALLLA");
    std::cout << quirkonaut.getPosition() << std::endl;
    
    Spaceship zanyverse("");
    std::cout << zanyverse.getPosition() << std::endl;
    
    Spaceship cosmocomedy("LAAA");
    std::cout << cosmocomedy.getPosition() << std::endl;

    return 0;
}
