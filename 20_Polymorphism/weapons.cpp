#include <iostream>

class Gun {
public:
    virtual void shoot() {
        std::cout << "BANG!" << std::endl;
    }
};

class MachineGun : public Gun {
public:
    int magazine = 20;
    void shoot() override {
        while(magazine > 0){
            std::cout << "BANG! ";
            magazine--;
        }
        std::cout << "\n";
    }
};

class Player {
public:
    void shoot(Gun& gun){
        gun.shoot();
    }
};

int main(void) {
    // Create Player
    // Create different weapons
    // Shoot weapon

    // try to shoot w/MachineGun multiple times. Can you do it? How to fix it?
    return 0;
}