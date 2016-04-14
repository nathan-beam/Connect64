#pragma once
#include "Board.h"
using namespace model;
#include "ConnectFileIO.h"
using namespace Controller;


namespace Connect64 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Resources; 
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class Connect64Form : public System::Windows::Forms::Form
	{
		public:
		Connect64Form(void);


		protected:
		~Connect64Form();

		 ResourceManager^ resourceManager;

	private:
	 System::Windows::Forms::MenuStrip^  menuStrip1;
	 System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	 System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel;
			 Board^ gameBoard;
			 ConnectFileIO^ fileIO;

	 System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	 System::Windows::Forms::ToolStripMenuItem^  choosePuzzleToolStripMenuItem;


	 System::Windows::Forms::Label^  label1;
	 System::Windows::Forms::Label^  label8;
	 System::Windows::Forms::Label^  label7;
	 System::Windows::Forms::Label^  label6;
	 System::Windows::Forms::Label^  label5;
	 System::Windows::Forms::Label^  label4;
	 System::Windows::Forms::Label^  label3;
	 System::Windows::Forms::Label^  label2;
	 System::Windows::Forms::Label^  label24;
	 System::Windows::Forms::Label^  label23;
	 System::Windows::Forms::Label^  label22;
	 System::Windows::Forms::Label^  label21;
	 System::Windows::Forms::Label^  label20;
	 System::Windows::Forms::Label^  label19;
	 System::Windows::Forms::Label^  label18;
	 System::Windows::Forms::Label^  label17;
	 System::Windows::Forms::Label^  label16;
	 System::Windows::Forms::Label^  label15;
	 System::Windows::Forms::Label^  label14;
	 System::Windows::Forms::Label^  label13;
	 System::Windows::Forms::Label^  label12;
	 System::Windows::Forms::Label^  label11;
	 System::Windows::Forms::Label^  label10;
	 System::Windows::Forms::Label^  label9;
	 System::Windows::Forms::Label^  label64;
	 System::Windows::Forms::Label^  label63;
	 System::Windows::Forms::Label^  label62;
	 System::Windows::Forms::Label^  label61;
	 System::Windows::Forms::Label^  label60;
	 System::Windows::Forms::Label^  label59;
	 System::Windows::Forms::Label^  label58;
	 System::Windows::Forms::Label^  label57;
	 System::Windows::Forms::Label^  label56;
	 System::Windows::Forms::Label^  label55;
	 System::Windows::Forms::Label^  label54;
	 System::Windows::Forms::Label^  label53;
	 System::Windows::Forms::Label^  label52;
	 System::Windows::Forms::Label^  label51;
	 System::Windows::Forms::Label^  label50;
	 System::Windows::Forms::Label^  label49;
	 System::Windows::Forms::Label^  label48;
	 System::Windows::Forms::Label^  label47;
	 System::Windows::Forms::Label^  label46;
	 System::Windows::Forms::Label^  label45;
	 System::Windows::Forms::Label^  label44;
	 System::Windows::Forms::Label^  label43;
	 System::Windows::Forms::Label^  label42;
	 System::Windows::Forms::Label^  label41;
	 System::Windows::Forms::Label^  label40;
	 System::Windows::Forms::Label^  label39;
	 System::Windows::Forms::Label^  label38;
	 System::Windows::Forms::Label^  label37;
	 System::Windows::Forms::Label^  label36;
	 System::Windows::Forms::Label^  label35;
	 System::Windows::Forms::Label^  label34;
	 System::Windows::Forms::Label^  label33;
	 System::Windows::Forms::Label^  label32;
	 System::Windows::Forms::Label^  label31;
	 System::Windows::Forms::Label^  label30;
	 System::Windows::Forms::Label^  label29;
	 System::Windows::Forms::Label^  label28;
	 System::Windows::Forms::Label^  label27;
	 System::Windows::Forms::Label^  label26;
	 System::Windows::Forms::Label^  label25;
	 System::Windows::Forms::NumericUpDown^  numericUpDown;
	 System::Windows::Forms::Button^  confirmInputButton;

		 Label^ editLabel;
		 List<Label^>^ startingBoard;
	 System::Windows::Forms::Label^  puzzleNumberLabel;


		
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		void setBoard();
		void showBoard();

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);

 System::Void tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);

 System::Void label_Click(System::Object^  sender, System::EventArgs^  e);
 System::Void confirmInputButton_Click(System::Object^  sender, System::EventArgs^  e);
		 void checkForDuplicates();
		 void increaseUpDown();
 System::Void resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
 System::Void numericUpDown_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
 System::Void Connect64Form::choosePuzzleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
};
}

