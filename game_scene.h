#pragma once
#include "scene.h"
#include <iostream>

extern SceneManager scene_manager;

class GameScene :public Scene					//�ǳ���Ҫ�Ĺ������÷���ʹ��scene* ��ʼ������ΪGameScene,���麯��ʹ��G���еĳ�ʼ������
{
public:
	GameScene() {

	}
	~GameScene() {

	}

	void on_enter() {
		std::cout << "������Ϸ���ڳ���" << std::endl;
	}
	void on_update() {
		std::cout << "��Ϸ��������..." << std::endl;
	}
	void on_draw() {
		outtextxy(10, 10, _T("��Ϸ���ڻ�ͼ����"));
	}
	void on_input(const ExMessage& msg) {
		if (msg.message == WM_KEYDOWN)
		{
			scene_manager.switch_to(SceneManager::SceneType::Menu);
		}
	}


	void on_exit() {
		std::cout << "��Ϸ�����˳�" << std::endl;
	}
};