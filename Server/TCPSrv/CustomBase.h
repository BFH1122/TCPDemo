#pragma once
#ifndef _HEADER_BASE_
#define _HEADER_BASE_

#include "stdafx.h"

class base
{
public:
	virtual DWORD WINAPI deal_with(LPVOID lpParameter);
private:
};

class custom :public base {
public:
	 DWORD WINAPI deal_with(LPVOID lpParameter);
private:
};

#endif // !_HEADER_BASE_
