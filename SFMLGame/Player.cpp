#include <Player.h>

Player::Player() { initialize(); };
Player::~Player(){};

void Player::initialize()
{
	cout << "Player initialize" << endl;

	if (!m_texture.loadFromFile("017_Png.png"))
	{
		//error
	}

	m_sprite.setTexture(m_texture);
	m_sprite.setScale(0.2, 0.2);
}
void Player::update()
{
	cout << "Player updating" << endl;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		m_sprite.move(m_speed, 0);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		m_sprite.move(-m_speed, 0);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		m_sprite.move(0, -m_speed);
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		m_sprite.move(0, m_speed);
	}
}
void Player::draw(sf::RenderWindow * t_window)
{
	cout << "Player drawing" << endl;
	t_window->draw(m_sprite);
}