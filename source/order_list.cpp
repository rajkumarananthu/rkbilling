#include<item.hpp>

//
cOrderList::cOrderList() {
}

//
void cOrderList::addToList (cItem& item) {
    mOrderList.push_back (std::move(item));
}

//
std::vector<cItem> cOrderList::getList () {
    return mOrderList;
}
