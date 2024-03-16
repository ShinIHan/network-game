#pragma once
#include"stdafx.h"
#include "Stage.h"
#include"ImageMgr.h"

// PNG���� �о����
void ImageMgr::LoadImages() {
	loading.Load(L"Resource\\�ε��� �̹���.png");
	robby.Load(L"Resource\\�κ� �̹��� �ʾ� 2.png");
	buttonimg.Load(L"Resource\\�÷��� ��ư 158.60.png");
	stage1.Load(L"Resource\\�� �⺻.png");
	Jewelry_blue.Load(L"Resource\\�Ķ� ���� 28.24.png");
	Jewelry_red.Load(L"Resource\\���� ���� 29.24.png");
	red_water_center.Load(L"Resource\\���� ����� 21.14.png");
	red_water_left.Load(L"Resource\\���� ���ʹ� 24.25.png");
	red_water_right.Load(L"Resource\\���� �����ʹ� 24.25.png");
	blue_water_center.Load(L"Resource\\�Ķ� ����� 23.14.png");
	blue_water_left.Load(L"Resource\\�Ķ� ���ʹ� 23.23.png");
	blue_water_right.Load(L"Resource\\�Ķ� �����ʹ� 23.23.png");
	green_water_center.Load(L"Resource\\�ʷ� ����� 23.14.png");
	green_water_left.Load(L"Resource\\�ʷ� ���ʹ� 24.25.png");
	green_water_right.Load(L"Resource\\�ʷ� ������ 24.25.png");
	die.Load(L"Resource\\�׾��� �� 159.89.png");
	endimg.Load(L"Resource\\end.png");
	retryimg.Load(L"Resource\\retry.png");
	backimg.Load(L"Resource\\dieimg.png");
	door_red.Load(L"Resource\\���� �� 60.104.png");
	door_blue.Load(L"Resource\\�Ķ� �� 60.104.png");
	button_img.Load(L"Resource\\��ư 42.16.png");
	red_stair.Load(L"Resource\\���� ��� 50.73.png");
	blue_stair.Load(L"Resource\\�Ķ� ��� 54.77.png");
	clear_img.Load(L"Resource\\Ŭ����.png");
	zero.Load(L"Resource\\0.png");
	one.Load(L"Resource\\1.png");
	two.Load(L"Resource\\2.png");
	three.Load(L"Resource\\3.png");
	four.Load(L"Resource\\4.png");
	five.Load(L"Resource\\5.png");
	six.Load(L"Resource\\6.png");
	seven.Load(L"Resource\\7.png");
	eight.Load(L"Resource\\8.png");
	nine.Load(L"Resource\\9.png");
	clock.Load(L"Resource\\�ð�.png");
	timeout.Load(L"Resource\\Ÿ�Ӿƿ�.png");
	fraction.Load(L"Resource\\fraction.png");


	lobby.Load(L"Resource\\�κ� �̹��� �ʾ�.png");

	fireStopImage.Load(L"Resource\\���� ���� 215.411.png");

	waterStopImage.Load(L"Resource\\�Ķ� ���� 215.411.png");

	earthStopImage.Load(L"Resource\\��_����_215.411.png");

	block_w.Load(L"Resource\\block1.png");
	block_h.Load(L"Resource\\block2.png");
	foot_block.Load(L"Resource\\����.png");
	rect.Load(L"Resource\\���� 40.40.png");




	leftArrow.Load(L"Resource\\left_arrow.png");
	rightArrow.Load(L"Resource\\right_arrow.png");
	me.Load(L"Resource\\me.png");
	player1.Load(L"Resource\\player1.png");
	player2.Load(L"Resource\\player2.png");

	selectBtn.Load(L"Resource\\select_btn.png");
	btnend.Load(L"Resource\\end.png");

	first.Load(L"Resource\\first.png");
	second.Load(L"Resource\\second.png");
	third.Load(L"Resource\\third.png");
	finish.Load(L"Resource\\finish.png");


}

