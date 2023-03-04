#include <iostream>
using namespace std;
class Shape {
public:
  virtual void draw() {
    cout << "Drawing a shape." << endl;
  }
};

class Circle : public Shape {
public:
  void draw() {
    cout << "Drawing a circle." << endl;
  }
};

class Square : public Shape {
public:
  void draw() {
    cout << "Drawing a square." << endl;
  }
};

int main() {
  Shape* shape;

  shape = new Circle();
  shape->draw();

  shape = new Square();
  shape->draw();

  return 0;
}

