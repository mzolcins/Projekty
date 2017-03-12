#pragma once
#include <time.h>
#include<string.h>
#include<iostream>
#include<Windows.h>
namespace Roulette {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox0;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label0;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::PictureBox^  pictureBox54;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::PictureBox^  pictureBox55;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::PictureBox^  pictureBox59;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label1000;
private: System::Windows::Forms::Button^  button2;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox0 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label0 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label1000 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox0))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox0
			// 
			this->pictureBox0->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox0.Image")));
			this->pictureBox0->Location = System::Drawing::Point(196, 12);
			this->pictureBox0->Name = L"pictureBox0";
			this->pictureBox0->Size = System::Drawing::Size(420, 630);
			this->pictureBox0->TabIndex = 0;
			this->pictureBox0->TabStop = false;
			this->pictureBox0->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(111, 660);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Roll";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button1_MouseClick);
			// 
			// label0
			// 
			this->label0->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label0->Location = System::Drawing::Point(195, 645);
			this->label0->Name = L"label0";
			this->label0->Size = System::Drawing::Size(420, 38);
			this->label0->TabIndex = 2;
			this->label0->Text = L"Dakota Skye";
			this->label0->Visible = false;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(195, 645);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(420, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Holly Michaels";
			this->label1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(196, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(420, 630);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(196, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(420, 630);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(195, 645);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(420, 38);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Lexi Belle";
			this->label2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(196, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(420, 630);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(195, 645);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(420, 38);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Siri";
			this->label3->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(196, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(420, 630);
			this->pictureBox4->TabIndex = 9;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(195, 645);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(420, 38);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Remi LaCroix";
			this->label4->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(196, 12);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(420, 630);
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(195, 645);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(420, 38);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Jennifer White";
			this->label5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(196, 12);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(420, 630);
			this->pictureBox6->TabIndex = 13;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(195, 645);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(420, 38);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Veruca James";
			this->label6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(196, 12);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(420, 630);
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(195, 645);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(420, 38);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Tori Black";
			this->label7->Visible = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(196, 12);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(420, 630);
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Visible = false;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(195, 645);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(420, 38);
			this->label8->TabIndex = 18;
			this->label8->Text = L"Hanna Hilton";
			this->label8->Visible = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(196, 12);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(420, 630);
			this->pictureBox9->TabIndex = 19;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Visible = false;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(195, 645);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(420, 38);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Natalia Starr";
			this->label9->Visible = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(196, 12);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(420, 630);
			this->pictureBox10->TabIndex = 21;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Visible = false;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(195, 645);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(420, 38);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Alexis Texas";
			this->label10->Visible = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(196, 12);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(420, 630);
			this->pictureBox11->TabIndex = 23;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Visible = false;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(195, 645);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(420, 38);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Melanie Rios";
			this->label11->Visible = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(196, 12);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(420, 630);
			this->pictureBox12->TabIndex = 25;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Visible = false;
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(195, 645);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(420, 38);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Faye Reagan";
			this->label12->Visible = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(196, 12);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(420, 630);
			this->pictureBox13->TabIndex = 27;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Visible = false;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(195, 645);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(420, 38);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Ashlynn Broke";
			this->label13->Visible = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(196, 12);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(420, 630);
			this->pictureBox14->TabIndex = 29;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Visible = false;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(195, 645);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(420, 38);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Mia Malkova";
			this->label14->Visible = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(196, 12);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(420, 630);
			this->pictureBox15->TabIndex = 31;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Visible = false;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(195, 645);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(420, 38);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Madison Scott";
			this->label15->Visible = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(196, 12);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(420, 630);
			this->pictureBox16->TabIndex = 33;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Visible = false;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(195, 645);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(420, 38);
			this->label16->TabIndex = 34;
			this->label16->Text = L"Emma Mae";
			this->label16->Visible = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(196, 12);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(420, 630);
			this->pictureBox17->TabIndex = 35;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Visible = false;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(195, 645);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(420, 38);
			this->label17->TabIndex = 36;
			this->label17->Text = L"Bonnie Rotten";
			this->label17->Visible = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(196, 12);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(420, 630);
			this->pictureBox18->TabIndex = 37;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Visible = false;
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(195, 645);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(420, 38);
			this->label18->TabIndex = 38;
			this->label18->Text = L"Bibi Jones";
			this->label18->Visible = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(196, 12);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(420, 630);
			this->pictureBox19->TabIndex = 39;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Visible = false;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(195, 645);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(420, 38);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Tanner Mayes";
			this->label19->Visible = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(196, 12);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(420, 630);
			this->pictureBox20->TabIndex = 41;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Visible = false;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(195, 645);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(420, 38);
			this->label20->TabIndex = 42;
			this->label20->Text = L"Kayden Kross";
			this->label20->Visible = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(196, 12);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(420, 630);
			this->pictureBox21->TabIndex = 43;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Visible = false;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(195, 645);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(420, 38);
			this->label21->TabIndex = 44;
			this->label21->Text = L"Jesse Jane";
			this->label21->Visible = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(196, 12);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(420, 630);
			this->pictureBox22->TabIndex = 45;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Visible = false;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(195, 645);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(420, 38);
			this->label22->TabIndex = 46;
			this->label22->Text = L"Shyla Stylez";
			this->label22->Visible = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(196, 12);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(420, 630);
			this->pictureBox23->TabIndex = 47;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Visible = false;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(195, 645);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(420, 38);
			this->label23->TabIndex = 48;
			this->label23->Text = L"Lisa Ann";
			this->label23->Visible = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(196, 12);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(420, 630);
			this->pictureBox24->TabIndex = 49;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Visible = false;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(195, 645);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(420, 38);
			this->label24->TabIndex = 50;
			this->label24->Text = L"Eva Angelina";
			this->label24->Visible = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(196, 12);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(420, 630);
			this->pictureBox25->TabIndex = 51;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Visible = false;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(195, 645);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(420, 38);
			this->label25->TabIndex = 52;
			this->label25->Text = L"Carmella Bing";
			this->label25->Visible = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(196, 12);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(420, 630);
			this->pictureBox26->TabIndex = 53;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Visible = false;
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(195, 645);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(420, 38);
			this->label26->TabIndex = 54;
			this->label26->Text = L"Amy Reid";
			this->label26->Visible = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(196, 12);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(420, 630);
			this->pictureBox27->TabIndex = 55;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Visible = false;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(195, 645);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(420, 38);
			this->label27->TabIndex = 56;
			this->label27->Text = L"Phoenix Marie";
			this->label27->Visible = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(196, 12);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(420, 630);
			this->pictureBox28->TabIndex = 57;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Visible = false;
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(195, 645);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(420, 38);
			this->label28->TabIndex = 58;
			this->label28->Text = L"Nikki Benz";
			this->label28->Visible = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(196, 12);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(420, 630);
			this->pictureBox29->TabIndex = 59;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Visible = false;
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(195, 645);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(420, 38);
			this->label29->TabIndex = 60;
			this->label29->Text = L"Sasha Grey";
			this->label29->Visible = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(196, 12);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(420, 630);
			this->pictureBox30->TabIndex = 61;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Visible = false;
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(195, 645);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(420, 38);
			this->label30->TabIndex = 62;
			this->label30->Text = L"Rachel Roxxx";
			this->label30->Visible = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(196, 12);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(420, 630);
			this->pictureBox31->TabIndex = 63;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Visible = false;
			// 
			// label31
			// 
			this->label31->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(195, 645);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(420, 38);
			this->label31->TabIndex = 64;
			this->label31->Text = L"Tory Lane";
			this->label31->Visible = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(196, 12);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(420, 630);
			this->pictureBox32->TabIndex = 65;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Visible = false;
			// 
			// label32
			// 
			this->label32->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(195, 645);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(420, 38);
			this->label32->TabIndex = 66;
			this->label32->Text = L"Holly Sampson";
			this->label32->Visible = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(196, 12);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(420, 630);
			this->pictureBox33->TabIndex = 67;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Visible = false;
			// 
			// label33
			// 
			this->label33->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(195, 645);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(420, 38);
			this->label33->TabIndex = 68;
			this->label33->Text = L"Sophie Dee";
			this->label33->Visible = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(196, 12);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(420, 630);
			this->pictureBox34->TabIndex = 69;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Visible = false;
			// 
			// label34
			// 
			this->label34->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(195, 645);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(420, 38);
			this->label34->TabIndex = 70;
			this->label34->Text = L"Puma Swede";
			this->label34->Visible = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(196, 12);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(420, 630);
			this->pictureBox35->TabIndex = 71;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Visible = false;
			// 
			// label35
			// 
			this->label35->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(195, 645);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(420, 38);
			this->label35->TabIndex = 72;
			this->label35->Text = L"Julia Ann";
			this->label35->Visible = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(196, 12);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(420, 630);
			this->pictureBox36->TabIndex = 73;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Visible = false;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(195, 645);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(420, 38);
			this->label36->TabIndex = 74;
			this->label36->Text = L"Audrey Bitoni";
			this->label36->Visible = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(196, 12);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(420, 630);
			this->pictureBox37->TabIndex = 75;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Visible = false;
			// 
			// label37
			// 
			this->label37->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(195, 645);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(420, 38);
			this->label37->TabIndex = 76;
			this->label37->Text = L"Aletta Ocean";
			this->label37->Visible = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(196, 12);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(420, 630);
			this->pictureBox38->TabIndex = 77;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Visible = false;
			// 
			// label38
			// 
			this->label38->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(195, 645);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(420, 38);
			this->label38->TabIndex = 78;
			this->label38->Text = L"Cherokee";
			this->label38->Visible = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(196, 12);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(420, 630);
			this->pictureBox39->TabIndex = 79;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Visible = false;
			// 
			// label39
			// 
			this->label39->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(195, 645);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(420, 38);
			this->label39->TabIndex = 80;
			this->label39->Text = L"Dylan Ryder";
			this->label39->Visible = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(196, 12);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(420, 630);
			this->pictureBox40->TabIndex = 81;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Visible = false;
			// 
			// label40
			// 
			this->label40->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(195, 645);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(420, 38);
			this->label40->TabIndex = 82;
			this->label40->Text = L"Lichelle Marie";
			this->label40->Visible = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(196, 12);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(420, 630);
			this->pictureBox41->TabIndex = 83;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Visible = false;
			// 
			// label41
			// 
			this->label41->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(195, 645);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(420, 38);
			this->label41->TabIndex = 84;
			this->label41->Text = L"Tera Patrick";
			this->label41->Visible = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(196, 12);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(420, 630);
			this->pictureBox42->TabIndex = 85;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Visible = false;
			// 
			// label42
			// 
			this->label42->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(195, 645);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(420, 38);
			this->label42->TabIndex = 86;
			this->label42->Text = L"Jenna Jameson";
			this->label42->Visible = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(196, 12);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(420, 630);
			this->pictureBox43->TabIndex = 87;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Visible = false;
			// 
			// label43
			// 
			this->label43->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(195, 645);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(420, 38);
			this->label43->TabIndex = 88;
			this->label43->Text = L"Asa Akira";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label43->Visible = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(195, 12);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(420, 630);
			this->pictureBox44->TabIndex = 89;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Visible = false;
			// 
			// label44
			// 
			this->label44->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(195, 645);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(420, 38);
			this->label44->TabIndex = 90;
			this->label44->Text = L"Jayden James";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label44->Visible = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(196, 12);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(420, 630);
			this->pictureBox45->TabIndex = 91;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Visible = false;
			// 
			// label45
			// 
			this->label45->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(195, 645);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(420, 38);
			this->label45->TabIndex = 92;
			this->label45->Text = L"Jessica Jaymes";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label45->Visible = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(196, 12);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(420, 630);
			this->pictureBox46->TabIndex = 93;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Visible = false;
			// 
			// label46
			// 
			this->label46->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(195, 645);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(420, 38);
			this->label46->TabIndex = 94;
			this->label46->Text = L"Christy Mack";
			this->label46->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label46->Visible = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(196, 12);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(420, 630);
			this->pictureBox47->TabIndex = 95;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Visible = false;
			// 
			// label47
			// 
			this->label47->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(195, 645);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(420, 38);
			this->label47->TabIndex = 96;
			this->label47->Text = L"Kylee Strutt";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label47->Visible = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(196, 12);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(420, 630);
			this->pictureBox48->TabIndex = 97;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Visible = false;
			// 
			// label48
			// 
			this->label48->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(195, 645);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(420, 38);
			this->label48->TabIndex = 98;
			this->label48->Text = L"Gianna Michaels";
			this->label48->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label48->Visible = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(196, 12);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(420, 630);
			this->pictureBox49->TabIndex = 99;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Visible = false;
			// 
			// label49
			// 
			this->label49->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(195, 645);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(420, 38);
			this->label49->TabIndex = 100;
			this->label49->Text = L"London Keyes";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label49->Visible = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(196, 12);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(420, 630);
			this->pictureBox50->TabIndex = 101;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Visible = false;
			// 
			// label50
			// 
			this->label50->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(195, 645);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(420, 38);
			this->label50->TabIndex = 102;
			this->label50->Text = L"Tia Tanaka";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label50->Visible = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(196, 12);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(420, 630);
			this->pictureBox51->TabIndex = 103;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Visible = false;
			// 
			// label51
			// 
			this->label51->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(195, 645);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(420, 38);
			this->label51->TabIndex = 104;
			this->label51->Text = L"Katsuni";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label51->Visible = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(196, 12);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(420, 630);
			this->pictureBox52->TabIndex = 105;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Visible = false;
			// 
			// label52
			// 
			this->label52->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(195, 645);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(420, 38);
			this->label52->TabIndex = 106;
			this->label52->Text = L"Skin Diamond";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label52->Visible = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(196, 12);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(420, 630);
			this->pictureBox53->TabIndex = 107;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Visible = false;
			// 
			// label53
			// 
			this->label53->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(195, 645);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(420, 38);
			this->label53->TabIndex = 108;
			this->label53->Text = L"Lacey Duvalle";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label53->Visible = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(196, 12);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(420, 630);
			this->pictureBox54->TabIndex = 109;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Visible = false;
			// 
			// label54
			// 
			this->label54->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(195, 645);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(420, 38);
			this->label54->TabIndex = 110;
			this->label54->Text = L"Rebecca Linares";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label54->Visible = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(196, 12);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(420, 630);
			this->pictureBox55->TabIndex = 111;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Visible = false;
			// 
			// label55
			// 
			this->label55->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(195, 645);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(420, 38);
			this->label55->TabIndex = 112;
			this->label55->Text = L"Jessie Rogers";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label55->Visible = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(196, 12);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(420, 630);
			this->pictureBox56->TabIndex = 113;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Visible = false;
			// 
			// label56
			// 
			this->label56->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(195, 645);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(420, 38);
			this->label56->TabIndex = 114;
			this->label56->Text = L"Teagan Presley";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label56->Visible = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(196, 12);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(420, 630);
			this->pictureBox57->TabIndex = 115;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Visible = false;
			// 
			// label57
			// 
			this->label57->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(195, 645);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(420, 38);
			this->label57->TabIndex = 116;
			this->label57->Text = L"Piper Perri";
			this->label57->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label57->Visible = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(196, 12);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(420, 630);
			this->pictureBox58->TabIndex = 117;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Visible = false;
			// 
			// label58
			// 
			this->label58->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(195, 645);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(420, 38);
			this->label58->TabIndex = 118;
			this->label58->Text = L"Priya Rai";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label58->Visible = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(196, 12);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(420, 630);
			this->pictureBox59->TabIndex = 119;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Visible = false;
			// 
			// label59
			// 
			this->label59->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(195, 645);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(420, 38);
			this->label59->TabIndex = 120;
			this->label59->Text = L"Mia Khalifa";
			this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label59->Visible = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(196, 12);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(420, 630);
			this->pictureBox60->TabIndex = 121;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Visible = false;
			// 
			// label60
			// 
			this->label60->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(195, 645);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(420, 38);
			this->label60->TabIndex = 122;
			this->label60->Text = L"Kortney Kane";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label60->Visible = false;
			// 
			// label1000
			// 
			this->label1000->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1000->Location = System::Drawing::Point(195, 645);
			this->label1000->Name = L"label1000";
			this->label1000->Size = System::Drawing::Size(420, 38);
			this->label1000->TabIndex = 123;
			this->label1000->Text = L"Ni ma";
			this->label1000->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1000->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(619, 660);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 124;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::button2_MouseClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(776, 721);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1000);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label0);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox0);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox0))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		int number;
		srand(time(NULL));
		number = rand() % 61;
		switch (number)
		{
		case 0:
			this->label0->Visible = 1;
			this->pictureBox0->Visible = 1;
		case 1:
			this->label1->Visible = 1;
			this->pictureBox1->Visible = 1;
		case 2:
			this->label2->Visible = 1;
			this->pictureBox2->Visible = 1;
		case 3:
			this->label3->Visible = 1;
			this->pictureBox3->Visible = 1;
		case 4:
			this->label4->Visible = 1;
			this->pictureBox4->Visible = 1;
		case 5:
			this->label5->Visible = 1;
			this->pictureBox5->Visible = 1;
		case 6:
			this->label6->Visible = 1;
			this->pictureBox6->Visible = 1;
		case 7:
			this->label7->Visible = 1;
			this->pictureBox7->Visible = 1;
		case 8:
			this->label8->Visible = 1;
			this->pictureBox8->Visible = 1;
		case 9:
			this->label9->Visible = 1;
			this->pictureBox9->Visible = 1;
		case 10:
			this->label10->Visible = 1;
			this->pictureBox10->Visible = 1;
		case 11:
			this->label11->Visible = 1;
			this->pictureBox11->Visible = 1;
		case 12:
			this->label12->Visible = 1;
			this->pictureBox12->Visible = 1;
		case 13:
			this->label13->Visible = 1;
			this->pictureBox13->Visible = 1;
		case 14:
			this->label14->Visible = 1;
			this->pictureBox14->Visible = 1;
		case 15:
			this->label15->Visible = 1;
			this->pictureBox15->Visible = 1;
		case 16:
			this->label16->Visible = 1;
			this->pictureBox16->Visible = 1;
		case 17:
			this->label17->Visible = 1;
			this->pictureBox17->Visible = 1;
		case 18:
			this->label18->Visible = 1;
			this->pictureBox18->Visible = 1;
		case 19:
			this->label19->Visible = 1;
			this->pictureBox19->Visible = 1;
		case 20:
			this->label20->Visible = 1;
			this->pictureBox20->Visible = 1;
		case 21:
			this->label21->Visible = 1;
			this->pictureBox21->Visible = 1;
		case 22:
			this->label22->Visible = 1;
			this->pictureBox22->Visible = 1;
		case 23:
			this->label23->Visible = 1;
			this->pictureBox23->Visible = 1;
		case 24:
			this->label24->Visible = 1;
			this->pictureBox24->Visible = 1;
		case 25:
			this->label25->Visible = 1;
			this->pictureBox25->Visible = 1;
		case 26:
			this->label26->Visible = 1;
			this->pictureBox26->Visible = 1;
		case 27:
			this->label27->Visible = 1;
			this->pictureBox27->Visible = 1;
		case 28:
			this->label28->Visible = 1;
			this->pictureBox28->Visible = 1;
		case 29:
			this->label29->Visible = 1;
			this->pictureBox29->Visible = 1;
		case 30:
			this->label30->Visible = 1;
			this->pictureBox30->Visible = 1;
		case 31:
			this->label31->Visible = 1;
			this->pictureBox31->Visible = 1;
		case 32:
			this->label32->Visible = 1;
			this->pictureBox32->Visible = 1;
		case 33:
			this->label33->Visible = 1;
			this->pictureBox33->Visible = 1;
		case 34:
			this->label34->Visible = 1;
			this->pictureBox34->Visible = 1;
		case 35:
			this->label35->Visible = 1;
			this->pictureBox35->Visible = 1;
		case 36:
			this->label36->Visible = 1;
			this->pictureBox36->Visible = 1;
		case 37:
			this->label37->Visible = 1;
			this->pictureBox37->Visible = 1;
		case 38:
			this->label38->Visible = 1;
			this->pictureBox38->Visible = 1;
		case 39:
			this->label39->Visible = 1;
			this->pictureBox39->Visible = 1;
		case 40:
			this->label40->Visible = 1;
			this->pictureBox40->Visible = 1;
		case 41:
			this->label41->Visible = 1;
			this->pictureBox41->Visible = 1;
		case 42:
			this->label42->Visible = 1;
			this->pictureBox42->Visible = 1;
		case 43:
			this->label43->Visible = 1;
			this->pictureBox43->Visible = 1;
		case 44:
			this->label44->Visible = 1;
			this->pictureBox44->Visible = 1;
		case 45:
			this->label45->Visible = 1;
			this->pictureBox45->Visible = 1;
		case 46:
			this->label46->Visible = 1;
			this->pictureBox46->Visible = 1;
		case 47:
			this->label47->Visible = 1;
			this->pictureBox47->Visible = 1;
		case 48:
			this->label48->Visible = 1;
			this->pictureBox48->Visible = 1;
		case 49:
			this->label49->Visible = 1;
			this->pictureBox49->Visible = 1;
		case 50:
			this->label50->Visible = 1;
			this->pictureBox50->Visible = 1;
		case 51:
			this->label51->Visible = 1;
			this->pictureBox51->Visible = 1;
		case 52:
			this->label52->Visible = 1;
			this->pictureBox52->Visible = 1;
		case 53:
			this->label53->Visible = 1;
			this->pictureBox53->Visible = 1;
		case 54:
			this->label54->Visible = 1;
			this->pictureBox54->Visible = 1;
		case 55:
			this->label55->Visible = 1;
			this->pictureBox55->Visible = 1;
		case 56:
			this->label56->Visible = 1;
			this->pictureBox56->Visible = 1;
		case 57:
			this->label57->Visible = 1;
			this->pictureBox57->Visible = 1;
		case 58:
			this->label58->Visible = 1;
			this->pictureBox58->Visible = 1;
		case 59:
			this->label59->Visible = 1;
			this->pictureBox59->Visible = 1;
		case 60:
			this->label60->Visible = 1;
			this->pictureBox60->Visible = 1;

		/*default:
			this->label1000->Visible = 1;*/
		}
		this->button1->Enabled = 0;
		this->button2->Visible = 1;
		number = (rand()*rand())%61;
	}
	private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		this->label0->Visible = 0;
		this->pictureBox0->Visible = 0;

		this->label1->Visible = 0;
		this->pictureBox1->Visible = 0;

		this->label2->Visible = 0;
		this->pictureBox2->Visible = 0;

		this->label3->Visible = 0;
		this->pictureBox3->Visible = 0;

		this->label4->Visible = 0;
		this->pictureBox4->Visible = 0;

		this->label5->Visible = 0;
		this->pictureBox5->Visible = 0;

		this->label6->Visible = 0;
		this->pictureBox6->Visible = 0;

		this->label7->Visible = 0;
		this->pictureBox7->Visible = 0;

		this->label8->Visible = 0;
		this->pictureBox8->Visible = 0;

		this->label9->Visible = 0;
		this->pictureBox9->Visible = 0;

		this->label10->Visible = 0;
		this->pictureBox10->Visible = 0;

		this->label11->Visible = 0;
		this->pictureBox11->Visible = 0;

		this->label12->Visible = 0;
		this->pictureBox12->Visible = 0;

		this->label13->Visible = 0;
		this->pictureBox13->Visible = 0;

		this->label14->Visible = 0;
		this->pictureBox14->Visible = 0;

		this->label15->Visible = 0;
		this->pictureBox15->Visible = 0;

		this->label16->Visible = 0;
		this->pictureBox16->Visible = 0;

		this->label17->Visible = 0;
		this->pictureBox17->Visible = 0;
	
		this->label18->Visible = 0;
		this->pictureBox18->Visible = 0;

		this->label19->Visible = 0;
		this->pictureBox19->Visible = 0;
	
		this->label20->Visible = 0;
		this->pictureBox20->Visible = 0;
	
		this->label21->Visible = 0;
		this->pictureBox21->Visible = 0;
	
		this->label22->Visible = 0;
		this->pictureBox22->Visible = 0;
	
		this->label23->Visible = 0;
		this->pictureBox23->Visible = 0;
	
		this->label24->Visible = 0;
		this->pictureBox24->Visible = 0;
	
		this->label25->Visible = 0;
		this->pictureBox25->Visible = 0;
	
		this->label26->Visible = 0;
		this->pictureBox26->Visible = 0;
	
		this->label27->Visible = 0;
		this->pictureBox27->Visible = 0;
	
		this->label28->Visible = 0;
		this->pictureBox28->Visible = 0;
	
		this->label29->Visible = 0;
		this->pictureBox29->Visible = 0;
	
		this->label30->Visible = 0;
		this->pictureBox30->Visible = 0;

		this->label31->Visible = 0;
		this->pictureBox31->Visible = 0;
	
		this->label32->Visible = 0;
		this->pictureBox32->Visible = 0;
	
		this->label33->Visible = 0;
		this->pictureBox33->Visible = 0;
	
		this->label34->Visible = 0;
		this->pictureBox34->Visible = 0;
	
		this->label35->Visible = 0;
		this->pictureBox35->Visible = 0;
	
		this->label36->Visible = 0;
		this->pictureBox36->Visible = 0;
	
		this->label37->Visible = 0;
		this->pictureBox37->Visible = 0;
	
		this->label38->Visible = 0;
		this->pictureBox38->Visible = 0;

		this->label39->Visible = 0;
		this->pictureBox39->Visible = 0;
	
		this->label40->Visible = 0;
		this->pictureBox40->Visible = 0;
	
		this->label41->Visible = 0;
		this->pictureBox41->Visible = 0;
	
		this->label42->Visible = 0;
		this->pictureBox42->Visible = 0;
	
		this->label43->Visible = 0;
		this->pictureBox43->Visible = 0;
	
		this->label44->Visible = 0;
		this->pictureBox44->Visible = 0;
	
		this->label45->Visible = 0;
		this->pictureBox45->Visible = 0;
	
		this->label46->Visible = 0;
		this->pictureBox46->Visible = 0;
	
		this->label47->Visible = 0;
		this->pictureBox47->Visible = 0;
	
		this->label48->Visible = 0;
		this->pictureBox48->Visible = 0;
	
		this->label49->Visible = 0;
		this->pictureBox49->Visible = 0;
	
		this->label50->Visible = 0;
		this->pictureBox50->Visible = 0;
	
		this->label51->Visible = 0;
		this->pictureBox51->Visible = 0;
	
		this->label52->Visible = 0;
		this->pictureBox52->Visible = 0;
	
		this->label53->Visible = 0;
		this->pictureBox53->Visible = 0;
	
		this->label54->Visible = 0;
		this->pictureBox54->Visible = 0;
	
		this->label55->Visible = 0;
		this->pictureBox55->Visible = 0;
	
		this->label56->Visible = 0;
		this->pictureBox56->Visible = 0;
	
		this->label57->Visible = 0;
		this->pictureBox57->Visible = 0;
	
		this->label58->Visible = 0;
		this->pictureBox58->Visible = 0;
	
		this->label59->Visible = 0;
		this->pictureBox59->Visible = 0;
	
		this->label60->Visible = 0;
		this->pictureBox60->Visible = 0;
	this->button2->Visible = 0;
	this->button1->Enabled = 1;
}
};
}
