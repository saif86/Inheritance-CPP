#include "Line.h"  // class implemented
#include<string>
using namespace std;

// File scope starts here 

/////////////////////////////// PUBLIC ///////////////////////////////////////

//============================= LIFECYCLE ====================================

// Line Default+Overloaded Constructor
Line::Line(const string& aColor, int aCoord, float aLength) : Shape(aColor, aCoord), mLength(aLength) {
	this->SetLine(aColor, aCoord, aLength);
}
// end Line constructor 


//============================= OPERATIONS ===================================
// Pure virtual function that draws Line.
void Line::Draw() {
	cout << "Drawing a line of length " << this->GetLength() << " in " << this->GetColor() << " color." << endl;
}
// end function Draw



//============================= ACESS      ===================================

// function that sets length of Line
void Line::SetLength(float aLength) {
	if (aLength < 0.0)
		cout << "Error: Length cannot be nagative." << endl;
	else
		this->mLength = aLength;
}
// end function SetLength

// function that sets Line
void Line::SetLine(const string& aColor, int aCoord, float aLength) {
	this->SetShape(aColor, aCoord);
	this->SetLine(aLength);
}
// end function SetLine

// overloaded function that sets the Line
void Line::SetLine(float aLength) {
	this->SetLength(aLength);
}
// end function SetLine

// overloaded function that sets the Line
void Line::SetLine(const Line& aLine) {
	this->SetLine(aLine.GetColor(), aLine.GetCoord(), aLine.GetLength());
}
// end function SetLine

// function that gets length of Line
float Line::GetLength()const {
	return this->mLength;
}
// end function GetLength

// function that gets the Line
const Line& Line::GetLine()const {
	return *this;
}
// end function GetLine
