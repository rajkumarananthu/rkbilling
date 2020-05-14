#ifndef RK_ITEM_HPP
#define RK_ITEM_HPP

#include<string>
#include "common_includes.hpp"

// a class that describe an the item, that can be purchased from the store
// an item has following properties
// - name
// - type of item (veg/non-veg)
// - cost of item
// - tax on item
// - any discount on item
class cItem {
    private:
    // to store the name of an item
    std::string mName;

	// to store the cost of an item
    // can't be -ve
    unsigned int mCost;

	// to store tax on item, expressed as percentage
    // can't be -ve
	unsigned float mTax;

	// to store discount on item, expressed as percentage
    // can't be -ve
	unsigned int mDiscount;

    // type of the item veg/non-veg
    eItemType mItemType;

    public:
	// default constructor
	cItem() = default; // will not use this

    // parameter constructor
    cItem (std::string name, unsigned int cost,
           unsigned float tax, eItemType itemType, unsigned int discount = 0) {
        mName = name;
        mCost = cost;
        mTax = tax;
        mDiscount = discount;
        mItemType = itemType;
    }

    void setDiscount (unsigned int discount) {
        mDiscount = discount;
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
	unsigned float tax() const {
        return mTax;
    }

    //
    unsigned int discount() const {
        return mDiscount;
    }

    //
    unsigned float billValue() const ;

    //
    unsigned float taxValue() const;

    //
    unsigned float discountValue() const;
};

#endif // RK_ITEM_HPP
