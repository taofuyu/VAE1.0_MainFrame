// WifeDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "VAE.h"
#include "WifeDlg.h"
#include "afxdialogex.h"


// CWifeDlg �Ի���

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


// CWifeDlg ��Ϣ�������
BOOL CWifeDlg::OnInitDialog()
{
	UpdateData(TRUE);
	
	m_liric = "�ҵ�angel";

	UpdateData(FALSE);
	
	return TRUE;
}