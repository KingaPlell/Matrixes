/*
 Created by: Kinga Plell
 Description: Inheritance of the Rectangle and the Triangle from Shape class
 */

#include <iostream>
#include "Shape.h"

using namespace std;

int main()
{
    //Rectangle
    int h = 6;
    int w = 5;
    Rectangle r(h,w);
    float ar = r.area();
    cout << "The area of the rectangle: "<< ar <<endl;
    float pr = r.periphery();
    cout << "The periphery of the rectangle: " << pr <<endl;

    //Triangle
    int s1 = 4;
    int s2 = 5;
    int s3 = 5;
    Triangle t (s1,s2,s3);
    float at = t.area();
    cout << "The area of the triangle: "<< at <<endl;
    float pt = t.periphery();
    cout << "The periphery of the triangle: " << pt <<endl;

}