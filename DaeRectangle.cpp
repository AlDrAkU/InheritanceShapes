#include "stdafx.h"		
#include "DaeRectangle.h"
#include "utils.h"

DaeRectangle::DaeRectangle( const Point2f &center, float width, float height, const Color4f &color )
:DaeShape(center, width, height, color)
{
}

void DaeRectangle::Draw( )
{
	utils::SetColor( m_Color );
	utils::FillRect( Point2f{ m_Center.x - m_Width / 2,m_Center.y - m_Height / 2 }, m_Width, m_Height );
}

//void DaeRectangle::Translate( const Vector2f& tr )
//{
//	m_Center.x += tr.x;
//	m_Center.y += tr.y;
//}
