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

		private: ResourceManager^ resourceManager;


	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel;
			 Board^ gameBoard;
			 ConnectFileIO^ fileIO;

	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  resetToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  choosePuzzleToolStripMenuItem;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown;
	private: System::Windows::Forms::Button^  confirmInputButton;

		 Label^ editLabel;
		 List<Label^>^ startingBoard;
	private: System::Windows::Forms::Label^  puzzleNumberLabel;


		private:
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

private: System::Void tableLayoutPanel_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);

private: System::Void label_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void confirmInputButton_Click(System::Object^  sender, System::EventArgs^  e);
		 void checkForDuplicates();
private: System::Void resetToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
private: System::Void numericUpDown_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e);
};
}

