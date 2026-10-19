#include <string>
class Spaceship {
    public:
    //constructor
    Spaceship();
    Spaceship(const std::string& path);
    
    std::string getPosition() const;
    void updatePosition(const std::string& direction);
    void addX();
    void addY();
    void subX();
    void subY();
    void setX(int inx);
    void setY(int iny);
    int getX() const;
    int getY() const;
    //static int index;
    //static std::string direction[];
    private:
    
    int x;
    int y;
    std::string position;
    

    
    
};