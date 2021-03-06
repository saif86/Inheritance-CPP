/**  Triangle class inherited from Shape class.
*
* #include "Triangle.h" <BR>
* -llib
*
*/
#ifndef TRIANGLE_H
#define TRIANGLE_H

// SYSTEM INCLUDES
#include<iostream>

// LOCAL INCLUDES
#include "Shape.h"

// Triangle class definition
class Triangle : public Shape {
public:

// LIFECYCLE
	/** Default + Overloaded constructor.
	*/
	Triangle(const string& = "white", int = 0, float = 0.0);

	// Use compiler-generated copy constructor, assignment, and destructor.
	// Triangle(const Triangle&);
	// Triangle& operator=(const Triangle&);
	// ~Triangle();


// OPERATIONS
	/** Pure virtual function that draws Triangle.
	*
	* @param void
	*
	* @return void
	*/
	void Draw();

	/** function that computes area of Triangle.
	*
	* @param void
	*
	* @return void
	*/
	void ComputeArea();


// ACCESS
	// setters
	void SetAngle(float = 0.0);
	void SetTriangle(const string& = "white", int = 0, float = 0.0);
	/**
	# @overload void SetTriangle(float = 0.0);
	*/
	void SetTriangle(float = 0.0);
	/**
	# @overload void SetTriangle(const Triangle& aTriangle);
	*/
	void SetTriangle(const Triangle& aTriangle);

	// getters
	float GetAngle()const;
	const Triangle& GetTriangle()const;

private:

	// DATA MEMBERS
	float mAngle;
};
// end class Triangle
#endif  
// _TRIANGLE_H_
