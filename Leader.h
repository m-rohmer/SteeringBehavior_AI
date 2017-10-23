#ifndef LEADER_H
#define LEADER_H
#pragma warning (disable:4786)
//------------------------------------------------------------------------
//
//  Name:   Leader.h
//
//  Desc:   Definition of a leader véhicle that uses steering behaviors
//
//  Author: Mat Buckland 2002 (fup@ai-junkie.com)
//
//------------------------------------------------------------------------
#include "MovingEntity.h"
#include "2d/Vector2D.h"
#include "misc/Smoother.h"

#include <vector>
#include <list>
#include <string>

#include "Vehicle.h"

class GameWorld;
class SteeringBehavior;

class Leader : public Vehicle
{
public:
	explicit Leader(GameWorld* world,
         Vector2D position,
         double    rotation,
         Vector2D velocity,
         double    mass,
         double    max_force,
         double    max_speed,
         double    max_turn_rate,
         double    scale) 
		 : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale) { };
	
	void setScale(double s){scale_ = s;}

private:
	double scale_;

};




#endif