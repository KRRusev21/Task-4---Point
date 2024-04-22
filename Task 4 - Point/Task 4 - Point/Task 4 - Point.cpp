#include <iostream>
using namespace std;
class Point {
private:
    int xCoordinate, yCoordinate, zCoordinate;

public:
    Point(int x = 0, int y = 0, int z = 0) {
        xCoordinate = x;
        yCoordinate = y;
        zCoordinate = z;
    }

    Point( Point& point) {
        xCoordinate = point.xCoordinate;
        yCoordinate = point.yCoordinate;
        zCoordinate = point.zCoordinate;
    }

    int getXCoordinate() {
        return xCoordinate; 
    }
    int getYCoordinate() {
        return yCoordinate; 
    }
    int getZCoordinate() {
        return zCoordinate; 
    }

    void setXCoordinate(int newX) {
        xCoordinate = newX; 
    }
    void setYCoordinate(int newY) {
        yCoordinate = newY; 
    }
    void setZCoordinate(int newZ) {
        zCoordinate = newZ; 
    }
};

int main() {
    Point firstPoint(1, 2, 3);
    Point secondPoint(4, 5, 6);
    Point defaultPoint;

    cout << "First Point: (" << firstPoint.getXCoordinate() << ", " << firstPoint.getYCoordinate() << ", " << firstPoint.getZCoordinate() << ")" << endl;
    cout << "Second Point: (" << secondPoint.getXCoordinate() << ", " << secondPoint.getYCoordinate() << ", " << secondPoint.getZCoordinate() << ")" << endl;
    cout << "Default Point: (" << defaultPoint.getXCoordinate() << ", " << defaultPoint.getYCoordinate() << ", " << defaultPoint.getZCoordinate() << ")" << endl;

    defaultPoint.setXCoordinate(7);
    defaultPoint.setYCoordinate(8);
    defaultPoint.setZCoordinate(9);

    cout << "Modified Default Point: (" << defaultPoint.getXCoordinate() << ", " << defaultPoint.getYCoordinate() << ", " << defaultPoint.getZCoordinate() << ")" << endl;

    Point fourthPoint = firstPoint;
    fourthPoint.setXCoordinate(fourthPoint.getXCoordinate() + 1);
    fourthPoint.setYCoordinate(fourthPoint.getYCoordinate() + 2);
    fourthPoint.setZCoordinate(fourthPoint.getZCoordinate() + 3);

    cout << "Fourth Point: (" << fourthPoint.getXCoordinate() << ", " << fourthPoint.getYCoordinate() << ", " << fourthPoint.getZCoordinate() << ")" << endl;
}