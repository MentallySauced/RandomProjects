#include <iostream>
#include <cmath>

using namespace std;

// Create point structure
struct Point{
    float x;
    float y;
};

// Function to calculate distance between 2 points
float calculateDistance(Point *coordinate1, Point *coordinate2){
    
    // Using formula root((x2 - x1)^2 + (y2 - y1)^2)
    return sqrt(pow((coordinate2 -> x - coordinate1 -> x), 2) + pow((coordinate2 -> y - coordinate1 -> y), 2));
}

int main()
{
    // Create both point objects
	Point p1;
	Point p2;
	
	cout << "Enter points in this format: 1 1\n";
	// Take in users first point, assign values accordingly to x and y
	cout << "Enter first point: ";
	cin >> p1.x >> p1.y;
	
	// Take in users second point, assign values accordingly to x and y
	cout << "Enter second point: ";
	cin >> p2.x >> p2.y;
	
	// Print distance
	cout << "Distance between these 2 points is: " << calculateDistance(&p1, &p2);
	
	return 0;
}