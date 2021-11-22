#pragma once

class Player
{
public:

	Player();

	void SetHealth(int health);
	void SetAttackPower(int attackPower);

	int GetHealth();
	int GetAttackPower();

	void Attack(const Player& otherPlayer);

private:

	int m_health;
	int m_attackPower;
	int m_attack;
};

