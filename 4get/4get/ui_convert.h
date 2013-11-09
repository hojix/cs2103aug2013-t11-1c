#pragma once
#ifndef UI_CONVERT_H
#define UI_CONVERT_H

#include <list>
#include <string>
#include <time.h>
#include <sstream>
#include "logic_task.h"
#include "common_message.h"
#include <vcclr.h>

#define BUFFER_SIZE 255

using namespace std;

class UiConvert
{
public:
	UiConvert();

	static char systemMessage[BUFFER_SIZE];
	static const bool isPrintSystemMessage = false;

public:
	void stringStdToSysConversion(System::String^ result, string& source);
	string timetToStdString(time_t time);
	bool stringSysToStdConversion(System::String^ source, string& result);
	string enumPriorityToStdString(Priority priority);
	int stringSysToIntConversion(System::String^ source);
	void intToSysString(System::String^ result, int source);
	void printItem(System::Windows::Forms::ListViewItem^ item, std::list<Task*> *list, int taskIndex);

private:
	static const int ITEM_INDEX_SLOT;
	static const int TIME_BUFFER_SIZE;
	static const int INITIALISE_INT_ZERO;
	static const string INITIALISE_EMPTY_STD_STRING;
	static const string HIGH_PRIORITY_TEXT;
	static const string NORMAL_PRIORITY_TEXT;
	static const time_t EMPTY_TIME;

};
#endif