
// mult.h : ������� ���� ��������� ��� ���������� mult
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�������� stdafx.h �� ��������� ����� ����� � PCH"
#endif

#include "resource.h"       // �������� �������


// CmultApp:
// � ���������� ������� ������ ��. mult.cpp
//

class CmultApp : public CWinAppEx
{
public:
	CmultApp();


// ���������������
public:
	virtual BOOL InitInstance();

// ����������

public:
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmultApp theApp;
