#include "Gameobject.h"
#include <iostream>

GameObject::GameObject()
{

}
GameObject::~GameObject()
{
	
}
void GameObject::Draw()
{
	


	
}
void GameObject::Update(float deltaTime)
{
	


}
void GameObject::ApplyForce(const Vector2& force)
{
	
}
//getters for gameobject members

const Vector2& GameObject::GetPosition() const
{
	return m_position;
}
const Vector2& GameObject::GetVelocity() const
{
	return m_velocity;
}
const float& GameObject::GetFriction() const
{
	return m_friction;
}

//setters for the member variables

void GameObject::SetPosition(const Vector2& position)
{
	m_position = position;
}
void GameObject::SetVelocity(const Vector2& velocity)
{
	m_velocity = velocity;
}
void GameObject::SetFriction(const float& friction)
{
	m_friction = friction;
}
