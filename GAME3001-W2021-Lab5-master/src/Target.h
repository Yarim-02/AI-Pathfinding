#pragma once
#ifndef __TARGET__
#define __TARGET__


#include "NavigationObject.h"

class Target final : public NavigationObject
{
public:
	Target();
	~Target();

	// Inherited via GameObject
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

	
private:
	void m_move();
	void m_checkBounds();
	void m_reset();

};


#endif /* defined (__TARGET__) */