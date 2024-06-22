#pragma once

namespace Tranusy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Simple
	/// </summary>
	public ref class Simple : public System::Windows::Forms::Form
	{
	public:
		Simple(void)
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
		~Simple()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel_s;
	protected:
	private: System::Windows::Forms::Button^ button_s;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ num_s;
	private: System::Windows::Forms::TextBox^ res_s;
	private: System::Windows::Forms::NumericUpDown^ from_s;
	private: System::Windows::Forms::NumericUpDown^ to_s;

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
			this->panel_s = (gcnew System::Windows::Forms::Panel());
			this->button_s = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->num_s = (gcnew System::Windows::Forms::TextBox());
			this->res_s = (gcnew System::Windows::Forms::TextBox());
			this->from_s = (gcnew System::Windows::Forms::NumericUpDown());
			this->to_s = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel_s->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_s))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_s))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_s
			// 
			this->panel_s->Controls->Add(this->button_s);
			this->panel_s->Controls->Add(this->tableLayoutPanel1);
			this->panel_s->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_s->Location = System::Drawing::Point(0, 0);
			this->panel_s->Name = L"panel_s";
			this->panel_s->Size = System::Drawing::Size(328, 174);
			this->panel_s->TabIndex = 2;
			// 
			// button_s
			// 
			this->button_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_s->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_s->Location = System::Drawing::Point(3, 3);
			this->button_s->Name = L"button_s";
			this->button_s->Size = System::Drawing::Size(322, 40);
			this->button_s->TabIndex = 1;
			this->button_s->Text = L"Convert";
			this->button_s->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.95473F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.04527F)));
			this->tableLayoutPanel1->Controls->Add(this->num_s, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->res_s, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->from_s, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->to_s, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 54);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(322, 116);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// num_s
			// 
			this->num_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->num_s->Location = System::Drawing::Point(3, 18);
			this->num_s->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->num_s->Name = L"num_s";
			this->num_s->Size = System::Drawing::Size(234, 22);
			this->num_s->TabIndex = 0;
			// 
			// res_s
			// 
			this->res_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->res_s->Location = System::Drawing::Point(3, 76);
			this->res_s->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->res_s->Name = L"res_s";
			this->res_s->ReadOnly = true;
			this->res_s->Size = System::Drawing::Size(234, 22);
			this->res_s->TabIndex = 1;
			// 
			// from_s
			// 
			this->from_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->from_s->Location = System::Drawing::Point(250, 18);
			this->from_s->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->from_s->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->from_s->Name = L"from_s";
			this->from_s->Size = System::Drawing::Size(69, 22);
			this->from_s->TabIndex = 2;
			this->from_s->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// to_s
			// 
			this->to_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->to_s->Location = System::Drawing::Point(250, 76);
			this->to_s->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->to_s->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->to_s->Name = L"to_s";
			this->to_s->Size = System::Drawing::Size(69, 22);
			this->to_s->TabIndex = 3;
			this->to_s->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// Simple
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(328, 174);
			this->Controls->Add(this->panel_s);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Simple";
			this->Text = L"Simple";
			this->panel_s->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_s))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_s))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
