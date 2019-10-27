#pragma once
#include "OOP_Menu.h"
#include "String.h"

class Init : protected MenuChepter
{
private:
	MenuChepter StringFirst;
	MenuChepter StringSecond;
	MenuChepter StringThird;
	MenuChepter StringFourth;
	MenuChepter StringFifth;
	Menu MainMenu;
public:

	Init()
	{
		StringFirst.AddMenuItem("Task 3 of 70", String3);
		StringFirst.AddMenuItem("Task 6 of 70", String6);
		StringFirst.AddMenuItem("Task 10 of 70", String10);
		StringSecond.AddMenuItem("Task 16 of 70", String16);
		StringSecond.AddMenuItem("Task 22 of 70", String22);
		StringSecond.AddMenuItem("Task 24 of 70", String24);
		StringThird.AddMenuItem("Task 27 of 70", String27);
		StringThird.AddMenuItem("Task 30 of 70", String30);
		StringThird.AddMenuItem("Task 38 of 70", String38);
		StringFourth.AddMenuItem("Task 42 of 70", String42);
		StringFourth.AddMenuItem("Task 45 of 70", String45);
		StringFourth.AddMenuItem("Task 54 of 70", String54);
		StringFifth.AddMenuItem("Task 58 of 70", String58);
		StringFifth.AddMenuItem("Task 63 of 70", String63);
		StringFifth.AddMenuItem("Task 65 of 70", String65);
		MainMenu.AddMenuItem("First Chepter", StringFirst);
		MainMenu.AddMenuItem("Second Chepter", StringSecond);
		MainMenu.AddMenuItem("Third Chepter", StringThird);
		MainMenu.AddMenuItem("Fourth Chepter", StringFourth);
		MainMenu.AddMenuItem("Fifth Chepter", StringFifth);
	}

	void Show_Main()
	{
		MainMenu.ShowMenu();
	}
};