#pragma once
#ifndef UI_CONVERT_H
#define UI_CONVERT_H

#include <string>
#include "common_message.h"
#include <vcclr.h>

#define BUFFER_SIZE 255

using namespace std;

class UiConvert
{
	static char systemMessage[BUFFER_SIZE];
	static const bool isPrintSystemMessage = false;

public:
	static string trim(const string& s, const string& delimiters = " \f\n\r\t\v" );
	bool stringObjToStdConversion(System::String^ source, string& result);
};
#endif