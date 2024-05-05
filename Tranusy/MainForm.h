#pragma once

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
			panel_m->Visible = false;
			//s+h
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
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ importToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modeToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^ modToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stepsToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel_s;




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel_m;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;


	protected:





	protected:

	protected:






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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->importToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->stepsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel_s = (gcnew System::Windows::Forms::Panel());
			this->panel_m = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->menuStrip1->SuspendLayout();
			this->panel_s->SuspendLayout();
			this->panel_m->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
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
			this->menuStrip1->Size = System::Drawing::Size(873, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->saveToolStripMenuItem,
					this->importToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 24);
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
			this->modeToolStripMenuItem->Size = System::Drawing::Size(62, 24);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// modToolStripMenuItem
			// 
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
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->infoToolStripMenuItem->Text = L"Info";
			// 
			// panel_s
			// 
			this->panel_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_s->Controls->Add(this->button1);
			this->panel_s->Controls->Add(this->tableLayoutPanel1);
			this->panel_s->Location = System::Drawing::Point(12, 46);
			this->panel_s->Name = L"panel_s";
			this->panel_s->Size = System::Drawing::Size(849, 548);
			this->panel_s->TabIndex = 1;
			this->panel_s->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::panel_s_Paint);
			// 
			// panel_m
			// 
			this->panel_m->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel_m->Controls->Add(this->button2);
			this->panel_m->Controls->Add(this->tableLayoutPanel2);
			this->panel_m->Location = System::Drawing::Point(9, 43);
			this->panel_m->Name = L"panel_m";
			this->panel_m->Size = System::Drawing::Size(849, 548);
			this->panel_m->TabIndex = 2;
			this->panel_m->Visible = false;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(7, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(836, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Convert";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->textBox4, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox3, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(4, 47);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(842, 498);
			this->tableLayoutPanel2->TabIndex = 0;
			// 
			// textBox4
			// 
			this->textBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox4->Location = System::Drawing::Point(424, 3);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(415, 492);
			this->textBox4->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox3->Location = System::Drawing::Point(3, 3);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(415, 492);
			this->textBox3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(843, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Convert";
			this->button1->UseVisualStyleBackColor = true;
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
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->numericUpDown2, 1, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 54);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(843, 116);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(3, 18);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(635, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(3, 76);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 3, 10, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(635, 22);
			this->textBox2->TabIndex = 1;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown1->Location = System::Drawing::Point(651, 18);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(189, 22);
			this->numericUpDown1->TabIndex = 2;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->numericUpDown2->Location = System::Drawing::Point(651, 76);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(189, 22);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(873, 606);
			this->Controls->Add(this->panel_s);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel_m);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(350, 258);
			this->Name = L"MainForm";
			this->Text = L"Tranusy";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel_s->ResumeLayout(false);
			this->panel_m->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void modToolStripMenuItem_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (modToolStripMenuItem->SelectedIndex == 0 && !stepsToolStripMenuItem->Checked)
		{
			// Switxh StripMenuItems access
			importToolStripMenuItem->Enabled = false;

			// Set window size
			this->MaximumSize = System::Drawing::Size(10000, 225);
			this->MinimumSize = System::Drawing::Size(350, 225);
			this->Size = System::Drawing::Size(350, 225);

			// Switch mod panels
			panel_s->Visible = true;
			panel_m->Visible = false;
			//s+h
			//m+h
		}
		else if (modToolStripMenuItem->SelectedIndex == 1 && !stepsToolStripMenuItem->Checked)
		{
			// Switxh StripMenuItems access
			importToolStripMenuItem->Enabled = true;

			// Set window size
			this->MaximumSize = System::Drawing::Size(0, 0);
			this->MinimumSize = System::Drawing::Size(0, 0);
			this->Size = System::Drawing::Size(700, 400);

			// Switch mod panels
			panel_s->Visible = false;
			panel_m->Visible = true;
			//s+h
			//m+h
		}
		else if (modToolStripMenuItem->SelectedIndex == 0 && stepsToolStripMenuItem->Checked)
		{
			;
		}
		else if (modToolStripMenuItem->SelectedIndex == 1 && stepsToolStripMenuItem->Checked)
		{
			;
		}
	}
private: System::Void panel_s_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
