#include "order.hpp"


bool cOrder::addItem(std::string itemName) {
    std::shared_ptr<cItem> item = mDB->getItem(itemName);

    mOrderList.push_back(item);
}

bool cOrder::removeItem(std::string itemName) {
}

unsigned int cOrder::calculateGrossBill() {
}

void cOrder::applyDiscount(unsigned int discount) {
}
