#ifndef RK_ITEM_HPP
#define RK_ITEM_HPP

#include<string>

// a class that describe an the item, that can be purchased from the store
class cItem {
    private:
        // to store the name of an item
        std::string mName;
	// to store the cost of an item
        double mCost;
    public:
	//
	cItem();
	//
	void setName (std::string name);
	//
	void setCost (double cost);
	//
	std::string getName();
	//
	double getCost();
};

#endif // RK_ITEM_HPP
