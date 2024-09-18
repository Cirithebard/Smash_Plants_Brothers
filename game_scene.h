#pragma once
#include "scene.h"
#include <iostream>

extern SceneManager scene_manager;

class GameScene :public Scene					//非常重要的共享类用法，使用scene* 初始化类型为GameScene,则虚函数使用G类中的初始化函数
{
public:
	GameScene() {

	}
	~GameScene() {

	}

	void on_enter() {
		std::cout << "进入游戏局内场景" << std::endl;
	}
	void on_update() {
		std::cout << "游戏正在运行..." << std::endl;
	}
	void on_draw() {
		outtextxy(10, 10, _T("游戏局内绘图内容"));
	}
	void on_input(const ExMessage& msg) {
		if (msg.message == WM_KEYDOWN)
		{
			scene_manager.switch_to(SceneManager::SceneType::Menu);
		}
	}


	void on_exit() {
		std::cout << "游戏局内退出" << std::endl;
	}
};