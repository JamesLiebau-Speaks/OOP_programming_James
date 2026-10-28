#ifndef SET_HPP
#define SET_HPP

class MySet {
public:
// Constructor
	MySet(unsigned n);

// Copy-Constructor
	MySet(const MySet &other);

// Destructor
	~MySet();
	
// Memeber Functions
	void insertElement(int k);
    void deleteElement(int m);
    void printSet();
    bool isEqualTo(const MySet& other) const;
private:
// Data Members
	unsigned int range;
	int size;
	bool* set;
};

#endif
