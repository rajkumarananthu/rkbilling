class Order:
    def __init__(self):
        self.mOrderList = {};
        self.mDiscount = 0;
        self.mGrossBill = 0;
        self.mNetBill = 0;
        self.mTax = 5;
        # self.mDB = get DB singleton from db.py

    def addItem(self, itemName):
        # add the item name to the order list

    def removeItem(self, itemName):
        # remove the item name to the order list

    def calcGrossBill(self):
        # calculate the gross bill based on the items in the order list
        
    def applyDiscount(self, discount):
        # apply discount to the gross bill and set it as net bill
