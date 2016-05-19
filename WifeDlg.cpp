// WifeDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "VAE.h"
#include "WifeDlg.h"
#include "afxdialogex.h"


// CWifeDlg 对话框

IMPLEMENT_DYNAMIC(CWifeDlg, CDialogEx)

CWifeDlg::CWifeDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CWifeDlg::IDD, pParent)
	, m_liric(_T(""))
{

}

CWifeDlg::~CWifeDlg()
{
}

void CWifeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_LIRIC, m_liric);
}


BEGIN_MESSAGE_MAP(CWifeDlg, CDialogEx)
END_MESSAGE_MAP()


// CWifeDlg 消息处理程序
BOOL CWifeDlg::OnInitDialog()
{
	UpdateData(TRUE);
	
	m_liric = "我的angel";

	UpdateData(FALSE);
	
	return TRUE;
}