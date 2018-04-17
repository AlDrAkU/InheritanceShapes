#include "stdafx.h"		
#include "DaeEllipse.h"
#include "utils.h"


DaeEllipse::DaeEllipse(const Point2f& center, float width, float height, const Color4f& color, bool isFilled )
: DaeShape(center,width,height,color)
, m_IsFilled{ isFilled }
{
}

void DaeEllipse::Draw( )
{
	utils::SetColor( m_Color );
	if ( m_IsFilled )
	{
		utils::FillEllipse( m_Center, m_Width / 2, m_Height / 2 );
	}
	else
	{
		utils::DrawEllipse( m_Center, m_Width / 2, m_Height / 2, 2.0f );
	}
}

//void DaeEllipse::Translate( const Vector2f& tr )
//{
//	m_Center.x += tr.x;
//	m_Center.y += tr.y;
//}
