// SpecialDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "VAE.h"
#include "SpecialDlg.h"
#include "afxdialogex.h"


// CSpecialDlg 对话框

IMPLEMENT_DYNAMIC(CSpecialDlg, CDialogEx)

CSpecialDlg::CSpecialDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSpecialDlg::IDD, pParent)
	, m_firstSong(_T(""))
	, m_secondSong(_T(""))
	, m_thirdSong(_T(""))
	, m_fourthSong(_T(""))
	, m_fivethSong(_T(""))
	, m_sixthSong(_T(""))
	, m_seventhSong(_T(""))
	, m_eighthSong(_T(""))
	, m_ninethSong(_T(""))
	, m_tenthSong(_T(""))
{

}

CSpecialDlg::~CSpecialDlg()
{
}

BOOL CSpecialDlg::OnInitDialog()
{
	m_peditSpecailName  = (CEdit*)GetDlgItem(IDC_SPECIAL_NAME);
	m_peditButtonReturn = (CEdit*)GetDlgItem(IDC_BUTTON_RETURN);
	m_peditZDY    = (CEdit*)GetDlgItem(IDC_ZDY);
	m_peditXWQS   = (CEdit*)GetDlgItem(IDC_XWQS);
	m_peditSGLMYD = (CEdit*)GetDlgItem(IDC_SGLMYD);
	m_peditMYJ    = (CEdit*)GetDlgItem(IDC_MYJ);
	m_peditBRCCQ  = (CEdit*)GetDlgItem(IDC_BRCCQ);
	
	HideSongs();

	m_peditSpecailName  -> ShowWindow(FALSE);//隐藏专辑名
	m_peditButtonReturn -> ShowWindow(FALSE);//隐藏返回按钮
	
	return TRUE;
}

void CSpecialDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Text(pDX, IDC_SPECIAL_NAME, m_specialName);
	DDV_MaxChars(pDX, m_specialName, 15);
	DDX_Text(pDX, IDC_FIRST_SONG, m_firstSong);
	DDX_Text(pDX, IDC_SECOND_SONG, m_secondSong);
	DDX_Text(pDX, IDC_THIRD_SONG, m_thirdSong);
	DDX_Text(pDX, IDC_FOURTH_SONG, m_fourthSong);
	DDX_Text(pDX, IDC_FIVETH_SONG, m_fivethSong);
	DDX_Text(pDX, IDC_SIXTH_SONG, m_sixthSong);
	DDX_Text(pDX, IDC_SEVENTH_SONG, m_seventhSong);
	DDX_Text(pDX, IDC_EIGHTH_SONG, m_eighthSong);
	DDX_Text(pDX, IDC_NINETH_SONG, m_ninethSong);
	DDX_Text(pDX, IDC_TENTH_SONG, m_tenthSong);
}


BEGIN_MESSAGE_MAP(CSpecialDlg, CDialogEx)
	ON_STN_CLICKED(IDC_ZDY, &CSpecialDlg::OnStnClickedZdy)
	ON_BN_CLICKED(IDC_BUTTON_RETURN, &CSpecialDlg::OnBnClickedButtonReturn)
	ON_STN_CLICKED(IDC_XWQS, &CSpecialDlg::OnStnClickedXwqs)
	ON_STN_CLICKED(IDC_SGLMYD, &CSpecialDlg::OnStnClickedSglmyd)
	ON_STN_CLICKED(IDC_MYJ, &CSpecialDlg::OnStnClickedMyj)
	ON_STN_CLICKED(IDC_BRCCQ, &CSpecialDlg::OnStnClickedBrccq)
END_MESSAGE_MAP()


// CSpecialDlg 消息处理程序


void CSpecialDlg::OnStnClickedZdy()
{
	//隐藏其余封面
	m_peditXWQS   -> ShowWindow(FALSE);
	m_peditSGLMYD -> ShowWindow(FALSE);
	m_peditMYJ    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//移动本封面的位置
	m_peditZDY -> MoveWindow(100,130,250,250,true);
	//MoveCover(IDC_ZDY,-100,130);

	//显示其他控件
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "自定义";
	m_firstSong  = "如果当时";
	m_secondSong = "多余的解释";
	m_thirdSong  = "有何不可";
	m_fourthSong = "坏孩子";
	m_fivethSong = "清明雨上";
	m_sixthSong  = "城府";
	m_seventhSong= "认错";
	m_eighthSong = "内线";
	m_ninethSong = "星座书上";

	UpdateData(FALSE);

	ShowNineSongs();
}

void CSpecialDlg::OnStnClickedXwqs()
{
	//隐藏其余封面
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditSGLMYD -> ShowWindow(FALSE);
	m_peditMYJ    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//移动本封面的位置
	m_peditXWQS -> MoveWindow(100,130,250,250,true);

	//显示其他控件
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "寻雾启示";
	m_firstSong  = "叹服";
	m_secondSong = "灰色头像";
	m_thirdSong  = "我无所谓";
	m_fourthSong = "庐州月";
	m_fivethSong = "不煽情";
	m_sixthSong  = "我们的恋爱是对生命的严重浪费";
	m_seventhSong= "白马非马";
	m_eighthSong = "单人旅途";
	m_ninethSong = "在那不遥远的地方";

	UpdateData(FALSE);

	ShowNineSongs();
}

