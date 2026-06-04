#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<string>
using namespace std;
class Customer{
    private:
        int customer_id;
        string name;
        string email;
        string phone;
        string address;
    public:
        Customer();
        Customer(int id,string name,string email,string phone,string address);
        //get customer id
        int getCustomerId() const;
        //get customer name 
        string getName() const;
        //get customer email
        string getEmail() const;
        //get customer phone
        string getPhone() const;
        //get customer address
        string getAddress() const;
        //display customer information
        void displayCustomer() const;
};
#endif