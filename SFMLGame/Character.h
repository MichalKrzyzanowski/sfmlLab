#ifndef CHARACTER_H
#define CHARACTER_H

#include <SFML/Graphics.hpp>
class Character
{
public:
	Character();
	~Character();
	void initialize();
	void update();
	void draw();

	sf::Sprite m_sprite;
	sf::Texture m_texture;
};
#endif