void CSpecialDlg::OnStnClickedSglmyd()
{
	//隐藏其余封面
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditXWQS -> ShowWindow(FALSE);
	m_peditMYJ    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//移动本封面的位置
	m_peditSGLMYD -> MoveWindow(100,130,250,250,true);

	//显示其他控件
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "苏格拉没有底";
	m_firstSong  = "想象之中";
	m_secondSong = "河山大好";
	m_thirdSong  = "拆东墙";
	m_fourthSong = "医生";
	m_fivethSong = "微博控";
	m_sixthSong  = "毁人不倦";
	m_seventhSong= "双人旁";
	m_eighthSong = "降温";
	m_ninethSong = "敬酒不吃";
	m_tenthSong  = "千百度";

	UpdateData(FALSE);

	ShowTenSongs();
}

void CSpecialDlg::OnStnClickedMyj()
{
	//隐藏其余封面
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditXWQS -> ShowWindow(FALSE);
	m_peditSGLMYD    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//移动本封面的位置
	m_peditMYJ -> MoveWindow(100,130,250,250,true);

	//显示其他控件
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "梦游计";
	m_firstSong  = "胡萝卜须";
	m_secondSong = "幻听";
	m_thirdSong  = "对话老师";
	m_fourthSong = "伴虎";
	m_fivethSong = "闺蜜";
	m_sixthSong  = "装糊涂";
	m_seventhSong= "play with style";
	m_eighthSong = "心疼你的过去";
	m_ninethSong = "全球变冷";
	m_tenthSong  = "亲情式的爱情";

	UpdateData(FALSE);
	
	ShowTenSongs();
}

void CSpecialDlg::OnStnClickedBrccq()
{
	//隐藏其余封面
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditXWQS -> ShowWindow(FALSE);
	m_peditSGLMYD    -> ShowWindow(FALSE);
	m_peditMYJ  -> ShowWindow(FALSE);

	//移动本封面的位置
	m_peditBRCCQ -> MoveWindow(100,130,250,250,true);

	//显示其他控件
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "不如吃茶去";
	m_firstSong  = "等到烟火清凉";
	m_secondSong = "山水之间";
	m_thirdSong  = "七夕";
	m_fourthSong = "有桃花";
	m_fivethSong = "惊鸿一面";
	m_sixthSong  = "隐隐约约";
	m_seventhSong= "宇宙之大";
	m_eighthSong = "梧桐灯";
	m_ninethSong = "弹指一挥间";
	
	UpdateData(FALSE);
	
	ShowNineSongs();
}

void CSpecialDlg::OnBnClickedButtonReturn()
{
	//显示所有封面
	m_peditSpecailName  -> ShowWindow(FALSE);
	m_peditButtonReturn -> ShowWindow(FALSE);
	m_peditZDY    -> ShowWindow(TRUE);
	m_peditXWQS   -> ShowWindow(TRUE);
	m_peditSGLMYD -> ShowWindow(TRUE);
	m_peditMYJ    -> ShowWindow(TRUE);
	m_peditBRCCQ  -> ShowWindow(TRUE);

	//移动所有封面的位置
	m_peditZDY    -> MoveWindow(177,35,250,250,true);//左，下
	m_peditXWQS   -> MoveWindow(480,35,250,250,true);
	m_peditSGLMYD -> MoveWindow(25,328,250,250,true);
	m_peditMYJ    -> MoveWindow(335,328,250,250,true);
	m_peditBRCCQ  -> MoveWindow(638,328,250,250,true);

	//隐藏歌曲目录
	HideSongs();
}

void CSpecialDlg::ShowNineSongs()
{
	(CEdit*)GetDlgItem(IDC_FIRST_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_EIGHTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_FIVETH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_FOURTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_NINETH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_SECOND_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_SEVENTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_SIXTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_THIRD_SONG) -> ShowWindow(TRUE);
}

void CSpecialDlg::ShowTenSongs()
{
	(CEdit*)GetDlgItem(IDC_FIRST_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_EIGHTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_FIVETH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_FOURTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_NINETH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_SECOND_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_SEVENTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_SIXTH_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_THIRD_SONG) -> ShowWindow(TRUE);
	(CEdit*)GetDlgItem(IDC_TENTH_SONG) -> ShowWindow(TRUE);
}

void CSpecialDlg::HideSongs()
{
	(CEdit*)GetDlgItem(IDC_FIRST_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_EIGHTH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_FIVETH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_FOURTH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_NINETH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_SECOND_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_SEVENTH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_SIXTH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_TENTH_SONG) -> ShowWindow(FALSE);
	(CEdit*)GetDlgItem(IDC_THIRD_SONG) -> ShowWindow(FALSE);
}
