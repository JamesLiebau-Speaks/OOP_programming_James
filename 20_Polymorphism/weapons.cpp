#include <iostream>
class Weapon{
public:
    virtual void use() = 0; // Pure virtual function
    // Class that has at least one pure virtual function is an abstract class
    // you cannot create an object of an abstract class
};
class Gun : public Weapon {
public:
    int bullets;
    int magazine;
    Gun(int magazine = 10) : magazine(magazine), bullets(magazine) {
    }
    void use() override {
        if (bullets > 0) {
        std::cout << "BANG!" << std::endl;
        bullets--;
        }
        else {
        std::cout << "CLICK!" << std::endl;
        }
    }
    void reload(int amount) {
        if (amount <= 0) return;
        int available = magazine - bullets;
        if (amount > available)
        amount = available;
        bullets += amount;
    }
};
class MachineGun : public Gun {
public:
    MachineGun(int magazine = 20) : Gun(magazine) {
    }
    void use() override {
        if (bullets == 0) {
        std::cout << "CLICK!" << std::endl;
        return;
        }
        while (bullets > 0) {
        std::cout << "BANG! ";
        bullets--;
        }
        std::cout << "\n";
    }
};
class Sniper : public Gun {
public:
    Sniper(int magazine = 5) : Gun(magazine) {
    }
    void use() override {
        if (bullets == 0) {
        std::cout << "CLICK!" << std::endl;
        return;
        }
        std::cout << "BANG!";
        bullets--;
        std::cout << "\n";
    }
};
class Knife : public Weapon{
public:
    Knife(bool is_stainless = false) : is_stainless(is_stainless){

    }
    void use() override {
        std::cout << "SLASH!" << std::endl;
    }
    bool getIsStainless() const{
        return is_stainless;
    }
private:
    bool is_stainless;
};
class Player {
public:
    void useWeapon(Weapon& weapon) {
        // Cast the weapon to the derived class (downcasting)
        Knife* knife = dynamic_cast<Knife*>(&weapon);
        if(knife == nullptr){
            std::cout << "Not a knife!\n";
        }
        else if (!knife->getIsStainless()){
            std::cout << "Cannot use this knife!\n";
            return;
        }
        weapon.use();
        
    }
    void reload(Gun& gun, int bullets) {
        gun.reload(bullets);
    }
};
int main(void) {
    Gun revolver;
    MachineGun machineGun;
    Player player;
    Knife knife_stainless(true);
    Knife non_stainless(false);
    Sniper sniper;

    player.useWeapon(revolver);
    player.useWeapon(machineGun);
    player.useWeapon(machineGun);

    // player.shoot(knife) // doesn't work
    player.reload(machineGun, 5);
    player.useWeapon(machineGun);

    player.useWeapon(knife_stainless);
    player.useWeapon(non_stainless);
    for(int i = 0; i < 6; i++){
        player.useWeapon(sniper);
    }
    player.reload(sniper, 5);
    for(int i = 0; i < 6; i++){
        player.useWeapon(sniper);
    }
    return 0;
}

// #include <iostream>

// class Gun {
// public:
//     virtual void shoot() {
//         std::cout << "BANG!" << std::endl;
//     }
// };

// class MachineGun : public Gun {
// public:
//     int magazine = 20;
//     void shoot() override {
//         if (magazine == 0){
//             std::cout << "RELOAD\n";
//             magazine = 20;
//         }
//         while(magazine > 0){
//             std::cout << "BANG! ";
//             magazine--;
//         }
//         std::cout << "\n";
//     }
// };

// class Player {
// public:
//     void shoot(Gun& gun){
//         gun.shoot();
//     }
// };

// int main(void) {
//     // Create Player
//     Player p1;
//     // Create different weapons
//     Gun sniper;
//     MachineGun p90;
//     // Shoot weapon
//     p1.shoot(sniper);
//     p1.shoot(p90);
//     // try to shoot w/MachineGun multiple times. Can you do it? How to fix it?
//     p1.shoot(p90);
//     return 0;
// }