// ���� ���������� ���� ������Ʈ�� ��� �׸���
void ImageMgr::DrawMap(HDC* memdc, short stageNum, Stage& stage)
{
	switch (stageNum)
	{
	case STAGE_TITLE:
		robby.Draw(*memdc, 0, 0, 1190, 770, 0, 0, 640, 480);

		break;
	case STAGE_LOADING:
		loading.Draw(*memdc, 0, 0, 1190, 770, 0, 0, 640, 480);
		if (currneClientNum == 1) {
			one.Draw(*memdc, 350, 550, 150, 150, 0, 0, 50, 50);
		}
		else if (currneClientNum == 2) {
			two.Draw(*memdc, 350, 550, 150, 150, 0, 0, 50, 50);
		}
		else if (currneClientNum == 3) {
			three.Draw(*memdc, 350, 550, 150, 150, 0, 0, 50, 50);
		}
		fraction.Draw(*memdc, 450, 550, 150, 150, 0, 0, 48, 48);
		three.Draw(*memdc, 550, 550, 150, 150, 0, 0, 50, 50);

		break;
	case STAGE_ROLE:
		lobby.Draw(*memdc, 0, 0, 1190, 770, 0, 0, 640, 480);
		//me
		me.Draw(*memdc, 150, 150, 100, 100, 0, 0, 139, 90);

		if (players[0].role == 'f') {
			fireStopImage.Draw(*memdc, 150, 250, 100, 205, 0, 0, 215, 411);
		}
		else if (players[0].role == 'w') {
			waterStopImage.Draw(*memdc, 150, 250, 100, 205, 0, 0, 215, 411);
		}
		else if (players[0].role == 'e') {
			earthStopImage.Draw(*memdc, 150, 250, 100, 205, 0, 0, 215, 411);
		}

		player1.Draw(*memdc, 550, 150, 100, 100, 0, 0, 213, 91);
		if (players[1].role == 'f') {
			fireStopImage.Draw(*memdc, 550, 250, 100, 205, 0, 0, 215, 411);
		}
		else if (players[1].role == 'w') {
			waterStopImage.Draw(*memdc, 550, 250, 100, 205, 0, 0, 215, 411);
		}
		else if (players[1].role == 'e') {
			earthStopImage.Draw(*memdc, 550, 250, 100, 205, 0, 0, 215, 411);
		}

		player2.Draw(*memdc, 920, 150, 100, 100, 0, 0, 216, 85);
		if (players[2].role == 'f') {
			fireStopImage.Draw(*memdc, 920, 250, 100, 205, 0, 0, 215, 411);
		}
		else if (players[2].role == 'w') {
			waterStopImage.Draw(*memdc, 920, 250, 100, 205, 0, 0, 215, 411);
		}
		else if (players[2].role == 'e') {
			earthStopImage.Draw(*memdc, 920, 250, 100, 205, 0, 0, 215, 411);
		}
		break;
	case STAGE_01:
		stage1.Draw(*memdc, 0, 0, 1190, 765, 0, 480 - stage.average, 640, 480);

		for (OBJECT& ft : stage.Ft)
		{
			foot_block.Draw(*memdc, ft.x - (ft.wid / 2), ft.y - (ft.hei), ft.wid, ft.hei, 0, 0, 111, 23);
		}

		if (doorVisible)
			door_red.Draw(*memdc, stage.door.x - stage.door.wid / 2, stage.door.y - stage.door.hei, stage.door.wid, stage.door.hei, stage.door.image_x, stage.door.image_y, 60, 104);
		if (currentJewelyNum < currentStage.maxJewelyNum) {
			Jewelry_blue.Draw(*memdc, stage.currentVisibleJewely.x - stage.currentVisibleJewely.wid / 2, stage.currentVisibleJewely.y - stage.currentVisibleJewely.hei, stage.currentVisibleJewely.wid, stage.currentVisibleJewely.hei, stage.currentVisibleJewely.image_x, stage.currentVisibleJewely.image_y, 28, 24);
		}
		break;
	case STAGE_02:
		stage1.Draw(*memdc, 0, 0, 1190, 765, 0, 480 - stage.average, 640, 480);

		for (OBJECT& ft : stage.Ft)
		{
			foot_block.Draw(*memdc, ft.x - (ft.wid / 2), ft.y - ft.hei, ft.wid, ft.hei, 0, 0, 111, 23);
		}

		if (doorVisible)
			door_red.Draw(*memdc, stage.door.x - stage.door.wid / 2, stage.door.y - stage.door.hei, stage.door.wid, stage.door.hei, stage.door.image_x, stage.door.image_y, 60, 104);

		if (currentJewelyNum < currentStage.maxJewelyNum) {
			Jewelry_blue.Draw(*memdc, stage.currentVisibleJewely.x - stage.currentVisibleJewely.wid / 2, stage.currentVisibleJewely.y - stage.currentVisibleJewely.hei, stage.currentVisibleJewely.wid, stage.currentVisibleJewely.hei, stage.currentVisibleJewely.image_x, stage.currentVisibleJewely.image_y, 28, 24);
		}

		break;
	case STAGE_03:
		stage1.Draw(*memdc, 0, 0, 1190, 765, 0, 480 - stage.average, 640, 480);

		for (OBJECT& ft : stage.Ft)
		{
			foot_block.Draw(*memdc, ft.x - (ft.wid / 2), ft.y - ft.hei, ft.wid, ft.hei, 0, 0, 111, 23);
		}
		if (currentJewelyNum < currentStage.maxJewelyNum) {
			Jewelry_blue.Draw(*memdc, stage.currentVisibleJewely.x - stage.currentVisibleJewely.wid / 2, stage.currentVisibleJewely.y - stage.currentVisibleJewely.hei, stage.currentVisibleJewely.wid, stage.currentVisibleJewely.hei, stage.currentVisibleJewely.image_x, stage.currentVisibleJewely.image_y, 28, 24);
		}

		if (doorVisible)
			door_red.Draw(*memdc, stage.door.x - stage.door.wid / 2, stage.door.y - stage.door.hei, stage.door.wid, stage.door.hei, stage.door.image_x, stage.door.image_y, 60, 104);
		rect.Draw(*memdc, stage.Rt.x - 50, stage.Rt.y - 50, 50, 50, 0, 0, 40, 40);

		break;
	case RESULT:
	{
		stage1.Draw(*memdc, 0, 0, 1190, 765, 0, 480 - stage.average, 640, 480);

		for (int i = 0; i < 2; i++) {
			for (int j = i + 1; j < 3; j++) {
				if (players[i].score < players[j].score)
					std::swap(players[i], players[j]);
			}
		}
		finish.Draw(*memdc, 450, 10, 300, 150, 0, 0, 172, 48);
		first.Draw(*memdc, 200, 180, 200, 100, 0, 0, 68, 48);
		second.Draw(*memdc, 500, 180, 200, 100, 0, 0, 87, 48);
		third.Draw(*memdc, 800, 180, 200, 100, 0, 0, 76, 48);

		for (int i = 0; i < 3; i++) {
			switch (players[i].role)
			{
			case'f':
				fireStopImage.Draw(*memdc, 200 + 300 * i, 250, 200, 320, 0, 0, 215, 411);
				break;
			case'w':
				waterStopImage.Draw(*memdc, 200 + 300 * i, 250, 200, 320, 0, 0, 215, 411);
				break;
			case'e':
				earthStopImage.Draw(*memdc, 200 + 300 * i, 250, 200, 320, 0, 0, 215, 411);
				break;
			default:
				break;
			}
			if (players[i].id == myId) {
				me.Draw(*memdc, 200 + 300 * i + 45, 560, 120, 100, 0, 0, 139, 90);
			}
			DrawScoreNum(memdc, 200 + 300 * i + 75, 640, players[i].score);
		}
	}
	break;
	}
#ifdef _DEBUG
	zero.Draw(*memdc, 100, 0, 50, 100, 0, 0, 50, 50);
	one.Draw(*memdc, 100, 100, 50, 100, 0, 0, 50, 50);
	two.Draw(*memdc, 100, 200, 50, 100, 0, 0, 50, 50);
	three.Draw(*memdc, 100, 300, 50, 100, 0, 0, 50, 50);
	four.Draw(*memdc, 100, 400, 50, 100, 0, 0, 50, 50);
	five.Draw(*memdc, 100, 500, 50, 100, 0, 0, 50, 50);
	six.Draw(*memdc, 100, 600, 50, 100, 0, 0, 50, 50);
	seven.Draw(*memdc, 100, 700, 50, 100, 0, 0, 50, 50);
	eight.Draw(*memdc, 100, 800, 50, 100, 0, 0, 50, 50);
	nine.Draw(*memdc, 100, 900, 50, 100, 0, 0, 50, 50);

	zero.Draw(*memdc, 0, 600, 50, 70, 0, 0, 50, 50);
	one.Draw(*memdc, 100, 600, 50, 70, 0, 0, 50, 50);
	two.Draw(*memdc, 200, 600, 50, 70, 0, 0, 50, 50);
	three.Draw(*memdc, 300, 600, 50, 70, 0, 0, 50, 50);
	four.Draw(*memdc, 400, 600, 50, 70, 0, 0, 50, 50);
	five.Draw(*memdc, 500, 600, 50, 70, 0, 0, 50, 50);
	six.Draw(*memdc, 600, 600, 50, 70, 0, 0, 50, 50);
	seven.Draw(*memdc, 700, 600, 50, 70, 0, 0, 50, 50);
	eight.Draw(*memdc, 800, 600, 50, 70, 0, 0, 50, 50);
	nine.Draw(*memdc, 900, 600, 50, 70, 0, 0, 50, 50);

	one.Draw(*memdc, 1000, 600, 50, 70, 0, 0, 50, 50);
	zero.Draw(*memdc, 1050, 600, 50, 70, 0, 0, 50, 50);
	one.Draw(*memdc, 1100, 600, 50, 70, 0, 0, 50, 50);
	one.Draw(*memdc, 1150, 600, 50, 70, 0, 0, 50, 50);
	one.Draw(*memdc, 1200, 600, 50, 70, 0, 0, 50, 50);
	two.Draw(*memdc, 1250, 600, 50, 70, 0, 0, 50, 50);
#endif
}

