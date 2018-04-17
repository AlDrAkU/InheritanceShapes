#pragma once
#include "Vector2f.h"

class DaeRectangle : public DaeShape
{
public:
	DaeRectangle( const Point2f& center, float width, float height, const Color4f& color );
	void Draw( );
	/*void Translate( const Vector2f& tr );*/

//protected: 
//	Point2f m_Center;
//	float m_Width;
//	float m_Height;
//	Color4f m_Color;
};

 
