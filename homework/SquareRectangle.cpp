#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
    public:
    virtual float getArea()=0; //pure virtual function
    virtual float getPerimeter()=0;
};

//Here Shape class is an abstract class

class Rectangle:public Shape{
    private :
    float length;
    float breadth;
    public:
    Rectangle(float l=0,float b=0)
    {
        length=l;
        breadth=b;
    }
    void setLength(float l)
    {
        length=l;
    }
    void setBreadth(float b)
    {
        breadth=b;
    }
    float getLength()
    {
        return length;
    }
    float getBreadth()
    {
        return breadth;
    }
    //override pure virtual function
    float getArea()
    {
        return length*breadth;
    }
    float getPerimeter()
    {
        return 2*(length+breadth);
    }

};

class Square:public Shape
{
    private:
    float side;
    public:
    Square(float s=0)
    {
        side=s;
    }
    void setSide(float s)
    {
        side=s;
    }
    float getSide()
    {
        return side;
    }
    float getArea()
    {
        return side*side;
    }
    float getPerimeter()
    {
        return 4*side;
    }

};

class Triangle:public Shape{
    private:
    float s1;
    float s2;
    float s3;
    public:
    Triangle(int s1=0,int s2=0,int s3=0)
    {
        this->s1=s1;
        this->s2=s2;
        this->s3=s3;
    }
    void setSides(float s1,float s2,float s3)
    {
        this->s1=s1;
        this->s2=s2;
        this->s3=s3;
    }
    float getArea()
    {
        float s=(s1+s2+s3)/2;
        return sqrt(s*(s-s1)*(s-s2)*(s-s3));
    }
    float getPerimeter()
    {
        return s1+s2+s3;
    }
};

class Circle:public Shape{
    private :
    float radius;
    public:

    Circle(float r=0)
    {
        radius=r;
    }
    void setRadius(float r)
    {
        radius=r;
    }
    float getRadius()
    {
        return radius;
    }
    float getArea()
    {
        return M_PI*radius*radius;
    }
    float getPerimeter()
    {
        return 2*M_PI*radius;
    }
};

int compareByArea(Shape &s1,Shape &s2)
{
    float areaOfS1=s1.getArea();
    float areaOfS2=s2.getArea();
    if(areaOfS1==areaOfS2)
    return 0;
    else if(areaOfS1>areaOfS2)
    return 1;
    else
    return -1;
}

int main()
{
    Rectangle r(5,4);
    Square s(5);
    Circle c(5.5);

    int res=compareByArea(r,s);
    if(res==0)
    cout<<"Area of rectangle and square are same";
    else if(res==1)
    cout<<"area of rectangle is larger than square";
    else
    cout<<"area of square is larger than rectangle";


    return 0;

}
