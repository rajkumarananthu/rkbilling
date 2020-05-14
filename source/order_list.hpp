#ifndef RK_ORDER_LIST_HPP
#define RK_ORDER_LIST_HPP

#include<vector>


// forward declarations
class cItem;

// class for the Order list, this will have items that are ordered by
// customers, on the completion of order we will use this to
// print/calculate the total order value
class cOrderList {
    private:
        std::vector< std::shared_ptr<cItem> > mOrderList;
    public:
	//
	cOrderList() = default;
	//
	~cOrderList() = default;
        // 
	void add(cItem& item);
	//
	std::vector<cItem> get();
	// 
	int netBill();
	//
	double netTax();
	//
	double grossBill();
	//
	bool confirmOrder();
};
#endif // RK_ORDER_LIST_HPP
