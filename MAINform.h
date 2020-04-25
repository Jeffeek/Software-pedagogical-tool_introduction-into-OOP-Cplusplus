#pragma once
#include "Themes.h"
#include "Testing.h"
namespace OAIPProject {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace Windows::Forms::Design;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;
	using namespace System::Data::OleDb;
	using namespace System::Data::SQLite;
	using namespace System::Text;
	using namespace System::Linq;
	using namespace System::IO;
	using namespace cli;
	using namespace std;
	/// <summary>
	/// ������ ��� MAINform
	/// </summary>
	public ref class MAINform : public System::Windows::Forms::Form
	{
	private:
		int ID;
		int TestIDselected;
		cli::array<String^>^ ThemesWellDone;
		String^ RightAns;

	private: Bunifu::Framework::UI::BunifuImageButton^ imageButton_exit;
	private: Bunifu::Framework::UI::BunifuDropdown^ bunifuDropdownTHEMES;
	private: Bunifu::Framework::UI::BunifuDropdown^ bunifuDropdownDIFFICULTY;
	private: Bunifu::Framework::UI::BunifuImageButton^ imageButtonTEST;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelIStestPASSED;




	public: 
			List<Themes^>THEMES;
	private: System::Windows::Forms::Panel^ panel2;
	private: XanderUI::XUIRadio^ xuiRadioQ_3;
	private: XanderUI::XUIRadio^ xuiRadioQ_2;
	private: XanderUI::XUIRadio^ xuiRadioQ_1;
	private: Bunifu::Framework::UI::BunifuImageButton^ bunifuImageButtonQUESTION;
	private: System::Windows::Forms::RichTextBox^ richTextBoxTEST_TEXT;
	public:
		List<Testing^>TESTS;

	public:
		MAINform(int id, cli::array<String^>^ Themes)
		{
			InitializeComponent();
			ID = id;
			ThemesWellDone = Themes;
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MAINform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;



	private: System::Windows::Forms::CheckedListBox^ checkedListBoxTHEMES;
	private: System::Windows::Forms::Panel^ panelHEADER;


	private: System::Windows::Forms::Label^ labelID;
	private: System::Windows::Forms::Label^ labelThemesCount;
	private: System::Windows::Forms::Panel^ panelMAIN;


	private: System::Windows::Forms::RichTextBox^ richTextBoxTHEME_TEXT;




	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MAINform::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bunifuDropdownTHEMES = (gcnew Bunifu::Framework::UI::BunifuDropdown());
			this->bunifuDropdownDIFFICULTY = (gcnew Bunifu::Framework::UI::BunifuDropdown());
			this->checkedListBoxTHEMES = (gcnew System::Windows::Forms::CheckedListBox());
			this->panelHEADER = (gcnew System::Windows::Forms::Panel());
			this->labelThemesCount = (gcnew System::Windows::Forms::Label());
			this->labelID = (gcnew System::Windows::Forms::Label());
			this->panelMAIN = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelIStestPASSED = (gcnew System::Windows::Forms::Label());
			this->imageButtonTEST = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->richTextBoxTHEME_TEXT = (gcnew System::Windows::Forms::RichTextBox());
			this->imageButton_exit = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->xuiRadioQ_3 = (gcnew XanderUI::XUIRadio());
			this->xuiRadioQ_2 = (gcnew XanderUI::XUIRadio());
			this->xuiRadioQ_1 = (gcnew XanderUI::XUIRadio());
			this->bunifuImageButtonQUESTION = (gcnew Bunifu::Framework::UI::BunifuImageButton());
			this->richTextBoxTEST_TEXT = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1->SuspendLayout();
			this->panelHEADER->SuspendLayout();
			this->panelMAIN->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButtonTEST))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButtonQUESTION))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->bunifuDropdownTHEMES);
			this->panel1->Controls->Add(this->bunifuDropdownDIFFICULTY);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(206, 54);
			this->panel1->TabIndex = 0;
			// 
			// bunifuDropdownTHEMES
			// 
			this->bunifuDropdownTHEMES->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdownTHEMES->BorderRadius = 3;
			this->bunifuDropdownTHEMES->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuDropdownTHEMES->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuDropdownTHEMES->Items = gcnew cli::array< System::String^  >(0);
			this->bunifuDropdownTHEMES->Location = System::Drawing::Point(4, 29);
			this->bunifuDropdownTHEMES->Name = L"bunifuDropdownTHEMES";
			this->bunifuDropdownTHEMES->NomalColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdownTHEMES->onHoverColor = System::Drawing::Color::LimeGreen;
			this->bunifuDropdownTHEMES->selectedIndex = -1;
			this->bunifuDropdownTHEMES->Size = System::Drawing::Size(202, 24);
			this->bunifuDropdownTHEMES->TabIndex = 24;
			this->bunifuDropdownTHEMES->onItemSelected += gcnew System::EventHandler(this, &MAINform::bunifuDropdownTHEMES_onItemSelected);
			// 
			// bunifuDropdownDIFFICULTY
			// 
			this->bunifuDropdownDIFFICULTY->BackColor = System::Drawing::Color::Transparent;
			this->bunifuDropdownDIFFICULTY->BorderRadius = 3;
			this->bunifuDropdownDIFFICULTY->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuDropdownDIFFICULTY->ForeColor = System::Drawing::Color::MintCream;
			this->bunifuDropdownDIFFICULTY->Items = gcnew cli::array< System::String^  >(4) { L"ALL", L"EASY", L"MEDIUM", L"HARD" };
			this->bunifuDropdownDIFFICULTY->Location = System::Drawing::Point(4, 3);
			this->bunifuDropdownDIFFICULTY->Name = L"bunifuDropdownDIFFICULTY";
			this->bunifuDropdownDIFFICULTY->NomalColor = System::Drawing::Color::DodgerBlue;
			this->bunifuDropdownDIFFICULTY->onHoverColor = System::Drawing::Color::LimeGreen;
			this->bunifuDropdownDIFFICULTY->selectedIndex = 0;
			this->bunifuDropdownDIFFICULTY->Size = System::Drawing::Size(202, 24);
			this->bunifuDropdownDIFFICULTY->TabIndex = 23;
			this->bunifuDropdownDIFFICULTY->onItemSelected += gcnew System::EventHandler(this, &MAINform::bunifuDropdownDIFFICULTY_onItemSelected);
			// 
			// checkedListBoxTHEMES
			// 
			this->checkedListBoxTHEMES->BackColor = System::Drawing::Color::MediumPurple;
			this->checkedListBoxTHEMES->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->checkedListBoxTHEMES->Font = (gcnew System::Drawing::Font(L"Unispace", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBoxTHEMES->FormattingEnabled = true;
			this->checkedListBoxTHEMES->Location = System::Drawing::Point(5, 61);
			this->checkedListBoxTHEMES->Name = L"checkedListBoxTHEMES";
			this->checkedListBoxTHEMES->SelectionMode = System::Windows::Forms::SelectionMode::None;
			this->checkedListBoxTHEMES->Size = System::Drawing::Size(202, 352);
			this->checkedListBoxTHEMES->TabIndex = 1;
			this->checkedListBoxTHEMES->UseTabStops = false;
			// 
			// panelHEADER
			// 
			this->panelHEADER->BackColor = System::Drawing::Color::MediumVioletRed;
			this->panelHEADER->Controls->Add(this->labelThemesCount);
			this->panelHEADER->Controls->Add(this->labelID);
			this->panelHEADER->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->panelHEADER->Location = System::Drawing::Point(208, 4);
			this->panelHEADER->Name = L"panelHEADER";
			this->panelHEADER->Size = System::Drawing::Size(439, 24);
			this->panelHEADER->TabIndex = 2;
			// 
			// labelThemesCount
			// 
			this->labelThemesCount->AutoSize = true;
			this->labelThemesCount->Location = System::Drawing::Point(150, 4);
			this->labelThemesCount->Name = L"labelThemesCount";
			this->labelThemesCount->Size = System::Drawing::Size(132, 19);
			this->labelThemesCount->TabIndex = 1;
			this->labelThemesCount->Text = L"�������� ���: ";
			// 
			// labelID
			// 
			this->labelID->AutoSize = true;
			this->labelID->Location = System::Drawing::Point(3, 5);
			this->labelID->Name = L"labelID";
			this->labelID->Size = System::Drawing::Size(73, 19);
			this->labelID->TabIndex = 0;
			this->labelID->Text = L"��� ID: ";
			// 
			// panelMAIN
			// 
			this->panelMAIN->Controls->Add(this->label2);
			this->panelMAIN->Controls->Add(this->labelIStestPASSED);
			this->panelMAIN->Controls->Add(this->imageButtonTEST);
			this->panelMAIN->Controls->Add(this->richTextBoxTHEME_TEXT);
			this->panelMAIN->Location = System::Drawing::Point(208, 30);
			this->panelMAIN->Name = L"panelMAIN";
			this->panelMAIN->Size = System::Drawing::Size(463, 383);
			this->panelMAIN->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Gray;
			this->label2->Location = System::Drawing::Point(217, 349);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(128, 21);
			this->label2->TabIndex = 4;
			this->label2->Text = L"������ ����:";
			// 
			// labelIStestPASSED
			// 
			this->labelIStestPASSED->AutoSize = true;
			this->labelIStestPASSED->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelIStestPASSED->ForeColor = System::Drawing::Color::Crimson;
			this->labelIStestPASSED->Location = System::Drawing::Point(4, 349);
			this->labelIStestPASSED->Name = L"labelIStestPASSED";
			this->labelIStestPASSED->Size = System::Drawing::Size(161, 21);
			this->labelIStestPASSED->TabIndex = 3;
			this->labelIStestPASSED->Text = L"���� �� �������";
			// 
			// imageButtonTEST
			// 
			this->imageButtonTEST->BackColor = System::Drawing::Color::SlateGray;
			this->imageButtonTEST->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButtonTEST.Image")));
			this->imageButtonTEST->ImageActive = nullptr;
			this->imageButtonTEST->Location = System::Drawing::Point(364, 345);
			this->imageButtonTEST->Name = L"imageButtonTEST";
			this->imageButtonTEST->Size = System::Drawing::Size(88, 31);
			this->imageButtonTEST->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButtonTEST->TabIndex = 2;
			this->imageButtonTEST->TabStop = false;
			this->imageButtonTEST->Zoom = 10;
			this->imageButtonTEST->Click += gcnew System::EventHandler(this, &MAINform::imageButtonTEST_Click);
			// 
			// richTextBoxTHEME_TEXT
			// 
			this->richTextBoxTHEME_TEXT->BackColor = System::Drawing::Color::Black;
			this->richTextBoxTHEME_TEXT->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBoxTHEME_TEXT->ForeColor = System::Drawing::Color::SkyBlue;
			this->richTextBoxTHEME_TEXT->Location = System::Drawing::Point(0, 0);
			this->richTextBoxTHEME_TEXT->Name = L"richTextBoxTHEME_TEXT";
			this->richTextBoxTHEME_TEXT->ReadOnly = true;
			this->richTextBoxTHEME_TEXT->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBoxTHEME_TEXT->Size = System::Drawing::Size(463, 339);
			this->richTextBoxTHEME_TEXT->TabIndex = 0;
			this->richTextBoxTHEME_TEXT->Text = L"�������rthrthhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhrthrthrthrth"
				L"rthrth";
			// 
			// imageButton_exit
			// 
			this->imageButton_exit->BackColor = System::Drawing::Color::Crimson;
			this->imageButton_exit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"imageButton_exit.Image")));
			this->imageButton_exit->ImageActive = nullptr;
			this->imageButton_exit->Location = System::Drawing::Point(652, 5);
			this->imageButton_exit->Name = L"imageButton_exit";
			this->imageButton_exit->Size = System::Drawing::Size(20, 20);
			this->imageButton_exit->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->imageButton_exit->TabIndex = 22;
			this->imageButton_exit->TabStop = false;
			this->imageButton_exit->Zoom = 10;
			this->imageButton_exit->Click += gcnew System::EventHandler(this, &MAINform::imageButton_exit_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->xuiRadioQ_3);
			this->panel2->Controls->Add(this->xuiRadioQ_2);
			this->panel2->Controls->Add(this->xuiRadioQ_1);
			this->panel2->Controls->Add(this->bunifuImageButtonQUESTION);
			this->panel2->Controls->Add(this->richTextBoxTEST_TEXT);
			this->panel2->Location = System::Drawing::Point(5, 419);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(666, 234);
			this->panel2->TabIndex = 23;
			// 
			// xuiRadioQ_3
			// 
			this->xuiRadioQ_3->Checked = false;
			this->xuiRadioQ_3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xuiRadioQ_3->ForeColor = System::Drawing::Color::Turquoise;
			this->xuiRadioQ_3->Location = System::Drawing::Point(75, 136);
			this->xuiRadioQ_3->Name = L"xuiRadioQ_3";
			this->xuiRadioQ_3->RadioColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->xuiRadioQ_3->RadioHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->xuiRadioQ_3->RadioStyle = XanderUI::XUIRadio::Style::Material;
			this->xuiRadioQ_3->Size = System::Drawing::Size(531, 16);
			this->xuiRadioQ_3->TabIndex = 12;
			this->xuiRadioQ_3->Text = L"xuiRadio3";
			this->xuiRadioQ_3->Click += gcnew System::EventHandler(this, &MAINform::xuiRadioQ_Click);
			// 
			// xuiRadioQ_2
			// 
			this->xuiRadioQ_2->Checked = false;
			this->xuiRadioQ_2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xuiRadioQ_2->ForeColor = System::Drawing::Color::Turquoise;
			this->xuiRadioQ_2->Location = System::Drawing::Point(75, 108);
			this->xuiRadioQ_2->Name = L"xuiRadioQ_2";
			this->xuiRadioQ_2->RadioColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->xuiRadioQ_2->RadioHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->xuiRadioQ_2->RadioStyle = XanderUI::XUIRadio::Style::Material;
			this->xuiRadioQ_2->Size = System::Drawing::Size(531, 16);
			this->xuiRadioQ_2->TabIndex = 11;
			this->xuiRadioQ_2->Text = L"xuiRadio2";
			this->xuiRadioQ_2->Click += gcnew System::EventHandler(this, &MAINform::xuiRadioQ_Click);
			// 
			// xuiRadioQ_1
			// 
			this->xuiRadioQ_1->Checked = false;
			this->xuiRadioQ_1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 6.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xuiRadioQ_1->ForeColor = System::Drawing::Color::Turquoise;
			this->xuiRadioQ_1->Location = System::Drawing::Point(75, 80);
			this->xuiRadioQ_1->Name = L"xuiRadioQ_1";
			this->xuiRadioQ_1->RadioColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(162)),
				static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->xuiRadioQ_1->RadioHoverColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->xuiRadioQ_1->RadioStyle = XanderUI::XUIRadio::Style::Material;
			this->xuiRadioQ_1->Size = System::Drawing::Size(531, 16);
			this->xuiRadioQ_1->TabIndex = 10;
			this->xuiRadioQ_1->Text = L"xuiRadio1";
			this->xuiRadioQ_1->Click += gcnew System::EventHandler(this, &MAINform::xuiRadioQ_Click);
			// 
			// bunifuImageButtonQUESTION
			// 
			this->bunifuImageButtonQUESTION->BackColor = System::Drawing::Color::SeaGreen;
			this->bunifuImageButtonQUESTION->Enabled = false;
			this->bunifuImageButtonQUESTION->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuImageButtonQUESTION.Image")));
			this->bunifuImageButtonQUESTION->ImageActive = nullptr;
			this->bunifuImageButtonQUESTION->Location = System::Drawing::Point(207, 168);
			this->bunifuImageButtonQUESTION->Name = L"bunifuImageButtonQUESTION";
			this->bunifuImageButtonQUESTION->Size = System::Drawing::Size(245, 47);
			this->bunifuImageButtonQUESTION->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->bunifuImageButtonQUESTION->TabIndex = 9;
			this->bunifuImageButtonQUESTION->TabStop = false;
			this->bunifuImageButtonQUESTION->Zoom = 10;
			this->bunifuImageButtonQUESTION->Click += gcnew System::EventHandler(this, &MAINform::bunifuImageButtonQUESTION_Click);
			// 
			// richTextBoxTEST_TEXT
			// 
			this->richTextBoxTEST_TEXT->Location = System::Drawing::Point(67, 4);
			this->richTextBoxTEST_TEXT->Name = L"richTextBoxTEST_TEXT";
			this->richTextBoxTEST_TEXT->Size = System::Drawing::Size(539, 70);
			this->richTextBoxTEST_TEXT->TabIndex = 8;
			this->richTextBoxTEST_TEXT->Text = L"";
			// 
			// MAINform
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(676, 418);
			this->ControlBox = false;
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->imageButton_exit);
			this->Controls->Add(this->panelMAIN);
			this->Controls->Add(this->panelHEADER);
			this->Controls->Add(this->checkedListBoxTHEMES);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MAINform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MAINform";
			this->Load += gcnew System::EventHandler(this, &MAINform::MAINform_Load);
			this->panel1->ResumeLayout(false);
			this->panelHEADER->ResumeLayout(false);
			this->panelHEADER->PerformLayout();
			this->panelMAIN->ResumeLayout(false);
			this->panelMAIN->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButtonTEST))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->imageButton_exit))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bunifuImageButtonQUESTION))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: 
		Void FillListBox()
		{
			checkedListBoxTHEMES->Items->Clear();
			bunifuDropdownTHEMES->Clear();
			for (int i = 0; i < THEMES.Count; i++)
			{
				checkedListBoxTHEMES->Items->Add(THEMES[i]->GetName());
				bunifuDropdownTHEMES->AddItem(THEMES[i]->GetName());
				for (int j = 0; j < ThemesWellDone->LongLength; j++)
				{
					if (Convert::ToInt32(ThemesWellDone[j]) == THEMES[i]->GetID())
					{
						checkedListBoxTHEMES->SetItemChecked(i, true);
						break;
					}
				}
			}
		}
		//TODO: ������
		Void FillListBoxParametrised(String^ Parameter)
		{
			checkedListBoxTHEMES->Items->Clear();
			int ptr = 0;
			for (int i = 0; i < THEMES.Count; i++)
			{
				if (THEMES[i]->GetDifficultyString() == Parameter) {					
					checkedListBoxTHEMES->Items->Add(THEMES[i]->GetName());
					bunifuDropdownTHEMES->AddItem(THEMES[i]->GetName());
					for (int j = 0; j < ThemesWellDone->LongLength; j++)
					{
						if (Convert::ToInt32(ThemesWellDone[j]) == THEMES[i]->GetID())
						{
							checkedListBoxTHEMES->SetItemChecked(ptr, true);
							ptr++;
							break;
						}
					}
				}
			}
		}

		Void FillThemesDB()
		{
			THEMES.Clear();
			SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
			try 
			{
				con->Open();
				SQLiteCommand^ cmd = con->CreateCommand();
				cmd->CommandText = "SELECT * FROM Themes";
				SQLiteDataReader^ reader = cmd->ExecuteReader();
				int i = 0;
				while (reader->Read())
				{
					Themes^ OBJ = gcnew Themes();
					OBJ->SetID(reader->GetInt32(0));
					OBJ->SetName(reader->GetString(1));
					OBJ->SetFilePath(reader->GetString(2));
					OBJ->SetDifficulty(reader->GetString(3));
					THEMES.Add(OBJ);
				}
				con->Close();
			}
			catch (Exception^ e)
			{
				MessageBox::Show(" sdljkf" + e->ToString());
			}
			finally
			{
				delete con;
			}
		}