// �������� ���� ȭ�鿡�� �߾�, ��ܿ� �ִ� Timer �׸���
void ImageMgr::DrawTimer(HDC* memdc, short time) {
	clock.Draw(*memdc, 525, 0, 150, 50, 0, 0, 154, 54);
	switch (time / 60) {
	case 0:
		zero.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 1:
		one.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 2:
		two.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 3:
		three.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 4:
		four.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 5:
		five.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 6:
		six.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 7:
		seven.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 8:
		eight.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 9:
		nine.Draw(*memdc, 530, 0, 50, 50, 0, 0, 50, 50);
		break;
	}
	switch ((time % 60) / 10) {
	case 0:
		zero.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 1:
		one.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 2:
		two.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 3:
		three.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 4:
		four.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 5:
		five.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 6:
		six.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 7:
		seven.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 8:
		eight.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 9:
		nine.Draw(*memdc, 585, 0, 50, 50, 0, 0, 50, 50);
		break;
	}
	switch ((time % 60) % 10) {
	case 0:
		zero.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 1:
		one.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 2:
		two.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 3:
		three.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 4:
		four.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 5:
		five.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 6:
		six.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 7:
		seven.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 8:
		eight.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	case 9:
		nine.Draw(*memdc, 620, 0, 50, 50, 0, 0, 50, 50);
		break;
	}
}

