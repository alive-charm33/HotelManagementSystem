// class room in this roomid,roomtype,price,available or not
//methods get roomid(),get roomtype(),get price(),is available() and set available(bool),display room()
#ifndef ROOM_H
#define ROOM_H
#include<string>
using namespace std;
class Room{
    private: 
        int roomid;
        string roomtype;
        double price;
        bool available;
    public:
        Room();
        Room(int id, string type, double price);
        int getRoomId() const;
        string getRoomType() const;
        double getPrice() const;
        bool isAvailable() const;
        void setAvailable(bool status);
        void displayRoom() const;

};
#endif