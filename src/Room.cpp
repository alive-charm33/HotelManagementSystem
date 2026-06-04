#include"Room.h"
#include<iostream>
using namespace std;
// implementation of room class
Room::Room(){
    roomid = 0;
    roomtype = "";
    price = 0.0;
    available = true;
}
//constructor to initialize room details
Room::Room(int id, string type, double price){
    roomid = id;
    roomtype = type;
    this->price = price;
    available = true;
}
//get room id
int Room::getRoomId() const{
    return roomid;
}
//get room type
string Room:: getRoomType()const{
    return roomtype;
}
double Room::getPrice() const{
    return price;
}
// room available or not
bool Room::isAvailable() const{
    return available;
}
//set room available or not
void Room::setAvailable(bool status){
    available = status;
}
//display information of room
void Room::displayRoom() const{
    cout << "Room ID: " << roomid << endl;
    cout << "Room Type: " << roomtype << endl;
    cout << "Price: ₹ " << price << endl;
    if(available){
        cout<<"Status:Available"<<endl;
    }else{
        cout<<"Status:Booked"<<endl;
    }
}