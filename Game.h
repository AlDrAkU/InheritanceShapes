#pragma once
#include <vector>

class  DaeEllipse;
class  DaeRectangle;
class  DaeCircle;
class  DaeRectLabel;

class Game
{
public:
	explicit Game( const Window& window );
	Game( const Game& other ) = delete;
	Game& operator=( const Game& other ) = delete;
	~Game();

	void Update( float elapsedSec );
	void Draw( );

	// Event handling
	void ProcessKeyDownEvent( const SDL_KeyboardEvent& e );
	void ProcessKeyUpEvent( const SDL_KeyboardEvent& e );
	void ProcessMouseMotionEvent( const SDL_MouseMotionEvent& e );
	void ProcessMouseDownEvent( const SDL_MouseButtonEvent& e );
	void ProcessMouseUpEvent( const SDL_MouseButtonEvent& e );

private:
	// DATA MEMBERS
	Window m_Window;
	std::vector< DaeEllipse* > m_pEllipses;
	std::vector< DaeRectangle* > m_pRectangles;
	std::vector< DaeCircle* > m_pCircles;
	std::vector< DaeRectLabel* > m_pRectLabels;
	const float m_TransSpeed{ 100.0f }; // pixels per second
	TTF_Font *m_pFont;

	// FUNCTIONS
	void Initialize( );
	void Cleanup( );
	void ClearBackground( );

	void OpenLabelFont( );
	void CloseLabelFont( );
	void CreateShapes( );
	void DeleteShapes( );
	void DrawShapes( );
	void MoveShapes( float elapsedSec );
};