private: System::Void MAINform_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		bunifuDropdownDIFFICULTY->selectedIndex = 0;
		FillThemesDB();
		labelID->Text = "ID: " + ID;
		if (ThemesWellDone->LongLength == 1 && ThemesWellDone[0] == "0")
		{
			labelThemesCount->Text = " �������� ���: 0 / " + THEMES.Count;
		}
		else
		{
			labelThemesCount->Text = "�������� ��� : " + (ThemesWellDone->LongLength - 1) + " / " + THEMES.Count;
		}		
		FillListBox();
		FillTest();
		panelMAIN->Enabled = true;
		bunifuDropdownTHEMES->Enabled = true;
		bunifuDropdownTHEMES->selectedIndex = 0;
	}

private: System::Void comboBoxDIFFICULTY_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
	{
		e->Handled = true;
	}

private: System::Void imageButton_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}

private: System::Void bunifuDropdownDIFFICULTY_onItemSelected(System::Object^ sender, System::EventArgs^ e) 
{
	if (bunifuDropdownDIFFICULTY->selectedIndex == 0)
	{
		checkedListBoxTHEMES->Items->Clear();
		bunifuDropdownTHEMES->Clear();
		FillListBox();
	}
	else
	{
		bunifuDropdownTHEMES->Clear();
		FillListBoxParametrised(Convert::ToString(bunifuDropdownDIFFICULTY->selectedValue));
	}
	bunifuDropdownTHEMES->selectedIndex = 0;
	richTextBoxTHEME_TEXT->Clear();
}

