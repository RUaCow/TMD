#ifndef ShApE_h
#define ShApE_h
#include <vector>
#include "Vector2D.h"


class Shape
{
	friend class Map;
	//The shape number.
	int n;
	//Points (First point in this vector is also the last point ==> It is always a closed shape.)
	vector<Vector2Df> points;
	//Shapes inside this shape.They can vary in COF or simpily they can be holes(COF == -1).
	vector<Shape> shapes;
	//Center of Shape
	Vector2Df center;
	//COF (It will be -1 if the shape is a hole)
	const float COF;
	//Calculates center of the shape.
	void centerCalc(void);

public:
	//constructor
	Shape(int num , vector<Vector2Df> points , float mCOF);
	//Add a shape into this shape.
	void addShape(vector<Vector2Df> spoints , float sCOF = -1.0f);
	//Get the points info just for drawing.
	const vector<Vector2Df>& getPoints(void) const;
	const vector<Shape>& getInsideShapes(void) const;
	//destructor
	~Shape(void);
	Shape& operator=(Shape const&);
};


#endif
