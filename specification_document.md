##### SPECIFICATION DOCUMENT FOR RKBILLING SOFTWARE

##### --> Objective:
A billing software that can be used in a restaurent/grocery store etc., I got this idea because I once was an owner for a food store which is basically a franchise. As per the franchise guidelines, we have to use a paid billing software. Then I decided to write my own billing software, so that in future businesses I can use my own software so that I can reduce that amount in my monthly expenses.

Later I thought that it may help some one in need. So making it opensource.


##### --> Features:
- Can add/change items to the menu
- Can add/change price to the menu
- Can add/change discounts in the store
- etc.,


##### --> Plan:
- First to develop the skeleton(working project in command line)
- Then we can add the graphical interface for easier navigation.


##### --> Working:
We will have a DB (I am using mysql DB in my case) for each store (we can centralize the DB that’s upto us/ for now I will design keeping in mind that for each store having a database). We will save the items and its details that are available at the counter/store in the DB. When a customer orders an item, we will get the data from DB and calculate the bill and store the bill details back in the DB.


##### --> Architecture:


GUI ----------------->   Common Code    <---->   DB
gui_code ------------->  billing_if     <------> db_if

Common Code will handle the data insertion and data extraction from DB and handle the processed data to GUI.


Items Table attributes
- ItemId(primary key, unique for each item)
- Item Name (string)
- Item Cost (float/double)
- Item Discount (float/double)
- Item type (Veg/Non-veg)

Order Table attributes:
- OrderId (primary key, unique for each order)
- Order Type (Online/ Dine-in)
- Customer Id(Foreign key to customers)
- Gross Bill Value (float)
- Net Bill Value (float/double)
- tax Value (float/double)
- discount value (float/double)
- Cashier (Foreign key to Users table)

OrderItems Table attributes:
- Item (foriegn key to items table)
- order id (foreign key to orders table)
- count (integer)

Users Table attributes:
- Userid (unique id of the user, PRIMARY KEY)
- Name (Full Name of the user)
- Password (encrypted using any encrypted algorithm so that we can provide security)
- Gender (Male/Female/Others)
- Age (integer)
- Marital Staus (married/un-married/divorced)

Customer Table attributes:
- Customer Id
- Customer Name
- Customer Mobile Number
- DOB of Customer
