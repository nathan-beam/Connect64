#pragma once

namespace Connect64 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Connect64Form : public System::Windows::Forms::Form
	{
	public:
		Connect64Form(void);
		

	protected:
		~Connect64Form();

	private: ResourceManager^ resourceManager;
	private: System::Windows::Forms::ComboBox^  NumbersCombo;

	private: System::Windows::Forms::Label^  Numberlbl;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;
	private: System::Windows::Forms::Button^  button49;
	private: System::Windows::Forms::Button^  button50;
	private: System::Windows::Forms::Button^  button51;
	private: System::Windows::Forms::Button^  button52;
	private: System::Windows::Forms::Button^  button53;
	private: System::Windows::Forms::Button^  button54;
	private: System::Windows::Forms::Button^  button55;
	private: System::Windows::Forms::Button^  button56;
	private: System::Windows::Forms::Button^  button57;
	private: System::Windows::Forms::Button^  button58;
	private: System::Windows::Forms::Button^  button59;
	private: System::Windows::Forms::Button^  button60;
	private: System::Windows::Forms::Button^  button61;
	private: System::Windows::Forms::Button^  button62;
	private: System::Windows::Forms::Button^  button63;
	private: System::Windows::Forms::Button^  button64;

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
			this->NumbersCombo = (gcnew System::Windows::Forms::ComboBox());
			this->Numberlbl = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// NumbersCombo
			// 
			this->NumbersCombo->FormattingEnabled = true;
			this->NumbersCombo->Items->AddRange(gcnew cli::array< System::Object^  >(64) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23", L"24", L"25", L"26",
					L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41", L"42", L"43", L"44",
					L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59", L"60", L"61", L"62",
					L"63", L"64"
			});
			this->NumbersCombo->Location = System::Drawing::Point(481, 34);
			this->NumbersCombo->Name = L"NumbersCombo";
			this->NumbersCombo->Size = System::Drawing::Size(52, 28);
			this->NumbersCombo->TabIndex = 0;
			// 
			// Numberlbl
			// 
			this->Numberlbl->AutoSize = true;
			this->Numberlbl->Location = System::Drawing::Point(143, 37);
			this->Numberlbl->Name = L"Numberlbl";
			this->Numberlbl->Size = System::Drawing::Size(0, 20);
			this->Numberlbl->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(147, 108);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 35);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(188, 108);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(229, 108);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(270, 108);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 35);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(311, 108);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 35);
			this->button5->TabIndex = 6;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(352, 108);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 35);
			this->button6->TabIndex = 7;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(393, 108);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 35);
			this->button7->TabIndex = 8;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(434, 108);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 35);
			this->button8->TabIndex = 9;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(434, 149);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 35);
			this->button9->TabIndex = 17;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(393, 149);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(35, 35);
			this->button10->TabIndex = 16;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(352, 149);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(35, 35);
			this->button11->TabIndex = 15;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(311, 149);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(35, 35);
			this->button12->TabIndex = 14;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(270, 149);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(35, 35);
			this->button13->TabIndex = 13;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(229, 149);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(35, 35);
			this->button14->TabIndex = 12;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(188, 149);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(35, 35);
			this->button15->TabIndex = 11;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(147, 149);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(35, 35);
			this->button16->TabIndex = 10;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(434, 192);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(35, 35);
			this->button17->TabIndex = 25;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(393, 192);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(35, 35);
			this->button18->TabIndex = 24;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(352, 192);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(35, 35);
			this->button19->TabIndex = 23;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(311, 192);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(35, 35);
			this->button20->TabIndex = 22;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(270, 192);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(35, 35);
			this->button21->TabIndex = 21;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(229, 192);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(35, 35);
			this->button22->TabIndex = 20;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(188, 192);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(35, 35);
			this->button23->TabIndex = 19;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(147, 192);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(35, 35);
			this->button24->TabIndex = 18;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(434, 233);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(35, 35);
			this->button25->TabIndex = 33;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(393, 233);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(35, 35);
			this->button26->TabIndex = 32;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(352, 233);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(35, 35);
			this->button27->TabIndex = 31;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(311, 233);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(35, 35);
			this->button28->TabIndex = 30;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(270, 233);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(35, 35);
			this->button29->TabIndex = 29;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(229, 233);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(35, 35);
			this->button30->TabIndex = 28;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(188, 233);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(35, 35);
			this->button31->TabIndex = 27;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(147, 233);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(35, 35);
			this->button32->TabIndex = 26;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(434, 274);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(35, 35);
			this->button33->TabIndex = 41;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(393, 274);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(35, 35);
			this->button34->TabIndex = 40;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(352, 274);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(35, 35);
			this->button35->TabIndex = 39;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(311, 274);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(35, 35);
			this->button36->TabIndex = 38;
			this->button36->Text = L"button36";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(270, 274);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(35, 35);
			this->button37->TabIndex = 37;
			this->button37->Text = L"button37";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(229, 274);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(35, 35);
			this->button38->TabIndex = 36;
			this->button38->Text = L"button38";
			this->button38->UseVisualStyleBackColor = true;
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(188, 274);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(35, 35);
			this->button39->TabIndex = 35;
			this->button39->Text = L"button39";
			this->button39->UseVisualStyleBackColor = true;
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(147, 274);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(35, 35);
			this->button40->TabIndex = 34;
			this->button40->Text = L"button40";
			this->button40->UseVisualStyleBackColor = true;
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(434, 315);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(35, 35);
			this->button41->TabIndex = 49;
			this->button41->Text = L"button41";
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(393, 315);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(35, 35);
			this->button42->TabIndex = 48;
			this->button42->Text = L"button42";
			this->button42->UseVisualStyleBackColor = true;
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(352, 315);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(35, 35);
			this->button43->TabIndex = 47;
			this->button43->Text = L"button43";
			this->button43->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(311, 315);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(35, 35);
			this->button44->TabIndex = 46;
			this->button44->Text = L"button44";
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(270, 315);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(35, 35);
			this->button45->TabIndex = 45;
			this->button45->Text = L"button45";
			this->button45->UseVisualStyleBackColor = true;
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(229, 315);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(35, 35);
			this->button46->TabIndex = 44;
			this->button46->Text = L"button46";
			this->button46->UseVisualStyleBackColor = true;
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(188, 315);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(35, 35);
			this->button47->TabIndex = 43;
			this->button47->Text = L"button47";
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(147, 315);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(35, 35);
			this->button48->TabIndex = 42;
			this->button48->Text = L"button48";
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(434, 356);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(35, 35);
			this->button49->TabIndex = 57;
			this->button49->Text = L"button49";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(393, 356);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(35, 35);
			this->button50->TabIndex = 56;
			this->button50->Text = L"button50";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(352, 356);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(35, 35);
			this->button51->TabIndex = 55;
			this->button51->Text = L"button51";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(311, 356);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(35, 35);
			this->button52->TabIndex = 54;
			this->button52->Text = L"button52";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(270, 356);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(35, 35);
			this->button53->TabIndex = 53;
			this->button53->Text = L"button53";
			this->button53->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(229, 356);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(35, 35);
			this->button54->TabIndex = 52;
			this->button54->Text = L"button54";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(188, 356);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(35, 35);
			this->button55->TabIndex = 51;
			this->button55->Text = L"button55";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(147, 356);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(35, 35);
			this->button56->TabIndex = 50;
			this->button56->Text = L"button56";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(434, 397);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(35, 35);
			this->button57->TabIndex = 65;
			this->button57->Text = L"button57";
			this->button57->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(393, 397);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(35, 35);
			this->button58->TabIndex = 64;
			this->button58->Text = L"button58";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(352, 397);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(35, 35);
			this->button59->TabIndex = 63;
			this->button59->Text = L"button59";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(311, 397);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(35, 35);
			this->button60->TabIndex = 62;
			this->button60->Text = L"button60";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(270, 397);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(35, 35);
			this->button61->TabIndex = 61;
			this->button61->Text = L"button61";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(229, 397);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(35, 35);
			this->button62->TabIndex = 60;
			this->button62->Text = L"button62";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(188, 397);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(35, 35);
			this->button63->TabIndex = 59;
			this->button63->Text = L"button63";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(147, 397);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(35, 35);
			this->button64->TabIndex = 58;
			this->button64->Text = L"button64";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// Connect64Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 453);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Numberlbl);
			this->Controls->Add(this->NumbersCombo);
			this->Name = L"Connect64Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
