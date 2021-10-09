/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<string.h>

using namespace std;

class elecbill
{
  private:
    long int c_no;
    char c_name[50];
    char c_type[20],b_month[10];
    char c_type1[20] = "Commercial";
    char c_type2[20] = "Non_Commercial";
    long int CMR,LMR,units;
    float bill;
     
  public:
    

    void readData()
      {
        cout <<"\n\nEnter Consumer type: ";
        cin >> c_type;
        cout<<"Enter Customer Name: ";
        cin.ignore();
        cin.getline(c_name,50);
        cout<<"Enter Customer No.: ";
        cin>>c_no;
        cout << "Enter bill month: ";
        cin >> b_month;
        cout << "Enter current meter reading: ";
        cin >> CMR;
        cout << "Enter last meter reading: ";
        cin >> LMR;

        units = CMR - LMR;
      
      }

      
    void printBill()
      {
        cout<<"\nThe details of the customer are:- ";
        cout<< "\n\nConsumer Type: "<<c_type;
        cout<<"\nCustomer Name : "<<c_name;
        cout<<"\nCustomer No. : "<<c_no;
        cout << "\nBill month: "<< b_month;
        cout << "\nCurrent meter reading: "<< CMR;
        cout <<"\nLast meter reading: "<< LMR;
        cout<<"\nNumber of Units Consumed this month : "<<units;
        cout<<"\n\nAmount to pay : "<<bill;
      }
      
      
    void calculateBill()
     {
       if(strcmp (c_type,c_type1) ==0)
        {
          if(units<= 200)
            bill=units*5;
          else if(units > 200)
            bill=200*5+(units-200)*10;
          else
           cout << "Enter valid no.";
       }
        else if(strcmp(c_type,c_type2) ==0)
         {
            if(units<= 100)
              bill=units*3;
            else if(units> 100)
              bill=100*3+(units-100)*5;
            else
              cout << "Enter valid no.";

          }
         }
};
int main()
{
  cout << "\n\n**Please Enter cosumer type as Commercial or Non_Commercial** ";
    elecbill B;
    B.readData();
    B.calculateBill();
    B.printBill();

    return 0;
}

