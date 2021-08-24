#include "Shape.h"
#include "math.h"

Shape::Shape(){}

Rectangle::Rectangle(int h, int w)  : Shape(){
    height = h;
    width = w;
}
float Rectangle::area(){
    a = width*height;
    return a;
}
float Rectangle::periphery() {
    p = (width + height)*2;
    return p;
}

Triangle::Triangle(int s1, int s2, int s3) {
    side1 = s1;
    side2 = s2;
    side3 = s3;
}
float Triangle::area() {
    int s = (side1 + side2 + side3)/2;
    float help = s * ((s - side1)*(s - side2)*(s - side3));
    a = sqrt(help);
    return a;
}
float Triangle::periphery() {
    p = side1 + side2 + side3;
    return p;
}