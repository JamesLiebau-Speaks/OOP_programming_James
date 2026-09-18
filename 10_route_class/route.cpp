#include <iostream>
#include <string>

class Route {
    public:
        //constructor - is called when the object is created
        //constructor has the same name as the class and has no return type (even no void)
        Route(const std::string& src, const std::string& dest, int len) {
            source = src;
            destination = dest;
            length = len;
        }

        void print() {
            std::cout << "( " << source << " -> " << destination << ", " << length << " miles )\n";
        }
        //getter (accessor functions)
        std::string getSource() {
            return source;
        }

        //TODO implement other getters

        // Setters (mutator functions)
        void setDestination(const std::string dest) {
            destination = dest;
        }

        
    private:
        std::string source;
        std::string destination;
        int length;
};

int main(void){
    //create the route
    Route trip("Lakeland", "Orlando", 40);
    // trip.source = "Lakeland";
    // trip.destination = "Orlando";
    // trip.length = 40;

    trip.print();

    Route summer_trip("Lakeland", "Key West", 394);
    // summer_trip.source = "Lakeland";
    // summer_trip.destination = "New York";
    summer_trip.setDestination("New York");

    summer_trip.print();



    return 0;
}