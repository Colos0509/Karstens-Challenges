#include "Player.h"

Player::Player()
{
	m_health = 100;
	m_attackPower = 20;
}

void Player::SetHealth(int health)
{
	 m_health = health;
}

void Player::SetAttackPower(int attackPower)
{
	m_attackPower = attackPower;
}

int Player::GetHealth()
{
	return m_health;
}

int Player::GetAttackPower()
{
	return m_attackPower;
}

void Player::Attack(const Player& otherPlayer)
{

}
