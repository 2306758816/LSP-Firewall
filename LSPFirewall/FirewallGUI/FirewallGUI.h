
// FirewallGUI.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFirewallGUIApp: 
// �йش����ʵ�֣������ FirewallGUI.cpp
//

class CFirewallGUIApp : public CWinApp
{
public:
	CFirewallGUIApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CFirewallGUIApp theApp;