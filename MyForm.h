#pragma once
#include "Answer.h"
#include <ctime>
#include <cstdlib> 

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Reflection;
	using namespace System::Resources;


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

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  red;
	private: System::Windows::Forms::Button^  yellow;
	private: System::Windows::Forms::Button^  white;



	private: System::Windows::Forms::Button^  green;

	private: System::Windows::Forms::Button^  blue;
	
	private: System::Windows::Forms::Button^  black;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;









	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
private: System::Windows::Forms::PictureBox^  pictureBox49;
private: System::Windows::Forms::PictureBox^  pictureBox50;
private: System::Windows::Forms::PictureBox^  pictureBox51;
private: System::Windows::Forms::PictureBox^  pictureBox52;
private: System::Windows::Forms::PictureBox^  pictureBox53;
private: System::Windows::Forms::PictureBox^  pictureBox54;
private: System::Windows::Forms::PictureBox^  pictureBox55;
private: System::Windows::Forms::PictureBox^  pictureBox56;
private: System::Windows::Forms::PictureBox^  pictureBox57;
private: System::Windows::Forms::PictureBox^  pictureBox58;
private: System::Windows::Forms::PictureBox^  pictureBox59;
private: System::Windows::Forms::PictureBox^  pictureBox60;
private: System::Windows::Forms::PictureBox^  pictureBox61;
private: System::Windows::Forms::PictureBox^  pictureBox62;
private: System::Windows::Forms::PictureBox^  pictureBox63;
private: System::Windows::Forms::PictureBox^  pictureBox64;
private: System::Windows::Forms::PictureBox^  pictureBox65;
private: System::Windows::Forms::PictureBox^  pictureBox66;
private: System::Windows::Forms::PictureBox^  pictureBox67;
private: System::Windows::Forms::PictureBox^  pictureBox68;
private: System::Windows::Forms::PictureBox^  pictureBox69;
private: System::Windows::Forms::PictureBox^  pictureBox70;
private: System::Windows::Forms::PictureBox^  pictureBox71;
private: System::Windows::Forms::PictureBox^  pictureBox72;
private: System::Windows::Forms::PictureBox^  pictureBox73;
private: System::Windows::Forms::PictureBox^  pictureBox74;
private: System::Windows::Forms::PictureBox^  pictureBox75;
private: System::Windows::Forms::PictureBox^  pictureBox76;
private: System::Windows::Forms::PictureBox^  pictureBox77;
private: System::Windows::Forms::PictureBox^  pictureBox78;
private: System::Windows::Forms::PictureBox^  pictureBox79;
private: System::Windows::Forms::PictureBox^  pictureBox80;
private: System::Windows::Forms::PictureBox^  pictureBox81;
private: System::Windows::Forms::PictureBox^  pictureBox82;
private: System::Windows::Forms::PictureBox^  pictureBox83;
private: System::Windows::Forms::PictureBox^  pictureBox84;
private: System::Windows::Forms::PictureBox^  pictureBox85;
private: System::Windows::Forms::PictureBox^  pictureBox86;
private: System::Windows::Forms::PictureBox^  pictureBox87;
private: System::Windows::Forms::PictureBox^  pictureBox88;
private: System::Windows::Forms::PictureBox^  pictureBox89;
private: System::Windows::Forms::PictureBox^  pictureBox90;
private: System::Windows::Forms::PictureBox^  pictureBox91;
private: System::Windows::Forms::PictureBox^  pictureBox92;
private: System::Windows::Forms::PictureBox^  pictureBox93;
private: System::Windows::Forms::PictureBox^  pictureBox94;
private: System::Windows::Forms::PictureBox^  pictureBox95;
private: System::Windows::Forms::PictureBox^  pictureBox96;
private: System::Windows::Forms::PictureBox^  pictureBox97;
private: System::Windows::Forms::PictureBox^  pictureBox98;
private: System::Windows::Forms::PictureBox^  pictureBox99;
private: System::Windows::Forms::PictureBox^  pictureBox100;
private: System::Windows::Forms::PictureBox^  pictureBox101;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem1;
private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  showAnswerToolStripMenuItem;








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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->red = (gcnew System::Windows::Forms::Button());
			this->yellow = (gcnew System::Windows::Forms::Button());
			this->white = (gcnew System::Windows::Forms::Button());
			this->green = (gcnew System::Windows::Forms::Button());
			this->blue = (gcnew System::Windows::Forms::Button());
			this->black = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox67 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox68 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox69 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox70 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox71 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox72 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox73 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox74 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox75 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox76 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox77 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox78 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox79 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox80 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox81 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox82 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox83 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox84 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox85 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox86 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox87 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox88 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox89 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox90 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox91 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox92 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox93 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox94 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox95 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox96 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox97 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox98 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox99 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox100 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox101 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->showAnswerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(340, 452);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Commit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(340, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"New Game";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(340, 60);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(84, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Show Answer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// red
			// 
			this->red->BackColor = System::Drawing::Color::Transparent;
			this->red->FlatAppearance->BorderSize = 0;
			this->red->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->red->Location = System::Drawing::Point(326, 415);
			this->red->Name = L"red";
			this->red->Size = System::Drawing::Size(20, 22);
			this->red->TabIndex = 4;
			this->red->UseVisualStyleBackColor = false;
			this->red->Click += gcnew System::EventHandler(this, &MyForm::red_Click);
			// 
			// yellow
			// 
			this->yellow->BackColor = System::Drawing::Color::Transparent;
			this->yellow->FlatAppearance->BorderSize = 0;
			this->yellow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->yellow->Location = System::Drawing::Point(378, 387);
			this->yellow->Name = L"yellow";
			this->yellow->Size = System::Drawing::Size(20, 22);
			this->yellow->TabIndex = 5;
			this->yellow->UseVisualStyleBackColor = false;
			this->yellow->Click += gcnew System::EventHandler(this, &MyForm::yellow_Click);
			// 
			// white
			// 
			this->white->AllowDrop = true;
			this->white->BackColor = System::Drawing::Color::Transparent;
			this->white->FlatAppearance->BorderSize = 0;
			this->white->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->white->Location = System::Drawing::Point(352, 387);
			this->white->Name = L"white";
			this->white->Size = System::Drawing::Size(20, 22);
			this->white->TabIndex = 6;
			this->white->UseVisualStyleBackColor = false;
			this->white->Click += gcnew System::EventHandler(this, &MyForm::white_Click);
			this->white->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::white_MouseDown);
			this->white->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::white_MouseMove);
			// 
			// green
			// 
			this->green->BackColor = System::Drawing::Color::Transparent;
			this->green->FlatAppearance->BorderSize = 0;
			this->green->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->green->Location = System::Drawing::Point(404, 415);
			this->green->Name = L"green";
			this->green->Size = System::Drawing::Size(20, 22);
			this->green->TabIndex = 7;
			this->green->UseVisualStyleBackColor = false;
			this->green->Click += gcnew System::EventHandler(this, &MyForm::green_Click);
			// 
			// blue
			// 
			this->blue->BackColor = System::Drawing::Color::Transparent;
			this->blue->FlatAppearance->BorderSize = 0;
			this->blue->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->blue->Location = System::Drawing::Point(378, 415);
			this->blue->Name = L"blue";
			this->blue->Size = System::Drawing::Size(20, 22);
			this->blue->TabIndex = 8;
			this->blue->UseVisualStyleBackColor = false;
			this->blue->Click += gcnew System::EventHandler(this, &MyForm::blue_Click);
			// 
			// black
			// 
			this->black->BackColor = System::Drawing::Color::Transparent;
			this->black->FlatAppearance->BorderSize = 0;
			this->black->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->black->Location = System::Drawing::Point(352, 415);
			this->black->Name = L"black";
			this->black->Size = System::Drawing::Size(20, 22);
			this->black->TabIndex = 9;
			this->black->UseVisualStyleBackColor = false;
			this->black->Click += gcnew System::EventHandler(this, &MyForm::black_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 435);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 27);
			this->label1->TabIndex = 10;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(18, 402);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 27);
			this->label2->TabIndex = 11;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(18, 369);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 27);
			this->label3->TabIndex = 12;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(18, 336);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 27);
			this->label4->TabIndex = 13;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(18, 303);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 27);
			this->label5->TabIndex = 14;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(18, 270);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 27);
			this->label6->TabIndex = 15;
			this->label6->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(18, 237);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 27);
			this->label7->TabIndex = 16;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 204);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 27);
			this->label8->TabIndex = 17;
			this->label8->Text = L"8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(18, 171);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 27);
			this->label9->TabIndex = 18;
			this->label9->Text = L"9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 27);
			this->label10->TabIndex = 19;
			this->label10->Text = L"10";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 105);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 27);
			this->label11->TabIndex = 20;
			this->label11->Text = L"11";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(12, 72);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 27);
			this->label12->TabIndex = 21;
			this->label12->Text = L"12";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->InitialImage = nullptr;
			this->pictureBox2->Location = System::Drawing::Point(152, 434);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(30, 27);
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::pictureBox2_DragDrop);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->InitialImage = nullptr;
			this->pictureBox1->Location = System::Drawing::Point(188, 434);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(30, 27);
			this->pictureBox1->TabIndex = 31;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox3->InitialImage = nullptr;
			this->pictureBox3->Location = System::Drawing::Point(116, 434);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(30, 27);
			this->pictureBox3->TabIndex = 32;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox4->InitialImage = nullptr;
			this->pictureBox4->Location = System::Drawing::Point(80, 434);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(30, 27);
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox5->InitialImage = nullptr;
			this->pictureBox5->Location = System::Drawing::Point(188, 402);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 27);
			this->pictureBox5->TabIndex = 37;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox6->InitialImage = nullptr;
			this->pictureBox6->Location = System::Drawing::Point(152, 402);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(30, 27);
			this->pictureBox6->TabIndex = 36;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox7->InitialImage = nullptr;
			this->pictureBox7->Location = System::Drawing::Point(116, 402);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(30, 27);
			this->pictureBox7->TabIndex = 35;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox8->InitialImage = nullptr;
			this->pictureBox8->Location = System::Drawing::Point(80, 402);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(30, 27);
			this->pictureBox8->TabIndex = 34;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox9->InitialImage = nullptr;
			this->pictureBox9->Location = System::Drawing::Point(188, 369);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(30, 27);
			this->pictureBox9->TabIndex = 41;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox10->InitialImage = nullptr;
			this->pictureBox10->Location = System::Drawing::Point(152, 369);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(30, 27);
			this->pictureBox10->TabIndex = 40;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox11->InitialImage = nullptr;
			this->pictureBox11->Location = System::Drawing::Point(116, 369);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(30, 27);
			this->pictureBox11->TabIndex = 39;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox12->InitialImage = nullptr;
			this->pictureBox12->Location = System::Drawing::Point(80, 369);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(30, 27);
			this->pictureBox12->TabIndex = 38;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox13->InitialImage = nullptr;
			this->pictureBox13->Location = System::Drawing::Point(188, 336);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(30, 27);
			this->pictureBox13->TabIndex = 45;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox14->InitialImage = nullptr;
			this->pictureBox14->Location = System::Drawing::Point(152, 336);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(30, 27);
			this->pictureBox14->TabIndex = 44;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox15->InitialImage = nullptr;
			this->pictureBox15->Location = System::Drawing::Point(116, 336);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(30, 27);
			this->pictureBox15->TabIndex = 43;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox16->InitialImage = nullptr;
			this->pictureBox16->Location = System::Drawing::Point(80, 336);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(30, 27);
			this->pictureBox16->TabIndex = 42;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox17->InitialImage = nullptr;
			this->pictureBox17->Location = System::Drawing::Point(188, 303);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(30, 27);
			this->pictureBox17->TabIndex = 49;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox18->InitialImage = nullptr;
			this->pictureBox18->Location = System::Drawing::Point(152, 303);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(30, 27);
			this->pictureBox18->TabIndex = 48;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox19->InitialImage = nullptr;
			this->pictureBox19->Location = System::Drawing::Point(116, 303);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(30, 27);
			this->pictureBox19->TabIndex = 47;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox20->InitialImage = nullptr;
			this->pictureBox20->Location = System::Drawing::Point(80, 303);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(30, 27);
			this->pictureBox20->TabIndex = 46;
			this->pictureBox20->TabStop = false;
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox21->InitialImage = nullptr;
			this->pictureBox21->Location = System::Drawing::Point(188, 270);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(30, 27);
			this->pictureBox21->TabIndex = 53;
			this->pictureBox21->TabStop = false;
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox22->InitialImage = nullptr;
			this->pictureBox22->Location = System::Drawing::Point(152, 270);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(30, 27);
			this->pictureBox22->TabIndex = 52;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox23->InitialImage = nullptr;
			this->pictureBox23->Location = System::Drawing::Point(116, 270);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(30, 27);
			this->pictureBox23->TabIndex = 51;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox24->InitialImage = nullptr;
			this->pictureBox24->Location = System::Drawing::Point(80, 270);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(30, 27);
			this->pictureBox24->TabIndex = 50;
			this->pictureBox24->TabStop = false;
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox25->InitialImage = nullptr;
			this->pictureBox25->Location = System::Drawing::Point(188, 237);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(30, 27);
			this->pictureBox25->TabIndex = 57;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox26->InitialImage = nullptr;
			this->pictureBox26->Location = System::Drawing::Point(152, 237);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(30, 27);
			this->pictureBox26->TabIndex = 56;
			this->pictureBox26->TabStop = false;
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox27->InitialImage = nullptr;
			this->pictureBox27->Location = System::Drawing::Point(116, 237);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(30, 27);
			this->pictureBox27->TabIndex = 55;
			this->pictureBox27->TabStop = false;
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox28->InitialImage = nullptr;
			this->pictureBox28->Location = System::Drawing::Point(80, 237);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(30, 27);
			this->pictureBox28->TabIndex = 54;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox29->InitialImage = nullptr;
			this->pictureBox29->Location = System::Drawing::Point(188, 204);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(30, 27);
			this->pictureBox29->TabIndex = 61;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox30->InitialImage = nullptr;
			this->pictureBox30->Location = System::Drawing::Point(152, 204);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(30, 27);
			this->pictureBox30->TabIndex = 60;
			this->pictureBox30->TabStop = false;
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox31->InitialImage = nullptr;
			this->pictureBox31->Location = System::Drawing::Point(116, 204);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(30, 27);
			this->pictureBox31->TabIndex = 59;
			this->pictureBox31->TabStop = false;
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox32->InitialImage = nullptr;
			this->pictureBox32->Location = System::Drawing::Point(80, 204);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(30, 27);
			this->pictureBox32->TabIndex = 58;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox33->InitialImage = nullptr;
			this->pictureBox33->Location = System::Drawing::Point(188, 171);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(30, 27);
			this->pictureBox33->TabIndex = 65;
			this->pictureBox33->TabStop = false;
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox34->InitialImage = nullptr;
			this->pictureBox34->Location = System::Drawing::Point(152, 171);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(30, 27);
			this->pictureBox34->TabIndex = 64;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox35->InitialImage = nullptr;
			this->pictureBox35->Location = System::Drawing::Point(116, 171);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(30, 27);
			this->pictureBox35->TabIndex = 63;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox36->InitialImage = nullptr;
			this->pictureBox36->Location = System::Drawing::Point(80, 171);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(30, 27);
			this->pictureBox36->TabIndex = 62;
			this->pictureBox36->TabStop = false;
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox37->InitialImage = nullptr;
			this->pictureBox37->Location = System::Drawing::Point(188, 138);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(30, 27);
			this->pictureBox37->TabIndex = 69;
			this->pictureBox37->TabStop = false;
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox38->InitialImage = nullptr;
			this->pictureBox38->Location = System::Drawing::Point(152, 138);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(30, 27);
			this->pictureBox38->TabIndex = 68;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox39->InitialImage = nullptr;
			this->pictureBox39->Location = System::Drawing::Point(116, 138);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(30, 27);
			this->pictureBox39->TabIndex = 67;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox40->InitialImage = nullptr;
			this->pictureBox40->Location = System::Drawing::Point(80, 138);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(30, 27);
			this->pictureBox40->TabIndex = 66;
			this->pictureBox40->TabStop = false;
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox41->InitialImage = nullptr;
			this->pictureBox41->Location = System::Drawing::Point(188, 105);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(30, 27);
			this->pictureBox41->TabIndex = 73;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox42->InitialImage = nullptr;
			this->pictureBox42->Location = System::Drawing::Point(152, 105);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(30, 27);
			this->pictureBox42->TabIndex = 72;
			this->pictureBox42->TabStop = false;
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox43->InitialImage = nullptr;
			this->pictureBox43->Location = System::Drawing::Point(116, 105);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(30, 27);
			this->pictureBox43->TabIndex = 71;
			this->pictureBox43->TabStop = false;
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox44->InitialImage = nullptr;
			this->pictureBox44->Location = System::Drawing::Point(80, 105);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(30, 27);
			this->pictureBox44->TabIndex = 70;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox45->InitialImage = nullptr;
			this->pictureBox45->Location = System::Drawing::Point(188, 72);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(30, 27);
			this->pictureBox45->TabIndex = 77;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox46->InitialImage = nullptr;
			this->pictureBox46->Location = System::Drawing::Point(152, 72);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(30, 27);
			this->pictureBox46->TabIndex = 76;
			this->pictureBox46->TabStop = false;
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox47->InitialImage = nullptr;
			this->pictureBox47->Location = System::Drawing::Point(116, 72);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(30, 27);
			this->pictureBox47->TabIndex = 75;
			this->pictureBox47->TabStop = false;
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox48->InitialImage = nullptr;
			this->pictureBox48->Location = System::Drawing::Point(80, 72);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(30, 27);
			this->pictureBox48->TabIndex = 74;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox49->Location = System::Drawing::Point(225, 435);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(13, 13);
			this->pictureBox49->TabIndex = 78;
			this->pictureBox49->TabStop = false;
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox50->Location = System::Drawing::Point(225, 448);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(13, 13);
			this->pictureBox50->TabIndex = 79;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox51->Location = System::Drawing::Point(238, 448);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(13, 13);
			this->pictureBox51->TabIndex = 81;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox52->Location = System::Drawing::Point(238, 435);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(13, 13);
			this->pictureBox52->TabIndex = 80;
			this->pictureBox52->TabStop = false;
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox53->Location = System::Drawing::Point(238, 416);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(13, 13);
			this->pictureBox53->TabIndex = 85;
			this->pictureBox53->TabStop = false;
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox54->Location = System::Drawing::Point(238, 403);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(13, 13);
			this->pictureBox54->TabIndex = 84;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox55->Location = System::Drawing::Point(225, 416);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(13, 13);
			this->pictureBox55->TabIndex = 83;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox56->Location = System::Drawing::Point(225, 403);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(13, 13);
			this->pictureBox56->TabIndex = 82;
			this->pictureBox56->TabStop = false;
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox57->Location = System::Drawing::Point(238, 383);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(13, 13);
			this->pictureBox57->TabIndex = 89;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox58->Location = System::Drawing::Point(238, 370);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(13, 13);
			this->pictureBox58->TabIndex = 88;
			this->pictureBox58->TabStop = false;
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox59->Location = System::Drawing::Point(225, 383);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(13, 13);
			this->pictureBox59->TabIndex = 87;
			this->pictureBox59->TabStop = false;
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox60->Location = System::Drawing::Point(225, 370);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(13, 13);
			this->pictureBox60->TabIndex = 86;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox61->Location = System::Drawing::Point(238, 350);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(13, 13);
			this->pictureBox61->TabIndex = 93;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox62->Location = System::Drawing::Point(238, 337);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(13, 13);
			this->pictureBox62->TabIndex = 92;
			this->pictureBox62->TabStop = false;
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox63->Location = System::Drawing::Point(225, 350);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(13, 13);
			this->pictureBox63->TabIndex = 91;
			this->pictureBox63->TabStop = false;
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox64->Location = System::Drawing::Point(225, 337);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(13, 13);
			this->pictureBox64->TabIndex = 90;
			this->pictureBox64->TabStop = false;
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox65->Location = System::Drawing::Point(238, 317);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(13, 13);
			this->pictureBox65->TabIndex = 97;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox66->Location = System::Drawing::Point(238, 304);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(13, 13);
			this->pictureBox66->TabIndex = 96;
			this->pictureBox66->TabStop = false;
			// 
			// pictureBox67
			// 
			this->pictureBox67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox67->Location = System::Drawing::Point(225, 317);
			this->pictureBox67->Name = L"pictureBox67";
			this->pictureBox67->Size = System::Drawing::Size(13, 13);
			this->pictureBox67->TabIndex = 95;
			this->pictureBox67->TabStop = false;
			// 
			// pictureBox68
			// 
			this->pictureBox68->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox68->Location = System::Drawing::Point(225, 304);
			this->pictureBox68->Name = L"pictureBox68";
			this->pictureBox68->Size = System::Drawing::Size(13, 13);
			this->pictureBox68->TabIndex = 94;
			this->pictureBox68->TabStop = false;
			// 
			// pictureBox69
			// 
			this->pictureBox69->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox69->Location = System::Drawing::Point(238, 284);
			this->pictureBox69->Name = L"pictureBox69";
			this->pictureBox69->Size = System::Drawing::Size(13, 13);
			this->pictureBox69->TabIndex = 101;
			this->pictureBox69->TabStop = false;
			// 
			// pictureBox70
			// 
			this->pictureBox70->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox70->Location = System::Drawing::Point(238, 271);
			this->pictureBox70->Name = L"pictureBox70";
			this->pictureBox70->Size = System::Drawing::Size(13, 13);
			this->pictureBox70->TabIndex = 100;
			this->pictureBox70->TabStop = false;
			// 
			// pictureBox71
			// 
			this->pictureBox71->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox71->Location = System::Drawing::Point(225, 284);
			this->pictureBox71->Name = L"pictureBox71";
			this->pictureBox71->Size = System::Drawing::Size(13, 13);
			this->pictureBox71->TabIndex = 99;
			this->pictureBox71->TabStop = false;
			// 
			// pictureBox72
			// 
			this->pictureBox72->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox72->Location = System::Drawing::Point(225, 271);
			this->pictureBox72->Name = L"pictureBox72";
			this->pictureBox72->Size = System::Drawing::Size(13, 13);
			this->pictureBox72->TabIndex = 98;
			this->pictureBox72->TabStop = false;
			// 
			// pictureBox73
			// 
			this->pictureBox73->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox73->Location = System::Drawing::Point(238, 251);
			this->pictureBox73->Name = L"pictureBox73";
			this->pictureBox73->Size = System::Drawing::Size(13, 13);
			this->pictureBox73->TabIndex = 105;
			this->pictureBox73->TabStop = false;
			// 
			// pictureBox74
			// 
			this->pictureBox74->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox74->Location = System::Drawing::Point(238, 238);
			this->pictureBox74->Name = L"pictureBox74";
			this->pictureBox74->Size = System::Drawing::Size(13, 13);
			this->pictureBox74->TabIndex = 104;
			this->pictureBox74->TabStop = false;
			// 
			// pictureBox75
			// 
			this->pictureBox75->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox75->Location = System::Drawing::Point(225, 251);
			this->pictureBox75->Name = L"pictureBox75";
			this->pictureBox75->Size = System::Drawing::Size(13, 13);
			this->pictureBox75->TabIndex = 103;
			this->pictureBox75->TabStop = false;
			// 
			// pictureBox76
			// 
			this->pictureBox76->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox76->Location = System::Drawing::Point(225, 238);
			this->pictureBox76->Name = L"pictureBox76";
			this->pictureBox76->Size = System::Drawing::Size(13, 13);
			this->pictureBox76->TabIndex = 102;
			this->pictureBox76->TabStop = false;
			// 
			// pictureBox77
			// 
			this->pictureBox77->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox77->Location = System::Drawing::Point(238, 218);
			this->pictureBox77->Name = L"pictureBox77";
			this->pictureBox77->Size = System::Drawing::Size(13, 13);
			this->pictureBox77->TabIndex = 109;
			this->pictureBox77->TabStop = false;
			// 
			// pictureBox78
			// 
			this->pictureBox78->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox78->Location = System::Drawing::Point(238, 205);
			this->pictureBox78->Name = L"pictureBox78";
			this->pictureBox78->Size = System::Drawing::Size(13, 13);
			this->pictureBox78->TabIndex = 108;
			this->pictureBox78->TabStop = false;
			// 
			// pictureBox79
			// 
			this->pictureBox79->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox79->Location = System::Drawing::Point(225, 218);
			this->pictureBox79->Name = L"pictureBox79";
			this->pictureBox79->Size = System::Drawing::Size(13, 13);
			this->pictureBox79->TabIndex = 107;
			this->pictureBox79->TabStop = false;
			// 
			// pictureBox80
			// 
			this->pictureBox80->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox80->Location = System::Drawing::Point(225, 205);
			this->pictureBox80->Name = L"pictureBox80";
			this->pictureBox80->Size = System::Drawing::Size(13, 13);
			this->pictureBox80->TabIndex = 106;
			this->pictureBox80->TabStop = false;
			// 
			// pictureBox81
			// 
			this->pictureBox81->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox81->Location = System::Drawing::Point(238, 185);
			this->pictureBox81->Name = L"pictureBox81";
			this->pictureBox81->Size = System::Drawing::Size(13, 13);
			this->pictureBox81->TabIndex = 113;
			this->pictureBox81->TabStop = false;
			// 
			// pictureBox82
			// 
			this->pictureBox82->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox82->Location = System::Drawing::Point(238, 172);
			this->pictureBox82->Name = L"pictureBox82";
			this->pictureBox82->Size = System::Drawing::Size(13, 13);
			this->pictureBox82->TabIndex = 112;
			this->pictureBox82->TabStop = false;
			// 
			// pictureBox83
			// 
			this->pictureBox83->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox83->Location = System::Drawing::Point(225, 185);
			this->pictureBox83->Name = L"pictureBox83";
			this->pictureBox83->Size = System::Drawing::Size(13, 13);
			this->pictureBox83->TabIndex = 111;
			this->pictureBox83->TabStop = false;
			// 
			// pictureBox84
			// 
			this->pictureBox84->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox84->Location = System::Drawing::Point(225, 172);
			this->pictureBox84->Name = L"pictureBox84";
			this->pictureBox84->Size = System::Drawing::Size(13, 13);
			this->pictureBox84->TabIndex = 110;
			this->pictureBox84->TabStop = false;
			// 
			// pictureBox85
			// 
			this->pictureBox85->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox85->Location = System::Drawing::Point(238, 152);
			this->pictureBox85->Name = L"pictureBox85";
			this->pictureBox85->Size = System::Drawing::Size(13, 13);
			this->pictureBox85->TabIndex = 117;
			this->pictureBox85->TabStop = false;
			// 
			// pictureBox86
			// 
			this->pictureBox86->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox86->Location = System::Drawing::Point(238, 139);
			this->pictureBox86->Name = L"pictureBox86";
			this->pictureBox86->Size = System::Drawing::Size(13, 13);
			this->pictureBox86->TabIndex = 116;
			this->pictureBox86->TabStop = false;
			// 
			// pictureBox87
			// 
			this->pictureBox87->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox87->Location = System::Drawing::Point(225, 152);
			this->pictureBox87->Name = L"pictureBox87";
			this->pictureBox87->Size = System::Drawing::Size(13, 13);
			this->pictureBox87->TabIndex = 115;
			this->pictureBox87->TabStop = false;
			// 
			// pictureBox88
			// 
			this->pictureBox88->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox88->Location = System::Drawing::Point(225, 139);
			this->pictureBox88->Name = L"pictureBox88";
			this->pictureBox88->Size = System::Drawing::Size(13, 13);
			this->pictureBox88->TabIndex = 114;
			this->pictureBox88->TabStop = false;
			// 
			// pictureBox89
			// 
			this->pictureBox89->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox89->Location = System::Drawing::Point(238, 119);
			this->pictureBox89->Name = L"pictureBox89";
			this->pictureBox89->Size = System::Drawing::Size(13, 13);
			this->pictureBox89->TabIndex = 121;
			this->pictureBox89->TabStop = false;
			// 
			// pictureBox90
			// 
			this->pictureBox90->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox90->Location = System::Drawing::Point(238, 106);
			this->pictureBox90->Name = L"pictureBox90";
			this->pictureBox90->Size = System::Drawing::Size(13, 13);
			this->pictureBox90->TabIndex = 120;
			this->pictureBox90->TabStop = false;
			// 
			// pictureBox91
			// 
			this->pictureBox91->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox91->Location = System::Drawing::Point(225, 119);
			this->pictureBox91->Name = L"pictureBox91";
			this->pictureBox91->Size = System::Drawing::Size(13, 13);
			this->pictureBox91->TabIndex = 119;
			this->pictureBox91->TabStop = false;
			// 
			// pictureBox92
			// 
			this->pictureBox92->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox92->Location = System::Drawing::Point(225, 106);
			this->pictureBox92->Name = L"pictureBox92";
			this->pictureBox92->Size = System::Drawing::Size(13, 13);
			this->pictureBox92->TabIndex = 118;
			this->pictureBox92->TabStop = false;
			// 
			// pictureBox93
			// 
			this->pictureBox93->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox93->Location = System::Drawing::Point(238, 85);
			this->pictureBox93->Name = L"pictureBox93";
			this->pictureBox93->Size = System::Drawing::Size(13, 13);
			this->pictureBox93->TabIndex = 125;
			this->pictureBox93->TabStop = false;
			// 
			// pictureBox94
			// 
			this->pictureBox94->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox94->Location = System::Drawing::Point(238, 72);
			this->pictureBox94->Name = L"pictureBox94";
			this->pictureBox94->Size = System::Drawing::Size(13, 13);
			this->pictureBox94->TabIndex = 124;
			this->pictureBox94->TabStop = false;
			// 
			// pictureBox95
			// 
			this->pictureBox95->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox95->Location = System::Drawing::Point(225, 85);
			this->pictureBox95->Name = L"pictureBox95";
			this->pictureBox95->Size = System::Drawing::Size(13, 13);
			this->pictureBox95->TabIndex = 123;
			this->pictureBox95->TabStop = false;
			// 
			// pictureBox96
			// 
			this->pictureBox96->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox96->Location = System::Drawing::Point(225, 72);
			this->pictureBox96->Name = L"pictureBox96";
			this->pictureBox96->Size = System::Drawing::Size(13, 13);
			this->pictureBox96->TabIndex = 122;
			this->pictureBox96->TabStop = false;
			// 
			// pictureBox97
			// 
			this->pictureBox97->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox97->InitialImage = nullptr;
			this->pictureBox97->Location = System::Drawing::Point(80, 27);
			this->pictureBox97->Name = L"pictureBox97";
			this->pictureBox97->Size = System::Drawing::Size(30, 27);
			this->pictureBox97->TabIndex = 129;
			this->pictureBox97->TabStop = false;
			// 
			// pictureBox98
			// 
			this->pictureBox98->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox98->InitialImage = nullptr;
			this->pictureBox98->Location = System::Drawing::Point(116, 27);
			this->pictureBox98->Name = L"pictureBox98";
			this->pictureBox98->Size = System::Drawing::Size(30, 27);
			this->pictureBox98->TabIndex = 128;
			this->pictureBox98->TabStop = false;
			// 
			// pictureBox99
			// 
			this->pictureBox99->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox99->InitialImage = nullptr;
			this->pictureBox99->Location = System::Drawing::Point(152, 27);
			this->pictureBox99->Name = L"pictureBox99";
			this->pictureBox99->Size = System::Drawing::Size(30, 27);
			this->pictureBox99->TabIndex = 127;
			this->pictureBox99->TabStop = false;
			// 
			// pictureBox100
			// 
			this->pictureBox100->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox100->InitialImage = nullptr;
			this->pictureBox100->Location = System::Drawing::Point(188, 27);
			this->pictureBox100->Name = L"pictureBox100";
			this->pictureBox100->Size = System::Drawing::Size(30, 27);
			this->pictureBox100->TabIndex = 126;
			this->pictureBox100->TabStop = false;
			// 
			// pictureBox101
			// 
			this->pictureBox101->Location = System::Drawing::Point(80, 27);
			this->pictureBox101->Name = L"pictureBox101";
			this->pictureBox101->Size = System::Drawing::Size(138, 27);
			this->pictureBox101->TabIndex = 130;
			this->pictureBox101->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cooper Black", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Purple;
			this->label13->Location = System::Drawing::Point(278, 125);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(0, 27);
			this->label13->TabIndex = 131;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->menuToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->menuStrip1->Size = System::Drawing::Size(436, 24);
			this->menuStrip1->TabIndex = 132;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem1 });
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->aboutToolStripMenuItem->Text = L"&Help";
			// 
			// aboutToolStripMenuItem1
			// 
			this->aboutToolStripMenuItem1->Name = L"aboutToolStripMenuItem1";
			this->aboutToolStripMenuItem1->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem1->Text = L"&About";
			this->aboutToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem1_Click);
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->newGameToolStripMenuItem,
					this->showAnswerToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->menuToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->menuToolStripMenuItem->Text = L"&Menu";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->newGameToolStripMenuItem->Text = L"&New Game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// showAnswerToolStripMenuItem
			// 
			this->showAnswerToolStripMenuItem->Name = L"showAnswerToolStripMenuItem";
			this->showAnswerToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->showAnswerToolStripMenuItem->Text = L"&Show Answer";
			this->showAnswerToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::showAnswerToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(436, 484);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->pictureBox101);
			this->Controls->Add(this->pictureBox97);
			this->Controls->Add(this->pictureBox98);
			this->Controls->Add(this->pictureBox99);
			this->Controls->Add(this->pictureBox100);
			this->Controls->Add(this->pictureBox93);
			this->Controls->Add(this->pictureBox94);
			this->Controls->Add(this->pictureBox95);
			this->Controls->Add(this->pictureBox96);
			this->Controls->Add(this->pictureBox89);
			this->Controls->Add(this->pictureBox90);
			this->Controls->Add(this->pictureBox91);
			this->Controls->Add(this->pictureBox92);
			this->Controls->Add(this->pictureBox85);
			this->Controls->Add(this->pictureBox86);
			this->Controls->Add(this->pictureBox87);
			this->Controls->Add(this->pictureBox88);
			this->Controls->Add(this->pictureBox81);
			this->Controls->Add(this->pictureBox82);
			this->Controls->Add(this->pictureBox83);
			this->Controls->Add(this->pictureBox84);
			this->Controls->Add(this->pictureBox77);
			this->Controls->Add(this->pictureBox78);
			this->Controls->Add(this->pictureBox79);
			this->Controls->Add(this->pictureBox80);
			this->Controls->Add(this->pictureBox73);
			this->Controls->Add(this->pictureBox74);
			this->Controls->Add(this->pictureBox75);
			this->Controls->Add(this->pictureBox76);
			this->Controls->Add(this->pictureBox69);
			this->Controls->Add(this->pictureBox70);
			this->Controls->Add(this->pictureBox71);
			this->Controls->Add(this->pictureBox72);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox67);
			this->Controls->Add(this->pictureBox68);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->black);
			this->Controls->Add(this->blue);
			this->Controls->Add(this->green);
			this->Controls->Add(this->white);
			this->Controls->Add(this->yellow);
			this->Controls->Add(this->red);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MasterMind";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox67))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox68))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox69))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox70))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox71))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox72))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox73))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox74))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox75))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox76))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox77))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox78))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox79))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox80))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox81))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox82))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox83))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox84))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox85))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox86))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox87))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox88))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox89))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox90))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox91))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox92))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox93))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox94))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox95))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox96))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox97))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox98))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox99))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox100))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox101))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//new game button
		pictureBox101->Visible = true;
		srand(time(0));
		rect->create(rand() % 6 + 1, rand() % 6 + 1, rand() % 6 + 1, rand() % 6 + 1);
		pictureBox97->BackgroundImage = pegs[rect->getPeg(1) - 1];
		pictureBox98->BackgroundImage = pegs[rect->getPeg(2) - 1];
		pictureBox99->BackgroundImage = pegs[rect->getPeg(3) - 1];
		pictureBox100->BackgroundImage = pegs[rect->getPeg(4) - 1];
		for (int i = 0; i < 48; i++){
			scores[i]->BackgroundImage = blanks[2];
			asteroids[i]->BackgroundImage = blanks[3];
		}
		current = 0;
		label13->Text = "";
		sidenums = gcnew array<System::Windows::Forms::Label^>(12);
		sidenums[0] = label1;
		sidenums[1] = label2;
		sidenums[2] = label3;
		sidenums[3] = label4;
		sidenums[4] = label5;
		sidenums[5] = label6;
		sidenums[6] = label7;
		sidenums[7] = label8;
		sidenums[8] = label9;
		sidenums[9] = label10;
		sidenums[10] = label11;
		sidenums[11] = label12;
		for (int x = 0; x < 12; x++) {
			if (x == 0) sidenums[x]->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			else sidenums[x]->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		}

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//commit button
		int picked[4];
		int g = current - (current % 4);
		for (int f = 0; f < 4; f++) {
			for (int h = 0; h < 6; h++) {
				if (asteroids[f + g]->BackgroundImage == blanks[3]) picked[f] = 0;
				else if (asteroids[f + g]->BackgroundImage == pegs[h]) picked[f] = h + 1;
			}
		}
		if (rect->isValid(picked[0], picked[1], picked[2], picked[3]) == false) label13->Text = "Invalid";
		else if (rect->isSolved(picked[0], picked[1], picked[2], picked[3])) {
			label13->Text = "YOU WON!"; pictureBox101->Visible = false;
		}
		else {
			int m = 0;
			for (int l = 0; l < 4; l++) {
				if (rect->isIn(picked[l], l + 1)) { scores[g + m]->BackgroundImage = blanks[1]; m++; }
			}
			for (int n = 0; n < rect->numCorrect(picked[0], picked[1], picked[2], picked[3]); n++){
				scores[g + m]->BackgroundImage = blanks[0];
				m++;
			}
			if (g == 44) {
				label13->Text = "YOU LOST"; pictureBox101->Visible = false;
			}
			else {
				current = g + 4;
				label13->Text = "";
				sidenums = gcnew array<System::Windows::Forms::Label^>(12);
				sidenums[0] = label1;
				sidenums[1] = label2;
				sidenums[2] = label3;
				sidenums[3] = label4;
				sidenums[4] = label5;
				sidenums[5] = label6;
				sidenums[6] = label7;
				sidenums[7] = label8;
				sidenums[8] = label9;
				sidenums[9] = label10;
				sidenums[10] = label11;
				sidenums[11] = label12;
				for (int x = 0; x < 12; x++) {
					if (x == g / 4 + 1) sidenums[x]->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
					else sidenums[x]->Font = (gcnew System::Drawing::Font(L"Garamond", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				}
			}
		}
	}
	 private:
		array<System::Windows::Forms::PictureBox^>^ asteroids;
		array<System::Windows::Forms::PictureBox^>^ scores;
		array<Bitmap^>^ pegs;
		array<Bitmap^>^ blanks;
		array<System::Windows::Forms::Label^>^ sidenums;
		Answer* rect = new Answer;
		private: int current = 0;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		srand(time(0));
		rect->create(rand() % 6 + 1, rand() % 6 + 1, rand() % 6 + 1, rand() % 6 + 1);
		Assembly^ assembly = Assembly::GetExecutingAssembly();
		AssemblyName^ assemblyName = assembly->GetName();
		// Grab the images from the assembly
		ResourceManager^ rm = gcnew ResourceManager(assemblyName->Name + ".Resource", assembly);
		asteroids = gcnew array<System::Windows::Forms::PictureBox^>(48);
		scores = gcnew array<System::Windows::Forms::PictureBox^>(48);
		pegs = gcnew array<Bitmap^>(6);
		blanks = gcnew array<Bitmap^>(4);
		pegs[0] = (Bitmap^)rm->GetObject("white");
		pegs[1] = (Bitmap^)rm->GetObject("blue");
		pegs[2] = (Bitmap^)rm->GetObject("black");
		pegs[3] = (Bitmap^)rm->GetObject("red");
		pegs[4] = (Bitmap^)rm->GetObject("yellow");
		pegs[5] = (Bitmap^)rm->GetObject("green");
		blanks[0] = (Bitmap^)rm->GetObject("smallwhite");
		blanks[1] = (Bitmap^)rm->GetObject("smallblack");
		blanks[2] = (Bitmap^)rm->GetObject("smallblank");
		blanks[3] = (Bitmap^)rm->GetObject("blank");
asteroids[0] = pictureBox4;
asteroids[1] = pictureBox3;
asteroids[2] = pictureBox2;
asteroids[3] = pictureBox1;
asteroids[4] = pictureBox8;
asteroids[5] = pictureBox7;
asteroids[6] = pictureBox6;
asteroids[7] = pictureBox5;
asteroids[8] = pictureBox12;
asteroids[9] = pictureBox11;
asteroids[10] = pictureBox10;
asteroids[11] = pictureBox9;
asteroids[12] = pictureBox16;
asteroids[13] = pictureBox15;
asteroids[14] = pictureBox14;
asteroids[15] = pictureBox13;
asteroids[16] = pictureBox20;
asteroids[17] = pictureBox19;
asteroids[18] = pictureBox18;
asteroids[19] = pictureBox17;
asteroids[20] = pictureBox24;
asteroids[21] = pictureBox23;
asteroids[22] = pictureBox22;
asteroids[23] = pictureBox21;
asteroids[24] = pictureBox28;
asteroids[25] = pictureBox27;
asteroids[26] = pictureBox26;
asteroids[27] = pictureBox25;
asteroids[28] = pictureBox32;
asteroids[29] = pictureBox31;
asteroids[30] = pictureBox30;
asteroids[31] = pictureBox29;
asteroids[32] = pictureBox36;
asteroids[33] = pictureBox35;
asteroids[34] = pictureBox34;
asteroids[35] = pictureBox33;
asteroids[36] = pictureBox40;
asteroids[37] = pictureBox39;
asteroids[38] = pictureBox38;
asteroids[39] = pictureBox37;
asteroids[40] = pictureBox44;
asteroids[41] = pictureBox43;
asteroids[42] = pictureBox42;
asteroids[43] = pictureBox41;
asteroids[44] = pictureBox48;
asteroids[45] = pictureBox47;
asteroids[46] = pictureBox46;
asteroids[47] = pictureBox45;
scores[0] = pictureBox49;
scores[1] = pictureBox50;
scores[2] = pictureBox51;
scores[3] = pictureBox52;
scores[4] = pictureBox53;
scores[5] = pictureBox54;
scores[6] = pictureBox55;
scores[7] = pictureBox56;
scores[8] = pictureBox57;
scores[9] = pictureBox58;
scores[10] = pictureBox59;
scores[11] = pictureBox60;
scores[12] = pictureBox61;
scores[13] = pictureBox62;
scores[14] = pictureBox63;
scores[15] = pictureBox64;
scores[16] = pictureBox65;
scores[17] = pictureBox66;
scores[18] = pictureBox67;
scores[19] = pictureBox68;
scores[20] = pictureBox69;
scores[21] = pictureBox70;
scores[22] = pictureBox71;
scores[23] = pictureBox72;
scores[24] = pictureBox73;
scores[25] = pictureBox74;
scores[26] = pictureBox75;
scores[27] = pictureBox76;
scores[28] = pictureBox77;
scores[29] = pictureBox78;
scores[30] = pictureBox79;
scores[31] = pictureBox80;
scores[32] = pictureBox81;
scores[33] = pictureBox82;
scores[34] = pictureBox83;
scores[35] = pictureBox84;
scores[36] = pictureBox85;
scores[37] = pictureBox86;
scores[38] = pictureBox87;
scores[39] = pictureBox88;
scores[40] = pictureBox89;
scores[41] = pictureBox90;
scores[42] = pictureBox91;
scores[43] = pictureBox92;
scores[44] = pictureBox93;
scores[45] = pictureBox94;
scores[46] = pictureBox95;
scores[47] = pictureBox96;
for (int i = 0; i < 48; i++){
	scores[i]->BackgroundImage = blanks[2];
	asteroids[i]->BackgroundImage = blanks[3];
	asteroids[i]->AllowDrop = true;
}
		white->Image = pegs[0];
		blue->Image = pegs[1];
		green->Image = pegs[5];
		yellow->Image = pegs[4];
		red->Image = pegs[3];
		black->Image = pegs[2];
		pictureBox97->BackgroundImage = pegs[rect->getPeg(1) - 1];
		pictureBox98->BackgroundImage = pegs[rect->getPeg(2) - 1];
		pictureBox99->BackgroundImage = pegs[rect->getPeg(3) - 1];
		pictureBox100->BackgroundImage = pegs[rect->getPeg(4) - 1];
		}
	private: System::Void pictureBox2_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
		//dragdrop event
	}
