#include <NPC.h>

NPC::NPC() { initialize(); };
NPC::~NPC(){};

void NPC::initialize()
{
	cout << "NPC initialize" << endl;

	if (!m_texture.loadFromFile("016_Png.png"))
	{
		//error
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setScale(0.2, 0.2);
}
void NPC::update()
{
	cout << "NPC updating" << endl;
}
void NPC::draw(sf::RenderWindow* t_window)
{
	cout << "NPC drawing" << endl;
	t_window->draw(m_sprite);
}