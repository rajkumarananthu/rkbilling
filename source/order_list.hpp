#ifndef RK_ORDER_LIST_HPP
#define RK_ORDER_LIST_HPP

#include "common.hpp"


// forward declarations
class cItem;

// class for the Order list, this will have items that are ordered by
// customers, on the completion of order we will use this to
// print/calculate the total order value
class cOrderList {
    private:
        ItemList mOrderList;

    public:
    
	//
	cOrderList() = default;

	//
	~cOrderList() = default;

    // 
	void add(std::shared_ptr<cItem> item);

	//
	ItemList get();

	//
	bool confirmOrder();
};
#endif // RK_ORDER_LIST_HPP
