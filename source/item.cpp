#include<item.hpp>
#include "item.hpp"

// calculate the total bill value of the item
// and return it to the calling function
unsigned float cItem::getBillValue () const {
    unsigned float billValue;
    
    billValue = mCost - ( float(mCost * mDiscount) / 100 );
    billValue = billValue - ( float(billValue * mTax) / 100 );

    return billValue;
}
