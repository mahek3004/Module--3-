#include <iostream>
using namespace std;

// POP function
int areaRectangle(int l, int w) 
{
    return l * w;
}

// OOP class
class Rectangle 
{
    int l, w;
public:
    void set(int x, int y) 
	{ 
	   l = x; w = y; 
	}
    int area() 
	{
	 return l * w; 
	}
};

int main() 
{
    int length, width;
    cout << "Enter length & width: ";
    cin >> length >> width;

    // POP
    cout << "Area (POP) = " << areaRectangle(length, width) << endl;

    // OOP
    Rectangle r;
    r.set(length, width);
    cout << "Area (OOP) = " << r.area() << endl;

    return 0;
}

