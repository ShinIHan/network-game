#pragma once
#include"Stage.h"

#define MAX_STAGE 7

class StageMgr
{
	//[���� ��������]
	//1. start��ư ��������
	//2. �κ� ��������
	//3. �ε� ��������
	//4. ��������1
	//5. ��������2
	//6. ��������3

	//�� 5����
	Stage myStage[MAX_STAGE];
public:
	StageMgr();
	Stage& getStage(int index);

	static int StageTimepass;
	static int EndStageTime;
	static bool IsTimeoutStageEnd;

	void ResetStage();
private:
	bool isUse[MAX_STAGE] = { false };
};