private: System::Void bunifuDropdownTHEMES_onItemSelected(System::Object^ sender, System::EventArgs^ e) 
{
	int ind = 0;
	for (int i = 0; i < THEMES.Count; i++)
	{
		if (THEMES[i]->GetName() == bunifuDropdownTHEMES->selectedValue)
		{
			ind = i;
			for (int j = 0; j < ThemesWellDone->LongLength; j++)
			{
				if (THEMES[i]->GetID() == Convert::ToInt32(ThemesWellDone[j]))
				{
					imageButtonTEST->BackColor = Color::SeaGreen;
					imageButtonTEST->Image = Image::FromFile("Images\\ok.png");
					imageButtonTEST->Enabled = false;
					labelIStestPASSED->Text = "���� �������";
					labelIStestPASSED->ForeColor = Color::SpringGreen;
					break;
				}
				else
				{
					imageButtonTEST->BackColor = Color::SlateGray;
					imageButtonTEST->Image = Image::FromFile("Images\\X.png");
					imageButtonTEST->Enabled = true;
					labelIStestPASSED->Text = "���� �� �������";
					labelIStestPASSED->ForeColor = Color::Crimson;
				}
			}
			break;
		}
	}
	StreamReader^ reader = gcnew StreamReader(THEMES[ind]->GetFilePath());
	richTextBoxTHEME_TEXT->Text = reader->ReadToEnd();
	reader->Close();
	delete reader;
}

