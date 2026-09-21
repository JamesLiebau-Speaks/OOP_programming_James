#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Route {
    public:
        //constructor - is called when the object is created
        //constructor has the same name as the class and has no return type (even no void)
        Route(const std::string& src, const std::string& dest, const std::string& tran = "Car") {
            setSource(src);
            setDestination(dest); 
            transport = tran;           
        }
        
        void print() const {// const method cannot change the attributes
            //source = "abc"; prohibited
            std::cout << "( " << source << " -> " << destination << ", " << length << " miles and will travel by " << transport << " )\n";
        }
        //getter (accessor functions)
        std::string getSource() const {
            return source;
        }

        //TODO implement other getters
        std::string getDestination() const {
            return destination;
        }
        int getLength() const {
            return length;
        }

        // Setters (mutator functions)
        void setDestination(const std::string dest) {
            destination = dest;
            updateLength();
        }

        void setSource(const std::string src){
            source = src;
            updateLength();
        }
        //Make set ttansport exept only pass if "Car", "Plane", "Train" (Allowed inputs)
        
        private:

        void updateLength() {
            //complex function that calculates the distance between two distances
            length = rand() % 1000 +100; 
        }

        std::string source;
        std::string destination;
        std::string transport;
        int length;
};

int main(void){
    srand(time(0));
    //create the route
    Route trip("Lakeland", "Orlando");
    // trip.source = "Lakeland";
    // trip.destination = "Orlando";
    // trip.length = 40;

    trip.print();

    Route summer_trip("Lakeland", "Key West", "Plane");
    summer_trip.print();
    // summer_trip.source = "Lakeland";
    // summer_trip.destination = "New York";
    summer_trip.setDestination("New York");


    summer_trip.print();

    // update the source
    summer_trip.setSource("Orlando");
    summer_trip.print();



    return 0;
}