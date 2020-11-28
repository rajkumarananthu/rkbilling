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


Items Table attributes: (Based in the usage)
- ItemId(primary key, unique for each item) - UNSIGNED INT
- Item Name (string) - VARCHAR(100)
- Item Cost (float/double) - UNSIGNED INT
- Item type (Veg/Non-veg) - VARCHAR(1)

Order Table attributes:
- OrderId (primary key, unique for each order) - INT NOT NULL AUTO_INCREMENT PRIMARY KEY
- Order Type (Online/ Dine-in) - VARCHAR(20) 
- Customer Id(Foreign key to customers) - INT NOT NULL FORIEGN KEY to customers table
- Gross Bill Value (float)(Sum of costs) - DOUBLE NOT NULL
- Net Bill Value (float/double)(Gross bill - discounts) - DOUBLE NOT NULL
- tax Value (float/double)(tax percentage) - INT
- discount value (float/double)(discount percentage) - INT 
- Cashier (Foreign key to Users table) - INT NOT NULL FORIEGN KEY

OrderItems Table attributes:
- Item Id (foriegn key to items table) - INT NOT NULL FORIEGN KEY
- order id (foreign key to orders table) - INT NOT NULL FORIEGN KEY
- count (integer)(if value is NULL, consider it as 1) - INT

Employees Table attributes:
- Userid (unique id of the user, PRIMARY KEY) - INT NOT NULL AUTO_INCREMENT PRIMARY KEY
- Name (Full Name of the user)(Full Name) - VARCHAR(100) NOT NULL
- Password (encrypted using any encrypted algorithm so that we can provide security) - Will use some standard hash generation algorithms, VARCHAR(256) NOT NULL
- Gender (Male/Female/Others) - VARCHAR(1) NOT NULL
- Age (integer) - INT
- Marital Staus (married/un-married/divorced) - VARCHAR(1) 
- DOB of User - DATE

Customer Table attributes:
- Customer Id - INT NOT NULL AUTO_INCREMENT PRIMARY KEY
- Customer Name - VARCHAR(100) 
- Customer Mobile Number - INT NOT NULL
- DOB of Customer - DATE 
