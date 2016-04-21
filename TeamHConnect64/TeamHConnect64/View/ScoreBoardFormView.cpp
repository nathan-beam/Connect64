#include "ScoreBoardForm.h"

namespace view{
	ScoreBoardForm::~ScoreBoardForm()
	{
		if (components)
		{
			delete components;
		}
	}
	void ScoreBoardForm::InitializeComponent()
	{
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
		this->ScoreBoardGridView = (gcnew System::Windows::Forms::DataGridView());
		this->puzzleNumColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->nameColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		this->timeColumm = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScoreBoardGridView))->BeginInit();
		this->SuspendLayout();
		// 
		// ScoreBoardGridView
		// 
		dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
		this->ScoreBoardGridView->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
		this->ScoreBoardGridView->BackgroundColor = System::Drawing::SystemColors::Control;
		this->ScoreBoardGridView->BorderStyle = System::Windows::Forms::BorderStyle::None;
		this->ScoreBoardGridView->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::None;
		this->ScoreBoardGridView->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
		dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->ScoreBoardGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
		this->ScoreBoardGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
		this->ScoreBoardGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
			this->puzzleNumColumn,
				this->nameColumn, this->timeColumm
		});
		this->ScoreBoardGridView->Cursor = System::Windows::Forms::Cursors::Default;
		dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
		dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
		this->ScoreBoardGridView->DefaultCellStyle = dataGridViewCellStyle3;
		this->ScoreBoardGridView->EnableHeadersVisualStyles = false;
		this->ScoreBoardGridView->Location = System::Drawing::Point(12, 12);
		this->ScoreBoardGridView->Name = L"ScoreBoardGridView";
		this->ScoreBoardGridView->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
		dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
		dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
			System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Control;
		dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::WindowText;
		dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
		this->ScoreBoardGridView->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
		this->ScoreBoardGridView->RowHeadersVisible = false;
		this->ScoreBoardGridView->Size = System::Drawing::Size(413, 261);
		this->ScoreBoardGridView->TabIndex = 0;
		// 
		// puzzleNumColumn
		// 
		this->puzzleNumColumn->Name = L"puzzleNumColumn";
		this->puzzleNumColumn->ReadOnly = true;
		this->puzzleNumColumn->Resizable = System::Windows::Forms::DataGridViewTriState::False;
		this->puzzleNumColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// nameColumn
		// 
		this->nameColumn->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
		this->nameColumn->Name = L"nameColumn";
		this->nameColumn->ReadOnly = true;
		this->nameColumn->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// timeColumm
		// 
		this->timeColumm->Name = L"timeColumm";
		this->timeColumm->ReadOnly = true;
		this->timeColumm->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
		// 
		// ScoreBoardForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::SystemColors::Control;
		this->ClientSize = System::Drawing::Size(437, 283);
		this->Controls->Add(this->ScoreBoardGridView);
		this->Name = L"ScoreBoardForm";
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ScoreBoardGridView))->EndInit();
		this->ResumeLayout(false);

	}
}