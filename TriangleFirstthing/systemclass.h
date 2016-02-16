#pragma once
#ifndef _SYSTEMCLASS_H_
#DEFINE _SYSTEMCLASS_H_

//Preprocessing directives

#define WIN32_LEAN_AND_MEAN

//includes

#include <windows.h>
//MY CLASS INCLUDES

#include "inputclass.h"
#include "graphicsclass.h"

class SystemClass
{
public:
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();

	bool Initialize();void Shutdown();
	void Run();

	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);

private:
	bool Frame();
	void InitializeWindows(int&, int&);
	void ShutdownWindows();

private:
	LPCWSTR	m_applicationName;
	HINSTANCE m_hinstance;
	HWND m_hwnd;

	InputClass* m_Input;
	GraphicsClass* m_Graphics;
};

//FUNCTION PROTOTYPES
STATIC	LRESULT CALLBACK WindProc(HWND, UINT, WPARAM, LPARAM);

//GLOBALS
static SystemClass* ApplicationHandle = 0;

#endif


