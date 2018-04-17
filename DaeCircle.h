#pragma once
#include "DaeEllipse.h"
#include "Vector2f.h"

class DaeCircle : public DaeEllipse
{
public:
	DaeCircle( const Point2f& center, float diameter, const Color4f& color, bool isFilled );

	/*void Draw( );*/
	/*void Translate( const Vector2f& tr );*/

//private: 
//	Point2f m_Center;
//	float m_Diameter;
//	Color4f m_Color;
//	bool m_IsFilled;
};

 