private: System::Void imageButtonTEST_Click(System::Object^ sender, System::EventArgs^ e) 
{
	richTextBoxTHEME_TEXT->Text = "";
	panelMAIN->Enabled = false;
	bunifuDropdownTHEMES->Enabled = false;
	int IND = 0;
	for (int i = 0; i < THEMES.Count; i++)
	{
		if (Convert::ToString(bunifuDropdownTHEMES->selectedValue) == THEMES[i]->GetName())
		{
			IND = i;
			break;
		}
	}
	this->ClientSize = System::Drawing::Size(678, 656);
	FillTestJopa(TESTS[IND]);
}

private: void FillTest()
{
	SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
	try 
	{
		con->Open();
		SQLiteCommand^ cmd = con->CreateCommand();
		cmd->CommandText = "SELECT * FROM TESTs";
		SQLiteDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			Testing^ OBJ = gcnew Testing();
			OBJ->SetID(reader->GetInt32(0));
			OBJ->SetThemeID(reader->GetInt32(1));
			OBJ->SetQuestion_1(reader->GetString(2));
			OBJ->SetQuestion_2(reader->GetString(3));
			OBJ->SetQuestion_3(reader->GetString(4));
			OBJ->SetRightAnswer(reader->GetString(5));
			OBJ->SetQUEST(reader->GetString(6));
			TESTS.Add(OBJ);
		}
		con->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show("������ ��" + e->Message);
	}
	finally
	{
		delete con;
	}
}