// Fire boy�� Water girl�� �ִϸ��̼� ��� �Լ�
void ImageMgr::DrawPlayers(HDC* memdc, Stage& stage) {
	for (PLAYER& pl : players) {
		if (pl.isIntoDoor) {
		}
		else if (pl.on)
		{
			if (pl.direction == DIRECTION::JUMP) {
				pl.Anim[3].Draw(*memdc, pl.x - pl.wid, pl.y - pl.hei, pl.wid, pl.hei, 0, 0, pl.C_img_X_Size_01, pl.C_img_Y_Size_01);
			}
			else if (pl.direction == DIRECTION::IDLE) {
				pl.Anim[1].Draw(*memdc, pl.x - pl.wid, pl.y - pl.hei, pl.wid, pl.hei, 0, 0, pl.C_img_X_Size_01, pl.C_img_Y_Size_01);
			}
			else if (pl.direction == DIRECTION::LEFT) {
				pl.Anim[4].Draw(*memdc, pl.x - pl.wid, pl.y - pl.hei, pl.wid, pl.hei, 0 + pl.C_img_Frame * pl.Frame, 0, pl.C_img_X_Size_02, pl.C_img_Y_Size_02);
			}
			else if (pl.direction == DIRECTION::RIGHT) {
				pl.Anim[2].Draw(*memdc, pl.x - pl.wid, pl.y - pl.hei, pl.wid, pl.hei, 0 + pl.C_img_Frame * pl.Frame, 0, pl.C_img_X_Size_02, pl.C_img_Y_Size_02);
			}
		}
	}
}

void ImageMgr::DrawScore(HDC* memdc)
{
	players[0].Anim[1].Draw(*memdc, 1000 - 55, 20, 70, 100, 0, 0, players[0].C_img_X_Size_01, players[0].C_img_Y_Size_01);
	DrawScoreNum(memdc, 1020 - 55, 120, players[0].score);
	players[1].Anim[1].Draw(*memdc, 1080 - 55, 20, 70, 100, 0, 0, players[1].C_img_X_Size_01, players[1].C_img_Y_Size_01);
	DrawScoreNum(memdc, 1100 - 55, 120, players[1].score);
	players[2].Anim[1].Draw(*memdc, 1160 - 55, 20, 70, 100, 0, 0, players[2].C_img_X_Size_01, players[2].C_img_Y_Size_01);
	DrawScoreNum(memdc, 1180 - 55, 120, players[2].score);
}

void ImageMgr::DrawScoreNum(HDC* memdc, short x, short y, int num)
{
	if (num > 9) {
		int t = num / 10;
		DrawScoreNum(memdc, x - 12, y, t);
		int o = num % 10;
		DrawScoreNum(memdc, x + 12, y, o);
	}
	else {
		switch (num) {
		case 0:
			zero.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 1:
			one.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 2:
			two.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 3:
			three.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 4:
			four.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 5:
			five.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 6:
			six.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 7:
			seven.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 8:
			eight.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		case 9:
			nine.Draw(*memdc, x, y, 30, 45, 0, 0, 50, 50);
			break;
		}
	}
}
