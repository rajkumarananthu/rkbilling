#ifndef RK_ITEM_HPP
#define RK_ITEM_HPP

#include<string>
#include "common.hpp"

// a class that describe an the item, that can be purchased from the store
// an item has following properties
// - name
// - type of item (veg/non-veg)
// - cost of item
class cItem {
    private:
    // to store the name of an item
    std::string mName;

	// to store the cost of an item
    // can't be -ve
    unsigned int mCost;

    // this is the discount specific to an item
    unsigned int mDiscount;

    // type of the item veg/non-veg
    eItemType mItemType;

    public:
	// default constructor
	cItem() = default; // will not use this

    // parameter constructor
    cItem (std::string name, unsigned int cost, eItemType itemType, unsigned int discount = 0) {
        mName = name;
        mCost = cost;
        mDiscount = discount;
        mItemType = itemType;
    }

	//
	std::string name() const {
        return mName;
    }

	//
	unsigned float cost() const {
        return mCost;
    }

    //
    std::string itemType() const {
        return (mItemType == NON_VEG) ? "Non-Vegetarian" : "Vegetarian";
    }

    //
    unsigend int discount() const {
        return mDiscount;
    }

};

#endif // RK_ITEM_HPP