public: void FillTestJopa(Testing^ OBJ)
{
	richTextBoxTEST_TEXT->Text = OBJ->GetQUEST();
	xuiRadioQ_1->Text = OBJ->GetQuestion_1();
	xuiRadioQ_2->Text = OBJ->GetQuestion_2();
	xuiRadioQ_3->Text = OBJ->GetQuestion_3();
	RightAns = OBJ->GetRightAnswer();
	TestIDselected = OBJ->GetID();
}

private: System::Void bunifuImageButtonQUESTION_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (xuiRadioQ_1->Checked)
	{
		if (xuiRadioQ_1->Text == RightAns)
		{
			MessageBox::Show("YES");
			fillDataBaseWithTheCorrectAns();
		}
		else
		{
			MessageBox::Show("NO");
		}
	}
	else if (xuiRadioQ_2->Checked)
	{
		if (xuiRadioQ_2->Text == RightAns)
		{
			MessageBox::Show("YES");
			fillDataBaseWithTheCorrectAns();

		}
		else
		{
			MessageBox::Show("NO");
		}
	}
	else if (xuiRadioQ_3->Checked)
	{
		if (xuiRadioQ_3->Text == RightAns)
		{
			MessageBox::Show("YES");
			fillDataBaseWithTheCorrectAns();
		}
		else
		{
			MessageBox::Show("NO");
		}
	}
}

