
// VAEDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CVAEDlg 对话框
class CVAEDlg : public CDialogEx
{
// 构造
public:
	CVAEDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_VAE_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
