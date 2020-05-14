#include<item.hpp>
#include "item.hpp"

// calculate the total bill value of the item
// and return it to the calling function
unsigned float cItem::billValue () const {
    unsigned float billValue;
    
    billValue = mCost - getDiscountValue();
    billValue = billValue + getTaxValue();

    return billValue;
}

//
unsigned float cItem::taxValue () const {

    return ( float(mCost * mTax) / 100 );
}

//
unsigned float cItem::discountValue() const {

    return ( float(mCost * mDiscount) / 100 );
}
