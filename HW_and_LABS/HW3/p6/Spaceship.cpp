#include "Spaceship.hpp"
#include <iostream>
std::string direction[] = {"UP", "DOWN", "LEFT", "RIGHT"};
//int Spaceship::index = 0;
Spaceship::Spaceship(){
    x = 0;
    y = 0;
    updatePosition("UP");
    
}
Spaceship::Spaceship(const std::string& path){
    setX(0);
    setY(0);
    updatePosition("UP");
    int index = 0;
    //std::cout << direction[index] << std::endl;

    int len = path.length();
    // std::cout << len;
    for(int i = 0; i < len; i++){
        //std::cout << path.at(i) << std::endl;
        if(path.at(i) == 'R'){
            if(index == 0){
                index = 3;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            if(index == 1){
                index = 2;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            if(index == 2){
                index = 0;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            if(index == 3){
                index = 1;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            //index = 3;
            //std::cout << direction[index];
        }
        else if(path.at(i) == 'L'){
            if(index == 0){
                index = 2;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            if(index == 1){
                index = 3;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            if(index == 2){
                index = 1;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            if(index == 3){
                index = 0;
                updatePosition(direction[index]);
                //std::cout << direction[index] << std::endl;
            }
            //std::cout << direction[index];
        }
        else if(path.at(i) == 'A'){
            if(index == 0){
                addY();
                //std::cout << "y: " << getY() << direction[index] << std::endl;
                updatePosition(direction[index]);
            }
            else if(index == 1){
                subY();
                //std::cout << "y: " << getY() << direction[index] << std::endl;
                updatePosition(direction[index]);
            }
            else if(index == 2){
                subX();
                //std::cout << "x: " << getX() << direction[index] << std::endl;
                updatePosition(direction[index]);
            }
            else if(index == 3){
                addX();
                //std::cout << "x: " << getX() << direction[index] << std::endl;
                updatePosition(direction[index]);                    
            }
        }

    }
}

void Spaceship::setX(int inx){
    x = inx;
}
void Spaceship::setY(int iny){
    y = iny;
}
void Spaceship::addX(){
    x++;
}
void Spaceship::addY(){
    y++;
}
void Spaceship::subX(){
    x--;
}
void Spaceship::subY(){
    y--;
}
int Spaceship::getX() const{
    return x;
}
int Spaceship::getY() const{
    return y;
}
void Spaceship::updatePosition(const std::string& direction){
    position = "{X: " + std::to_string(getX()) + ", Y: " + std::to_string(getY()) + ", direction: '" + direction + "'}";
}

std::string Spaceship::getPosition() const{
    return position;
}