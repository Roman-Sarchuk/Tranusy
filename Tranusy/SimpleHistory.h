#pragma once
#include <msclr/marshal_cppstd.h>
#include "Converter.h"

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
	private: System::Windows::Forms::Panel^ panel_s;
	public: System::Windows::Forms::TextBox^ info;

	protected:

	private: System::Windows::Forms::Button^ button_s;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
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
			this->panel_s = (gcnew System::Windows::Forms::Panel());
			this->info = (gcnew System::Windows::Forms::TextBox());
			this->button_s = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->num_sh = (gcnew System::Windows::Forms::TextBox());
			this->res_sh = (gcnew System::Windows::Forms::TextBox());
			this->from_sh = (gcnew System::Windows::Forms::NumericUpDown());
			this->to_sh = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel_s->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_sh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_sh))->BeginInit();
			this->SuspendLayout();
			// 
			// panel_s
			// 
			this->panel_s->Controls->Add(this->info);
			this->panel_s->Controls->Add(this->button_s);
			this->panel_s->Controls->Add(this->tableLayoutPanel1);
			this->panel_s->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel_s->Location = System::Drawing::Point(0, 0);
			this->panel_s->Name = L"panel_s";
			this->panel_s->Size = System::Drawing::Size(743, 189);
			this->panel_s->TabIndex = 4;
			// 
			// info
			// 
			this->info->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->info->Location = System::Drawing::Point(355, 5);
			this->info->Multiline = true;
			this->info->Name = L"info";
			this->info->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->info->Size = System::Drawing::Size(382, 178);
			this->info->TabIndex = 2;
			// 
			// button_s
			// 
			this->button_s->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_s->Location = System::Drawing::Point(3, 3);
			this->button_s->Name = L"button_s";
			this->button_s->Size = System::Drawing::Size(345, 40);
			this->button_s->TabIndex = 1;
			this->button_s->Text = L"Convert";
			this->button_s->UseVisualStyleBackColor = true;
			this->button_s->Click += gcnew System::EventHandler(this, &SimpleHistory::button_s_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				76.95473F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				23.04527F)));
			this->tableLayoutPanel1->Controls->Add(this->num_sh, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->res_sh, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->from_sh, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->to_sh, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 54);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(345, 116);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// num_sh
			// 
			this->num_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->num_sh->Location = System::Drawing::Point(3, 18);
			this->num_sh->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->num_sh->Name = L"num_sh";
			this->num_sh->Size = System::Drawing::Size(252, 22);
			this->num_sh->TabIndex = 0;
			// 
			// res_sh
			// 
			this->res_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->res_sh->Location = System::Drawing::Point(3, 76);
			this->res_sh->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->res_sh->Name = L"res_sh";
			this->res_sh->ReadOnly = true;
			this->res_sh->Size = System::Drawing::Size(252, 22);
			this->res_sh->TabIndex = 1;
			// 
			// from_sh
			// 
			this->from_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->from_sh->Location = System::Drawing::Point(268, 18);
			this->from_sh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->from_sh->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->from_sh->Name = L"from_sh";
			this->from_sh->Size = System::Drawing::Size(74, 22);
			this->from_sh->TabIndex = 2;
			this->from_sh->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// to_sh
			// 
			this->to_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->to_sh->Location = System::Drawing::Point(268, 76);
			this->to_sh->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->to_sh->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->to_sh->Name = L"to_sh";
			this->to_sh->Size = System::Drawing::Size(74, 22);
			this->to_sh->TabIndex = 3;
			this->to_sh->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// SimpleHistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(743, 189);
			this->Controls->Add(this->panel_s);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SimpleHistory";
			this->Text = L"SimpleHistory";
			this->panel_s->ResumeLayout(false);
			this->panel_s->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_sh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_sh))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	protected: short ToShort(System::Decimal decimalValue)
	{
		// Convert the Decimal value to Int32 with rounding to the nearest integer
		int intValue = Decimal::ToInt32(decimalValue);

		// Check if the value fits within the range of a short
		if (intValue < SHRT_MIN || intValue > SHRT_MAX)
		{
			// Handle the case where the value is out of range for a short
			throw std::out_of_range("Decimal value is out of range for short type.");
		}

		// Convert the Int32 value to short
		short shortValue = static_cast<short>(intValue);

		return shortValue;
	}
	protected: std::string ToStdString(System::String^ systemString)
	{
		// Convert System::String^ to std::string
		return msclr::interop::marshal_as<std::string>(systemString);
	}

	private: System::Void button_s_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		UIcppProject::Converter converter;
		try
		{
			converter = UIcppProject::Converter(ToShort(from_sh->Value), ToShort(to_sh->Value), ToStdString(num_sh->Text));
			converter.convert();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Не вдалося сконвертувати число \"" + num_sh->Text + "\" із [" + from_sh->Text + "] у [" + to_sh->Text + "]:\n\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			res_sh->Text = L"";
			return;
		}

		res_sh->Text = gcnew System::String(converter.getRes().c_str());
		info->Text = gcnew System::String(converter.getInfo().c_str());
	}
};
}
