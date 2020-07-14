#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

class geometricForm {
public:

    virtual void draw () = 0;

};

class Point {

public:

    Point () = default;
    Point(int x, int y):x(x),y(y){}

    int getX () {return x;}
    int getY () {return y;}


private:
    int x;
    int y;
};

class Circle : public geometricForm {
public:

    Circle (Point center, int r):center(center),r(r){}

    virtual void draw () override {
        cout << "go to X: " << center.getX()<< " and to Y: " << center.getY() << " using r: " << r << endl;
    }

private:
    Point center;
    int r;
};

class Rectangle : public geometricForm{
public:

    Rectangle(Point br, Point tl):bottomRight(br),topLeft(tl){}
    virtual void draw () override {
        cout << "go to bottomRight XY: " << bottomRight.getX()<< "," << bottomRight.getY(); 
        cout << " after to topLeft XY: " << topLeft.getX()<< "," << topLeft.getY() << endl; 
    }

private:
    Point bottomRight;
    Point topLeft;
    
};


void drawAll (vector<geometricForm *> vgf) {

    cout << "=== now printing all geometric forms ===" << endl;
    for (auto gf: vgf) {
        gf->draw();
        
    }
}


int main() {


    Point p1 (0,0);
    cout << p1.getX() << " " << p1.getY() << endl;

    Point p2 (10,20);
    cout << p2.getX() << " " << p2.getY() << endl;


    auto *c1 = new Circle(p1,10);
    c1->draw();

    auto *c2 = new Circle(p2,50);
    c2->draw();

    auto *r1 = new Rectangle(p2,p1);
    r1->draw();

    vector<geometricForm *> vgf = {c1,c2,r1};
    drawAll(vgf);

    return 0;
}