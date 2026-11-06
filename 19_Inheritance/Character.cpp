#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> spellTypes = {"Null", "Fire", "Water", "Earth", "Wind", "Ice", "Light", "Shadow"};
class Character {
public:
    Character();
    Character(const std::string& nm, int hp, const std::string& clss);
    ~Character();
    std::string name;
    int health;
    std::string className = "N/A";
    void printInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << className << std::endl;
        std::cout << "Health: " << health << std::endl;
    }
private:

};
class Spells{
public:
    Spells(int cst, std::string spll, int index){
        cost = cst;
        spell = spll;
        typeIndex = index;
    }
    std::string getSpellName() const{
        return spell;
    }
    int getSpellCost() const{
        return cost;
    }
    int getSpellType() const{
        return typeIndex;
    }
private:    
    int cost;
    std::string spell;
    int typeIndex;

};
class Warrior : public Character {
public:
    Warrior();
    Warrior(const std::string& nm, int hp, int arm, const std::string& clss);
    ~Warrior();
    int armor;
    //Redefine parents method
    void printInfo() const {
        // Call base class method
        Character::printInfo();
        std::cout << "Armor: " << armor << std::endl;
    }
private:
    
};
class Mage : public Character {
public:
    Mage(const std::string& nm, const std::string& clss, int hp, int armr, int mn) : Character(nm, hp, clss), armor(armr), mana(mn){
        // armor = armr;
        // mana = mn;
        // health = hp;
        list = {};
        // name = nm;
        // className = "Mage";
    }
    ~Mage(){
        // std::cout << "Mage Destructor" << std::endl;
    }
    
    void addSpell(int cost, std::string name, int index){
        list.push_back(Spells(cost, name, index));
    }
    void printSpellList() const{
        int n = list.size();
        std::cout << "--Spell List--" << std::endl;
        for (int i = 0; i < n; i++){
            std::cout << "Spell Name: " << list[i].getSpellName() << std::endl;
            std::cout << "Type: " << spellTypes[list[i].getSpellType()] << std::endl;
            std::cout << "Cost: " << list[i].getSpellCost() << std::endl;
            std::cout << std::endl;
        }
        std::cout << "--Spell List End--" << std::endl;
    }
    void printInfo() const {
        // Call base class method
        Character::printInfo();
        std::cout << "Armor: " << armor << std::endl;
        std::cout << "Mana: " << mana << std::endl;
        printSpellList();
    }
private:
    int armor;
    int mana;
    std::vector<Spells> list;
};
// class EliteWarrior : public Character {
// public:
//     int level;
//     EliteWarrior(const std::string& nm, int level, const std::string& clss) : Warrior(nm, 0, clss), level(level){

//     }
//     void printInfo() const {
//         // Call base class method
//         Warrior::printInfo();
//         std::cout << "Level: " << level << std::endl;
//     }
// private:

// };
int main(void){
    // // Create a Character
    // Character* character = new Character();
    // character->name = "Carl";
    // character->health = 100;
    
    // //Print character info
    // character->printInfo();

    // std::cout << std::endl;
    
    // delete character;

    Warrior warrior("Arthur", 150, 50, "Warrior");
    // warrior.className = "Warrior";
    // warrior.name = "Arthur";
    // warrior.armor = 50;
    // warrior.health = 150;

    warrior.printInfo();
    std::cout << std::endl;

    // Character* ptr = &warrior;
    // std::cout << "Name: " << ptr->name << std::endl;
    // std::cout << std::endl;

    // ptr->printInfo();
    // std::cout << std::endl;

    // //Static Binding
    // Character& ref = warrior;
    // ref.printInfo();

    // std::cout << std::endl;

    Mage mage("Alice", "Mage", 80, 5, 100);
    mage.addSpell(10,"Conjure Mage Light", 0);
    mage.addSpell(50, "Explosion", 1);
    mage.addSpell(80, "Healing Light", 6);
    mage.printInfo();

    Character character2("Mike", 100, "N/A");
    // Character ew("Ellend", 100, "Elite Warrior");
    //Create an array of characters
    Character characters[3] = {character2, warrior, mage};

    for (int i = 0; i < 3; i++){
        characters[i].printInfo();
        std::cout << std::endl;
    }

    return 0;
}
Character::Character() : name("N/A"), health(10), className("N/A") {
    // std::cout << "Character Constructor\n";
}
Character::Character(const std::string& nm, int hp, const std::string& clss) : name(nm), health(hp), className(clss) {

}
Warrior::Warrior() : armor(0) {
    // std::cout << "Warrior Constructor\n";
}
Warrior::Warrior(const std::string& nm, int hp, int arm, const std::string& clss) : Character(nm, hp, clss), armor(arm) {
    
}
Character::~Character(){
    // std::cout << "Character Destructor\n";
}
Warrior::~Warrior(){
    // std::cout << "Warrior Destructor\n";
}