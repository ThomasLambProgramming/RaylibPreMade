#pragma once
#include "raymath.h"
class Behaviour;
class GameObject
{
public:
	GameObject();
	virtual ~GameObject();

	virtual void Update(float deltaTime);
	virtual void Draw();
	virtual void ApplyForce(const Vector2& force);

	//getters for gameobject members
	const Vector2& GetPosition() const;
	const Vector2& GetVelocity() const;
	const float& GetFriction() const;

	//setters for the member variables

	void SetPosition(const Vector2& position);
	void SetVelocity(const Vector2& velocity);
	void SetFriction(const float& friction);

protected:
	Vector2 m_position = { 0.0f, 0.0f };
	Vector2 m_velocity = { 0.0f, 0.0f };
	Vector2 m_accleration = { 0.0f, 0.0f };

	float maxSpeed = 150;
	float m_friction = 0.0f;
	
private:

};