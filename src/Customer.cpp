#include "Customer.h"
#include<iostream>
using namespace std;
//customr class implementation
Customer::Customer(){
    customer_id = 0;
    name = "";
    email = "";
    phone = "";
    address = "";
}
//constructor here to initialize the customer detailes
Customer::Customer(int id,string name,string email,string phone,string address){
    customer_id=id;
    this->name=name;
    this->email=email;
    this->phone=phone;
    this->address=address;
}
//method get customer id
int Customer::getCustomerId() const{
    return customer_id;
}
//method to get customer name 
string Customer::getName() const{
    return name;
}
//customer email
string Customer::getEmail()const{
    return email;
}
//customer phone
string Customer::getPhone() const{
    return phone;
}
//address 
string Customer::getAddress()const{
    return address;
}
void Customer::displayCustomer()const{
    cout<<"Customer ID: "<<customer_id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Phone: "<<phone<<endl;
    cout<<"Address: "<<address<<endl;
}