private: System::Void white_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	//mouse down event - create a rectangle of a fixed and system-defined size centered around the point of click
}
private: System::Void white_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	//mouse move event - verify that the current coordinates of the mouse point are outside that rectangle
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//show answer button
	pictureBox101->Visible = false;
}
private: System::Void white_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label13->Text == "YOU LOST") return;
	asteroids[current]->BackgroundImage = pegs[0];
	if (current % 4 == 3) current = current - 3;
	else current++;
}
private: System::Void yellow_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label13->Text == "YOU LOST") return;
	asteroids[current]->BackgroundImage = pegs[4];
	if (current % 4 == 3) current = current - 3;
	else current++;
}
private: System::Void red_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label13->Text == "YOU LOST") return;
	asteroids[current]->BackgroundImage = pegs[3];
	if (current % 4 == 3) current = current - 3;
	else current++;
}
private: System::Void black_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label13->Text == "YOU LOST") return;
	asteroids[current]->BackgroundImage = pegs[2];
	if (current % 4 == 3) current = current - 3;
	else current++;
}
private: System::Void blue_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label13->Text == "YOU LOST") return;
	asteroids[current]->BackgroundImage = pegs[1];
	if (current % 4 == 3) current = current - 3;
	else current++;
}
private: System::Void green_Click(System::Object^  sender, System::EventArgs^  e) {
	if (label13->Text == "YOU LOST") return;
	asteroids[current]->BackgroundImage = pegs[5];
	if (current % 4 == 3) current = current - 3;
	else current++;
}
private: System::Void aboutToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("MasterMind - Made with C++ by Andrew Aaron");
}
private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	button2_Click(sender, e);
}
private: System::Void showAnswerToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	button3_Click(sender, e);
}
};
	
}
