#include <iostream>
using namespace std;
#include <string>

class Car {
    private:
        string brand, model;
        float price;
        int mileage;

    public:
        Car(string a, string b, float c, int d) {
            brand = a;
            model = b;
            price = c;
            mileage = d;
            
        }

        void display() {
            cout<<"Car brand: "<<brand<<endl;
            cout<<"Car model: "<<model<<endl;
            cout<<"Car price: Ksh "<<price<<endl;
            cout<<"Car mileage: "<<mileage<<endl;

        }

        void drive(int distance) {
            mileage += distance;

            cout<<"\nYou've driven "<<distance<<"km."<<endl;
            cout<<"Updated mleage: "<<mileage<<endl;
        }
};

int main (){
    Car car1("Toyota", "Corolla", 20000, 5000);

    car1.display();
    car1.drive(150);
    car1.drive(300);

    return 0;

}
