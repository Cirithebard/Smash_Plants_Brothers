#pragma once
#include <graphics.h>

class Scene//被视为一个基类，为其他的用于实例化的场景子类提供模板
{
public:
	Scene()
	{
		
	}

	~Scene()
	{

	}

	virtual void on_enter() {}
	virtual void on_update() {}
	virtual void on_draw() {}
	virtual void on_input(const ExMessage& msg) {}
	virtual void on_exit() {}


private:

};
