#include <iostream>
#include <string>
using namespace std;
class Pen {
private:
 string color;
 double price;
public:
 Pen(string c, double p) : color(c), price(p) {}
 Pen() : color("Black"), price(10) {}

 Pen& setColor(string newColor) {
    color = newColor;
    return *this;
 }
 Pen& setPrice(double newPrice) {
    price = newPrice;
    return *this;
}
 void display() const {
    cout << "Color: " << color << endl;
    cout << "Price: $" << price << endl;
 }
};
int main() {
 // Case 1: Default Pen
 Pen myDefaultPen;
 cout<< "The pen information: " << endl;
 myDefaultPen.display();
 // Case 2: A pen with configuration
 Pen myPen("Blue", 1.5);
 cout<<endl;
 cout<< "The pen information: " << endl;
 myPen.display();

 // Case 3: Modify the pen via method chaining
 cout<<endl;
 cout<< "The pen information: " << endl;
 myPen.setColor("Red")
 .setPrice(2.0)
 .display();
 return 0;
}