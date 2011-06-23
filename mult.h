
// mult.h : главный файл заголовка для приложения mult
//
#pragma once

#ifndef __AFXWIN_H__
	#error "включить stdafx.h до включения этого файла в PCH"
#endif

#include "resource.h"       // основные символы


// CmultApp:
// О реализации данного класса см. mult.cpp
//

class CmultApp : public CWinAppEx
{
public:
	CmultApp();


// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

public:
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmultApp theApp;
