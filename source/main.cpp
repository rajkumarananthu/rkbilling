#include "db_if_singleton.hpp"
#include "common.hpp"


int main (void) {

    std::shared_ptr<cDBSingleton> db = cDBSingleton::getInstance();

    db->refreshItemList();
    db->printItemList();
}
