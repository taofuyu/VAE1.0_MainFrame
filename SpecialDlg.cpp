// SpecialDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "VAE.h"
#include "SpecialDlg.h"
#include "afxdialogex.h"


// CSpecialDlg �Ի���

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

	m_peditSpecailName  -> ShowWindow(FALSE);//����ר����
	m_peditButtonReturn -> ShowWindow(FALSE);//���ط��ذ�ť
	
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


// CSpecialDlg ��Ϣ�������


void CSpecialDlg::OnStnClickedZdy()
{
	//�����������
	m_peditXWQS   -> ShowWindow(FALSE);
	m_peditSGLMYD -> ShowWindow(FALSE);
	m_peditMYJ    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//�ƶ��������λ��
	m_peditZDY -> MoveWindow(100,130,250,250,true);
	//MoveCover(IDC_ZDY,-100,130);

	//��ʾ�����ؼ�
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "�Զ���";
	m_firstSong  = "�����ʱ";
	m_secondSong = "����Ľ���";
	m_thirdSong  = "�кβ���";
	m_fourthSong = "������";
	m_fivethSong = "��������";
	m_sixthSong  = "�Ǹ�";
	m_seventhSong= "�ϴ�";
	m_eighthSong = "����";
	m_ninethSong = "��������";

	UpdateData(FALSE);

	ShowNineSongs();
}

void CSpecialDlg::OnStnClickedXwqs()
{
	//�����������
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditSGLMYD -> ShowWindow(FALSE);
	m_peditMYJ    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//�ƶ��������λ��
	m_peditXWQS -> MoveWindow(100,130,250,250,true);

	//��ʾ�����ؼ�
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "Ѱ����ʾ";
	m_firstSong  = "̾��";
	m_secondSong = "��ɫͷ��";
	m_thirdSong  = "������ν";
	m_fourthSong = "®����";
	m_fivethSong = "��ɿ��";
	m_sixthSong  = "���ǵ������Ƕ������������˷�";
	m_seventhSong= "�������";
	m_eighthSong = "������;";
	m_ninethSong = "���ǲ�ңԶ�ĵط�";

	UpdateData(FALSE);

	ShowNineSongs();
}

void CSpecialDlg::OnStnClickedSglmyd()
{
	//�����������
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditXWQS -> ShowWindow(FALSE);
	m_peditMYJ    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//�ƶ��������λ��
	m_peditSGLMYD -> MoveWindow(100,130,250,250,true);

	//��ʾ�����ؼ�
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "�ո���û�е�";
	m_firstSong  = "����֮��";
	m_secondSong = "��ɽ���";
	m_thirdSong  = "��ǽ";
	m_fourthSong = "ҽ��";
	m_fivethSong = "΢����";
	m_sixthSong  = "���˲���";
	m_seventhSong= "˫����";
	m_eighthSong = "����";
	m_ninethSong = "���Ʋ���";
	m_tenthSong  = "ǧ�ٶ�";

	UpdateData(FALSE);

	ShowTenSongs();
}

void CSpecialDlg::OnStnClickedMyj()
{
	//�����������
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditXWQS -> ShowWindow(FALSE);
	m_peditSGLMYD    -> ShowWindow(FALSE);
	m_peditBRCCQ  -> ShowWindow(FALSE);

	//�ƶ��������λ��
	m_peditMYJ -> MoveWindow(100,130,250,250,true);

	//��ʾ�����ؼ�
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "���μ�";
	m_firstSong  = "���ܲ���";
	m_secondSong = "����";
	m_thirdSong  = "�Ի���ʦ";
	m_fourthSong = "�黢";
	m_fivethSong = "����";
	m_sixthSong  = "װ��Ϳ";
	m_seventhSong= "play with style";
	m_eighthSong = "������Ĺ�ȥ";
	m_ninethSong = "ȫ�����";
	m_tenthSong  = "����ʽ�İ���";

	UpdateData(FALSE);
	
	ShowTenSongs();
}

void CSpecialDlg::OnStnClickedBrccq()
{
	//�����������
	m_peditZDY    -> ShowWindow(FALSE);
	m_peditXWQS -> ShowWindow(FALSE);
	m_peditSGLMYD    -> ShowWindow(FALSE);
	m_peditMYJ  -> ShowWindow(FALSE);

	//�ƶ��������λ��
	m_peditBRCCQ -> MoveWindow(100,130,250,250,true);

	//��ʾ�����ؼ�
	m_peditButtonReturn -> ShowWindow(TRUE);
	m_peditSpecailName  -> ShowWindow(TRUE);

	UpdateData(TRUE);

	m_specialName = "����Բ�ȥ";
	m_firstSong  = "�ȵ��̻�����";
	m_secondSong = "ɽˮ֮��";
	m_thirdSong  = "��Ϧ";
	m_fourthSong = "���һ�";
	m_fivethSong = "����һ��";
	m_sixthSong  = "����ԼԼ";
	m_seventhSong= "����֮��";
	m_eighthSong = "��ͩ��";
	m_ninethSong = "��ָһ�Ӽ�";
	
	UpdateData(FALSE);
	
	ShowNineSongs();
}

void CSpecialDlg::OnBnClickedButtonReturn()
{
	//��ʾ���з���
	m_peditSpecailName  -> ShowWindow(FALSE);
	m_peditButtonReturn -> ShowWindow(FALSE);
	m_peditZDY    -> ShowWindow(TRUE);
	m_peditXWQS   -> ShowWindow(TRUE);
	m_peditSGLMYD -> ShowWindow(TRUE);
	m_peditMYJ    -> ShowWindow(TRUE);
	m_peditBRCCQ  -> ShowWindow(TRUE);

	//�ƶ����з����λ��
	m_peditZDY    -> MoveWindow(177,35,250,250,true);//����
	m_peditXWQS   -> MoveWindow(480,35,250,250,true);
	m_peditSGLMYD -> MoveWindow(25,328,250,250,true);
	m_peditMYJ    -> MoveWindow(335,328,250,250,true);
	m_peditBRCCQ  -> MoveWindow(638,328,250,250,true);

	//���ظ���Ŀ¼
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
