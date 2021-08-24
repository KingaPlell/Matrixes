#ifndef OOP_SHAPE_H
#define OOP_SHAPE_H

class Shape{
public:
    float a, p;
    virtual float area() = 0;
    virtual float periphery() = 0;
    Shape();
};

class Rectangle : public Shape{
public:
    int height, width;
    Rectangle(int h, int w);
    float area() override;
    float periphery() override;
};

class Triangle : public Shape{
public:
    int side1, side2, side3;
    Triangle(int s1, int s2, int s3);
    float area() override;
    float periphery() override;
};


#endif //OOP_SHAPE_H
