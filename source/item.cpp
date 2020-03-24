#include<item.hpp>

//
cItem::cItem() {
    mName = "";
    mCost = 0;
}

//
void cItem::setName (std::string name) {
    mName = name; 
}

//
void cItem::setCost (double cost) {
    mCost = cost;
}

//
std::string cItem::getCost () {
    return mName;
}

//
double cItem::getName() {
    return mCost;
}
