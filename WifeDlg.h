#pragma once


// CWifeDlg �Ի���

class CWifeDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CWifeDlg)

public:
	CWifeDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CWifeDlg();

// �Ի�������
	enum { IDD = IDD_WIFE };
	virtual BOOL OnInitDialog();
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
private:
	CString m_liric;
};
