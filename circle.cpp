#include <iostream>
#include <cmath>   
#include <string>
using namespace std;

enum Colours {green, red, white, yellow, orange, pink, blue, black};

const double PI = 3.14159;
class Circle
{
public:
        Circle();
	static void SetData1(double rad, double x, double y);
        void SetData2(double rad, double x, double y);
        double getRadius();
        void setRadius(double rad);
        double getCentreX();
        double getCentreY();
        void setCentre(double x, double y);
        double getLength();
        double getSquare();     
	double getData1x();
	double getData1y();
	double getData1rad();
        
private:
        double radius;
        struct Centre
        {
            double x;
            double y;   
        };
        Centre centre;      
        
}; double xx, yy, rr;

class ColourCircle : public Circle
{
public:
	void GetColour();
	void SetColour();
	void ChangeColour(int i);
	Colours col;
};

void ColourCircle::SetColour()
{
	col = black;
	cout << "The default colour is black" << endl;
}

void ColourCircle::GetColour()
{
		switch (col)
	{
		case green:
	cout << "The circle's colour is green" << endl;
		break;
		case red:
	cout << "The circle's colour is red" << endl;
		break;
		case white:
	cout << "The circle's colour is white" << endl;
		break;
		case yellow:
	cout << "The circle's colour is yellow" << endl;
		break;
		case orange:
	cout << "The circle's colour is orange" << endl;
		break;
		case pink:
	cout << "The circle's colour is pink" << endl;
		break;
		case blue:
	cout << "The circle's colour is blue" << endl;
		break;
		case black:
	cout << "The colour stayed the same" << endl;
		break;
	}
}

void ColourCircle::ChangeColour(int i)
{
	switch (i)
	{
		case 1:
		col = green;
		break;
		case 2:
		col = red;
		break;
		case 3:
		col = white;
		break;
		case 4:
		col = yellow;
		break;
		case 5:
		col = orange;
		break;
		case 6:
		col = pink;
		break;
		case 7:
		col = blue;
		break;
		default:
		col = black;
		break;
	}
}

Circle::Circle() //РєРѕРЅСЃС‚СЂСѓРєС‚РѕСЂ
{
    radius = 1;
    centre.x = 0;
    centre.y = 0;   
}

// СЃС‚Р°С‚РёС‡РµСЃРєР°СЏ С„СѓРЅРєС†РёСЏ
void Circle::SetData1(double rad, double x, double y)
{
    xx = x;
    yy = y;
    rr = rad;
}

void Circle::SetData2(double rad, double x, double y)
{
    radius = rad;
    centre.x = x;
    centre.y = y;   
}
double Circle::getRadius()
{
    return radius;
}
double Circle::getCentreX()
{
    return centre.x;
}

double Circle::getData1x()
{
    return xx;
}

double Circle::getData1y()
{
    return yy;
}

double Circle::getData1rad()
{
    return rr;
}

double Circle::getCentreY()
{
    return centre.y;
}
void Circle::setRadius(double rad)
{
    radius = rad;   
}
void Circle::setCentre(double x, double y)
{
    centre.x = x;
    centre.y = y;   
}
double Circle::getLength()
{
    return 2*PI*radius;
}
double Circle::getSquare()
{
    return PI*pow(radius,2);    
}
 
 
    
 
int main()
{
	double x,y,r;
	int i;
	ColourCircle TsvetKruga;
	Circle krug;
      cout << "Enter the radius:";
  cin >> r;
    cout << "Enter x:";
  cin >> x;
    cout << "Enter y:";
  cin >> y;
    krug.SetData2(r, x, y);
    cout << "The circle's length is: " << krug.getLength()<<endl;
    cout << "The circle's area is: " << krug.getSquare()<<endl;
    cout << "The circle's equation is: " << "(x-"<< krug.getCentreX()<<")^2 + (y-"<< krug.getCentreY() <<")^2 = " << pow(krug.getRadius(),2) <<endl;
    krug.setCentre(0,0);
    krug.setRadius(100);
    cout << "The circle's length with radius " << "(" << krug.getRadius() << ") equals: " << krug.getLength()<< endl;
    cout << "The circle's area with radius " << "(" << krug.getRadius() << ") equals: " << krug.getSquare()<<endl;
    krug.SetData1(1,1,1);
    cout << "xx = " << krug.getData1x()<<endl;   
    cout << "yy = " << krug.getData1y()<<endl;  
    cout << "rr = " << krug.getData1rad()<<endl;  
    TsvetKruga.SetColour();
    cout << "Enter a new colour's number: " << endl;
    cin >> i;
    TsvetKruga.ChangeColour(i);
    TsvetKruga.GetColour();
    return 0;   
}
