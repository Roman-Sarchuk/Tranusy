#pragma once
#include <msclr/marshal_cppstd.h>
#include "Converter.h"

namespace UIcppProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			// Switxh StripMenuItems access
			importToolStripMenuItem->Enabled = false;

			// Set window size
			this->MaximumSize = System::Drawing::Size(10000, 225);
			this->MinimumSize = System::Drawing::Size(350, 225);
			this->Size = System::Drawing::Size(350, 225);

			// Switch mod panels
			panel_s->Visible = true;
			//m
			panel_sh->Visible = false;
			//m+h
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ importToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^ modToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stepsToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_s;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ num_s;
	private: System::Windows::Forms::TextBox^ res_s;


	private: System::Windows::Forms::NumericUpDown^ from_s;
	private: System::Windows::Forms::NumericUpDown^ to_s;


	private: System::Windows::Forms::Button^ button_s;
	private: System::Windows::Forms::Panel^ panel_sh;



	private: System::Windows::Forms::Button^ button_sh;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ num_sh;
	private: System::Windows::Forms::TextBox^ res_sh;
	private: System::Windows::Forms::NumericUpDown^ from_sh;
	private: System::Windows::Forms::NumericUpDown^ to_sh;
	private: System::Windows::Forms::RichTextBox^ info_sh;
















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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->stepsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_s = (gcnew System::Windows::Forms::Panel());
			this->button_s = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->num_s = (gcnew System::Windows::Forms::TextBox());
			this->res_s = (gcnew System::Windows::Forms::TextBox());
			this->from_s = (gcnew System::Windows::Forms::NumericUpDown());
			this->to_s = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel_sh = (gcnew System::Windows::Forms::Panel());
			this->info_sh = (gcnew System::Windows::Forms::RichTextBox());
			this->button_sh = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->num_sh = (gcnew System::Windows::Forms::TextBox());
			this->res_sh = (gcnew System::Windows::Forms::TextBox());
			this->from_sh = (gcnew System::Windows::Forms::NumericUpDown());
			this->to_sh = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			this->panel_s->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_s))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_s))->BeginInit();
			this->panel_sh->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_sh))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_sh))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->modeToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(801, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveToolStripMenuItem,
					this->importToolStripMenuItem
			});
			this->fileToolStripMenuItem->Enabled = false;
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 26);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(137, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// importToolStripMenuItem
			// 
			this->importToolStripMenuItem->Enabled = false;
			this->importToolStripMenuItem->Name = L"importToolStripMenuItem";
			this->importToolStripMenuItem->Size = System::Drawing::Size(137, 26);
			this->importToolStripMenuItem->Text = L"Import";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->modToolStripMenuItem,
					this->stepsToolStripMenuItem
			});
			this->modeToolStripMenuItem->Name = L"modeToolStripMenuItem";
			this->modeToolStripMenuItem->Size = System::Drawing::Size(62, 26);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// modToolStripMenuItem
			// 
			this->modToolStripMenuItem->Enabled = false;
			this->modToolStripMenuItem->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Simple", L"Multiple" });
			this->modToolStripMenuItem->Name = L"modToolStripMenuItem";
			this->modToolStripMenuItem->Size = System::Drawing::Size(224, 28);
			this->modToolStripMenuItem->Text = L"Simple";
			this->modToolStripMenuItem->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::modToolStripMenuItem_SelectedIndexChanged);
			// 
			// stepsToolStripMenuItem
			// 
			this->stepsToolStripMenuItem->Name = L"stepsToolStripMenuItem";
			this->stepsToolStripMenuItem->Size = System::Drawing::Size(298, 26);
			this->stepsToolStripMenuItem->Text = L"Show steps";
			this->stepsToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::stepsToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 26);
			this->infoToolStripMenuItem->Text = L"Info";
			// 
			// panel_s
			// 
			this->panel_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_s->Controls->Add(this->button_s);
			this->panel_s->Controls->Add(this->tableLayoutPanel1);
			this->panel_s->Location = System::Drawing::Point(12, 46);
			this->panel_s->Name = L"panel_s";
			this->panel_s->Size = System::Drawing::Size(777, 180);
			this->panel_s->TabIndex = 1;
			// 
			// button_s
			// 
			this->button_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_s->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_s->Location = System::Drawing::Point(3, 3);
			this->button_s->Name = L"button_s";
			this->button_s->Size = System::Drawing::Size(771, 40);
			this->button_s->TabIndex = 1;
			this->button_s->Text = L"Convert";
			this->button_s->UseVisualStyleBackColor = true;
			this->button_s->Click += gcnew System::EventHandler(this, &MainForm::button_s_Click);
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
			this->tableLayoutPanel1->Size = System::Drawing::Size(771, 116);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// num_s
			// 
			this->num_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->num_s->Location = System::Drawing::Point(3, 18);
			this->num_s->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->num_s->Name = L"num_s";
			this->num_s->Size = System::Drawing::Size(580, 22);
			this->num_s->TabIndex = 0;
			// 
			// res_s
			// 
			this->res_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->res_s->Location = System::Drawing::Point(3, 76);
			this->res_s->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->res_s->Name = L"res_s";
			this->res_s->ReadOnly = true;
			this->res_s->Size = System::Drawing::Size(580, 22);
			this->res_s->TabIndex = 1;
			// 
			// from_s
			// 
			this->from_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->from_s->Location = System::Drawing::Point(596, 18);
			this->from_s->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->from_s->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->from_s->Name = L"from_s";
			this->from_s->Size = System::Drawing::Size(172, 22);
			this->from_s->TabIndex = 2;
			this->from_s->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// to_s
			// 
			this->to_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->to_s->Location = System::Drawing::Point(596, 76);
			this->to_s->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->to_s->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->to_s->Name = L"to_s";
			this->to_s->Size = System::Drawing::Size(172, 22);
			this->to_s->TabIndex = 3;
			this->to_s->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// panel_sh
			// 
			this->panel_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_sh->Controls->Add(this->info_sh);
			this->panel_sh->Controls->Add(this->button_sh);
			this->panel_sh->Controls->Add(this->tableLayoutPanel2);
			this->panel_sh->Location = System::Drawing::Point(9, 43);
			this->panel_sh->Name = L"panel_sh";
			this->panel_sh->Size = System::Drawing::Size(777, 177);
			this->panel_sh->TabIndex = 2;
			this->panel_sh->Visible = false;
			// 
			// info_sh
			// 
			this->info_sh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->info_sh->Location = System::Drawing::Point(279, 0);
			this->info_sh->Name = L"info_sh";
			this->info_sh->ReadOnly = true;
			this->info_sh->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->info_sh->Size = System::Drawing::Size(494, 174);
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
			this->button_sh->Click += gcnew System::EventHandler(this, &MainForm::button_sh_Click);
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
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(801, 238);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel_s);
			this->Controls->Add(this->panel_sh);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(350, 258);
			this->Name = L"MainForm";
			this->Text = L"Tranusy";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel_s->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_s))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_s))->EndInit();
			this->panel_sh->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->from_sh))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->to_sh))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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

	// Change mod
	private: void changeMod()
	{
		if (modToolStripMenuItem->SelectedIndex == 0 && !stepsToolStripMenuItem->Checked)
		{
			// Switxh StripMenuItems access
			importToolStripMenuItem->Enabled = false;
			saveToolStripMenuItem->Enabled = false;

			// Set window size
			this->MaximumSize = System::Drawing::Size(10000, 225);
			this->MinimumSize = System::Drawing::Size(350, 225);
			this->Size = System::Drawing::Size(350, 225);

			// Switch mod panels
			panel_s->Visible = true;
			//m
			panel_sh->Visible = false;
			//m+h
		}
		else if (modToolStripMenuItem->SelectedIndex == 1 && !stepsToolStripMenuItem->Checked)
		{
			;
		}
		else if (modToolStripMenuItem->SelectedIndex == 0 && stepsToolStripMenuItem->Checked)
		{
			// Switxh StripMenuItems access
			importToolStripMenuItem->Enabled = false;
			saveToolStripMenuItem->Enabled = true;

			// Set window size
			this->MaximumSize = System::Drawing::Size(0, 0);
			this->MinimumSize = System::Drawing::Size(650, 225);
			this->Size = System::Drawing::Size(650, 225);

			// Switch mod panels
			panel_s->Visible = false;
			//m
			panel_sh->Visible = true;
			//m+h
		}
		else if (modToolStripMenuItem->SelectedIndex == 1 && stepsToolStripMenuItem->Checked)
		{
			;
		}
	}
	private: System::Void modToolStripMenuItem_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		changeMod();
	}
	private: System::Void stepsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		stepsToolStripMenuItem->Checked = !stepsToolStripMenuItem->Checked;
		changeMod();
	}
	
	// Converting buttons
	private: System::Void button_s_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Converter converter;
		try
		{
			converter = Converter(ToShort(from_s->Value), ToShort(to_s->Value), ToStdString(num_s->Text));
			converter.convert();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Не вдалося сконвертувати число \""+ num_s->Text +"\" із ["+ from_s->Text + "] у ["+ to_s->Text + "]:\n\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			res_s->Text = L"";
			return;
		}

		res_s->Text = gcnew System::String(converter.getRes().c_str());
	}
	private: System::Void button_sh_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Converter converter;
		try
		{
			converter = Converter(ToShort(from_sh->Value), ToShort(to_sh->Value), ToStdString(num_sh->Text));
			converter.convert();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show("Не вдалося сконвертувати число \"" + num_s->Text + "\" із [" + from_s->Text + "] у [" + to_s->Text + "]:\n\n" + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			res_sh->Text = L"";
			return;
		}

		res_sh->Text = gcnew System::String(converter.getRes().c_str());
		info_sh->Text = gcnew System::String(converter.getInfo().c_str());
	}
};
}