private: System::Void xuiRadioQ_Click(System::Object^ sender, System::EventArgs^ e) 
{
	bunifuImageButtonQUESTION->Enabled = true;
}

private: void fillDataBaseWithTheCorrectAns()
{
	SQLiteConnection^ con = gcnew SQLiteConnection("Data Source=DataBases\\OAiP.db");
	try
	{
		String^ strRIGHTANSers;
		con->Open();
		SQLiteCommand^ cmd = con->CreateCommand();
		cmd->CommandText = "SELECT PassedThemes FROM Users WHERE ID=" + ID;
		strRIGHTANSers = cmd->ExecuteScalar()->ToString();
		delete cmd;
		strRIGHTANSers += "," + TestIDselected;
		SQLiteCommand^ cmd2 = con->CreateCommand();
		cmd2->CommandText = "UPDATE Users SET PassedThemes=" + "'" + strRIGHTANSers + "' WHERE ID=" + ID + ";";
		cmd2->ExecuteNonQuery();
		ThemesWellDone = strRIGHTANSers->Split(',');
		delete cmd2;
		con->Close();
		this->ClientSize = System::Drawing::Size(678, 419);
		MAINform_Load(gcnew Object, gcnew EventArgs);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}
	finally
	{
		delete con;
	}
}
};
}
