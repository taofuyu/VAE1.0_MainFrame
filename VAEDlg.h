
// VAEDlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CVAEDlg �Ի���
class CVAEDlg : public CDialogEx
{
// ����
public:
	CVAEDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_VAE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
//	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnBnClickedSpecial();
private:
//	CStatic m_ctrlPicVae;
public:
//	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedSpecial();
	afx_msg void OnBnClickedWife();
private:
	CBCGPButton m_buttonSpecial;
	CBCGPButton m_buttonWife;
	CBCGPButton m_buttonSong;
	CBCGPButton m_buttonGame;
	CBCGPButton m_buttonNews;
};
