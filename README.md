# OOP_lab4

Problem statement: Electricity board wants to generate the monthly electricity bills for their consumers based on electricity units consumed. They apply following conditions to calculate the bill as per type of the consumer. 
1.	If Consumer type is “Commercial” then 5 Rs. per unit till first 200 units, after that 10 Rs. per unit for remaining units.  
2.	If Consumer type is “Non-commercial” then 3 Rs. per unit till first 100 units, after that 5 Rs. per unit for remaining units.  
Following data members are used as consumer information. 
1.	Consumer name (50 characters)
2.	Consumer number (long int, - 6 digits)
3.	Consumer type (15 characters)
4.	Current Meter Reading (long int)
5.	Last Meter Reading (long int)
6.	Bill month (character 10)
7.	Amount to pay
Following member functions will be used to perform this task
1.	readData() – will read the data for all the consumers
2.	calculateBill() – will calculate bill with conditions mentioned above
3.	printBill() – will display the consumer information with amount
Write main () function to implement the class and perform the operation.
