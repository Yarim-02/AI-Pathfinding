#pragma once
#ifndef __BACKGROUND__
#define __BACKGROUND__
#include "DisplayObject.h"
#include "TextureManager.h"

class Background final : public DisplayObject
{
public:
	// constructor(s)
	Background();

	// destructor
	~Background();

	// life-cycle methods inherited from DisplayObject
	void draw() override;
	void update() override;
	void clean() override;
};

#endif 