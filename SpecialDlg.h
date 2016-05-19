#pragma once


// CSpecialDlg 对话框

class CSpecialDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSpecialDlg)

public:
	CSpecialDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSpecialDlg();

// 对话框数据
	enum { IDD = IDD_SPECIAL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnStnClickedSglmyd();
	afx_msg void OnStnClickedMyj();
	afx_msg void OnStnClickedBrccq();
	afx_msg void OnStnClickedZdy();
	afx_msg void OnStnClickedXwqs();
	afx_msg void OnBnClickedButtonReturn();

	void ShowNineSongs();//显示九首歌
	void ShowTenSongs();//显示十首歌
	void HideSongs();//隐藏显示歌曲的编辑框

	virtual BOOL OnInitDialog();

private:
	CEdit *m_peditZDY;
	CEdit *m_peditXWQS;
	CEdit *m_peditSGLMYD;
	CEdit *m_peditMYJ;
	CEdit *m_peditBRCCQ;
	CEdit *m_peditButtonReturn;
	CEdit *m_peditSpecailName;

	CString m_specialName;
	CString m_firstSong;
	CString m_secondSong;
	CString m_thirdSong;
	CString m_fourthSong;
	CString m_fivethSong;
	CString m_sixthSong;
	CString m_seventhSong;
	CString m_eighthSong;
	CString m_ninethSong;
	CString m_tenthSong;
};
