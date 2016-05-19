#pragma once


// CWifeDlg 对话框

class CWifeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CWifeDlg)

public:
	CWifeDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CWifeDlg();

// 对话框数据
	enum { IDD = IDD_WIFE };
	virtual BOOL OnInitDialog();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
private:
	CString m_liric;
};
