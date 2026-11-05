#include <iostream>
#include <string>
#include <vector>
std::vector<std::string> spellTypes = {"Null", "Fire", "Water", "Earth", "Wind", "Ice", "Light", "Shadow"};
class Character {
public:
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
    Mage(std::string nm, int hp, int armr, int mn){
        armor = armr;
        mana = mn;
        health = hp;
        list = {};
        name = nm;
        className = "Mage";
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
class Rouge : public Character {
public:
    int armor;
private:

};
int main(void){
    // Create a Character
    Character* character = new Character();
    character->name = "Carl";
    character->health = 100;
    
    //Print character info
    character->printInfo();

    std::cout << std::endl;
    
    delete character;

    Warrior warrior;
    warrior.className = "Warrior";
    warrior.name = "Arthur";
    warrior.armor = 50;
    warrior.health = 150;

    warrior.printInfo();

    std::cout << std::endl;

    Mage mage("Alice", 80, 5, 100);
    mage.addSpell(10,"Conjure Mage Light", 0);
    mage.addSpell(50, "Explosion", 1);
    mage.addSpell(80, "Healing Light", 6);
    mage.printInfo();

    return 0;
}