#pragma once
#include <graphics.h>

class Scene//����Ϊһ�����࣬Ϊ����������ʵ�����ĳ��������ṩģ��
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
