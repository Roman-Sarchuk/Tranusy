#pragma once

namespace Tranusy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SimpleHistory
	/// </summary>
	public ref class SimpleHistory : public System::Windows::Forms::Form
	{
	public:
		SimpleHistory(void)
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
		~SimpleHistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_sh;
	protected:
	private: System::Windows::Forms::RichTextBox^ info_sh;
	private: System::Windows::Forms::Button^ button_sh;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ num_sh;
	private: System::Windows::Forms::TextBox^ res_sh;
	private: System::Windows::Forms::NumericUpDown^ from_sh;
	private: System::Windows::Forms::NumericUpDown^ to_sh;

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
			this->panel_sh = (gcnew System::Windows::Forms::Panel());
			this->info_sh = (gcnew System::Windows::Forms::RichTextBox());
			this->button_sh = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->num_sh = (gcnew System::Windows::Forms::TextBox());
			this->res_sh = (gcnew System::Windows::Forms::TextBox());
			this->from_sh = (gcnew System::Windows::Forms::NumericUpDown());
			this->to_sh = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel_sh->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_sh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_sh))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_sh
			// 
			this->panel_sh->Controls->Add(this->info_sh);
			this->panel_sh->Controls->Add(this->button_sh);
			this->panel_sh->Controls->Add(this->tableLayoutPanel2);
			this->panel_sh->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_sh->Location = System::Drawing::Point(0, 0);
			this->panel_sh->Name = L"panel_sh";
			this->panel_sh->Size = System::Drawing::Size(817, 181);
			this->panel_sh->TabIndex = 3;
			this->panel_sh->Visible = false;
			// 
			// info_sh
			// 
			this->info_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->info_sh->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->info_sh->Location = System::Drawing::Point(279, 0);
			this->info_sh->Name = L"info_sh";
			this->info_sh->ReadOnly = true;
			this->info_sh->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->info_sh->Size = System::Drawing::Size(534, 178);
			this->info_sh->TabIndex = 3;
			this->info_sh->Text = L"";
			// 
			// button_sh
			// 
			this->button_sh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_sh->Location = System::Drawing::Point(8, 3);
			this->button_sh->Name = L"button_sh";
			this->button_sh->Size = System::Drawing::Size(265, 40);
			this->button_sh->TabIndex = 1;
			this->button_sh->Text = L"Convert";
			this->button_sh->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.95473F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.04527F)));
			this->tableLayoutPanel2->Controls->Add(this->num_sh, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->res_sh, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->from_sh, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->to_sh, 1, 1);
			this->tableLayoutPanel2->Location = System::Drawing::Point(8, 54);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(265, 116);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// num_sh
			// 
			this->num_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->num_sh->Location = System::Drawing::Point(3, 18);
			this->num_sh->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->num_sh->Name = L"num_sh";
			this->num_sh->Size = System::Drawing::Size(190, 22);
			this->num_sh->TabIndex = 0;
			// 
			// res_sh
			// 
			this->res_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->res_sh->Location = System::Drawing::Point(3, 76);
			this->res_sh->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->res_sh->Name = L"res_sh";
			this->res_sh->ReadOnly = true;
			this->res_sh->Size = System::Drawing::Size(190, 22);
			this->res_sh->TabIndex = 1;
			// 
			// from_sh
			// 
			this->from_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->from_sh->Location = System::Drawing::Point(206, 18);
			this->from_sh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->from_sh->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->from_sh->Name = L"from_sh";
			this->from_sh->Size = System::Drawing::Size(56, 22);
			this->from_sh->TabIndex = 2;
			this->from_sh->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// to_sh
			// 
			this->to_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->to_sh->Location = System::Drawing::Point(206, 76);
			this->to_sh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->to_sh->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->to_sh->Name = L"to_sh";
			this->to_sh->Size = System::Drawing::Size(56, 22);
			this->to_sh->TabIndex = 3;
			this->to_sh->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// SimpleHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(817, 181);
			this->Controls->Add(this->panel_sh);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SimpleHistory";
			this->Text = L"SimpleHistory";
			this->panel_sh->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_sh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_sh))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
};
}
