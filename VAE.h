
// VAE.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CVAEApp:
// �йش����ʵ�֣������ VAE.cpp
//

class CVAEApp : public CWinApp,public CBCGPWorkspace
{
public:
	CVAEApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CVAEApp theApp;