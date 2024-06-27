#pragma once
#include "Simple.h"
#include "Muiltiple.h"
#include "SimpleHistory.h"
#include "MuiltiplehHistory.h"
#include "Info.h"

namespace Tranusy {

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
			// Switch StripMenuItems access
			saveToolStripMenuItem->Enabled = false;
			importToolStripMenuItem->Enabled = false;

			// Set windows size
			this->MaximumSize = System::Drawing::Size(100000, 230);
			this->MinimumSize = System::Drawing::Size(300, 230);
			this->Size = System::Drawing::Size(300, 230);

			// Put the mod form
			frm_s = gcnew Tranusy::Simple();
			frm_s->TopLevel = false;
			frm_s->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm_s);
			frm_s->BringToFront();
			frm_s->Show();
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
	private: Tranusy::Simple^ frm_s;
	private: Tranusy::Muiltiple^ frm_m;
	private: Tranusy::SimpleHistory^ frm_sh;
	private: Tranusy::MuiltiplehHistory^ frm_mh;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ importToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modeToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ showStepToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::Panel^ mainPanel;


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
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->showStepToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->modeToolStripMenuItem, this->infoToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(338, 30);
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
			this->fileToolStripMenuItem->Size = System::Drawing::Size(46, 26);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::saveToolStripMenuItem_Click);
			// 
			// importToolStripMenuItem
			// 
			this->importToolStripMenuItem->Name = L"importToolStripMenuItem";
			this->importToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->importToolStripMenuItem->Text = L"Import";
			this->importToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::importToolStripMenuItem_Click);
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripComboBox1,
					this->showStepToolStripMenuItem
			});
			this->modeToolStripMenuItem->Name = L"modeToolStripMenuItem";
			this->modeToolStripMenuItem->Size = System::Drawing::Size(62, 26);
			this->modeToolStripMenuItem->Text = L"Mode";
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Simple", L"Muiltiple" });
			this->toolStripComboBox1->MaxDropDownItems = 2;
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 28);
			this->toolStripComboBox1->Text = L"Simple";
			this->toolStripComboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::toolStripComboBox1_SelectedIndexChanged);
			// 
			// showStepToolStripMenuItem
			// 
			this->showStepToolStripMenuItem->Name = L"showStepToolStripMenuItem";
			this->showStepToolStripMenuItem->Size = System::Drawing::Size(195, 26);
			this->showStepToolStripMenuItem->Text = L"Show Step";
			this->showStepToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::showStepToolStripMenuItem_Click);
			// 
			// infoToolStripMenuItem
			// 
			this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 26);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::infoToolStripMenuItem_Click);
			// 
			// mainPanel
			// 
			this->mainPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->mainPanel->Location = System::Drawing::Point(12, 40);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(314, 239);
			this->mainPanel->TabIndex = 1;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(338, 291);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void changeMod()
	{
		if (toolStripComboBox1->SelectedIndex == 0 && !showStepToolStripMenuItem->Checked)		// s
		{
			// Switch StripMenuItems access
			saveToolStripMenuItem->Enabled = false;
			importToolStripMenuItem->Enabled = false;

			// Set windows size
			this->MaximumSize = System::Drawing::Size(100000, 230);
			this->MinimumSize = System::Drawing::Size(300, 230);
			this->Size = System::Drawing::Size(300, 230);

			// Put the mod form
			frm_s = gcnew Tranusy::Simple();
			frm_s->TopLevel = false;
			frm_s->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm_s);
			frm_s->BringToFront();
			frm_s->Show();
		}
		else if (toolStripComboBox1->SelectedIndex == 1 && !showStepToolStripMenuItem->Checked)	// m
		{
			// Switch StripMenuItems access
			saveToolStripMenuItem->Enabled = false;
			importToolStripMenuItem->Enabled = true;

			// Set windows size
			this->MaximumSize = System::Drawing::Size(100000, 100000);
			this->MinimumSize = System::Drawing::Size(350, 350);
			this->Size = System::Drawing::Size(350, 350);

			// Put the mod form
			frm_m = gcnew Tranusy::Muiltiple();
			frm_m->TopLevel = false;
			frm_m->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm_m);
			frm_m->BringToFront();
			frm_m->Show();
		}
		else if (toolStripComboBox1->SelectedIndex == 0 && showStepToolStripMenuItem->Checked)	// sh
		{
			// Switch StripMenuItems access
			saveToolStripMenuItem->Enabled = true;
			importToolStripMenuItem->Enabled = false;

			// Set windows size
			this->MaximumSize = System::Drawing::Size(100000, 100000);
			this->MinimumSize = System::Drawing::Size(580, 230);
			this->Size = System::Drawing::Size(580, 230);

			// Put the mod form
			frm_sh = gcnew Tranusy::SimpleHistory();
			frm_sh->TopLevel = false;
			frm_sh->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm_sh);
			frm_sh->BringToFront();
			frm_sh->Show();
		}
		else if (toolStripComboBox1->SelectedIndex == 1 && showStepToolStripMenuItem->Checked)	// mh
		{
			// Switch StripMenuItems access
			saveToolStripMenuItem->Enabled = true;
			importToolStripMenuItem->Enabled = true;

			// Set windows size
			this->MaximumSize = System::Drawing::Size(100000, 100000);
			this->MinimumSize = System::Drawing::Size(580, 230);
			this->Size = System::Drawing::Size(600, 300);

			// Put the mod form
			frm_mh = gcnew Tranusy::MuiltiplehHistory();
			frm_mh->TopLevel = false;
			frm_mh->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm_mh);
			frm_mh->BringToFront();
			frm_mh->Show();
		}
	}
	private: System::Void showStepToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		showStepToolStripMenuItem->Checked = !showStepToolStripMenuItem->Checked;
		changeMod();
	}
	private: System::Void toolStripComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		changeMod();
	}
	private: System::Void importToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";

		try
		{
			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ filePath = openFileDialog->FileName;

				if (toolStripComboBox1->SelectedIndex == 1 && !showStepToolStripMenuItem->Checked)		// m
					this->frm_m->data->Text = System::IO::File::ReadAllText(filePath);
				else if (toolStripComboBox1->SelectedIndex == 1 && showStepToolStripMenuItem->Checked)	// mh
					this->frm_mh->data->Text = System::IO::File::ReadAllText(filePath);
			}
		}
		catch (...)
		{
			MessageBox::Show("Не вдалося імпортувати дані файла!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog();
		saveFileDialog->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";

		try
		{
			if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ filePath = saveFileDialog->FileName;

				if (toolStripComboBox1->SelectedIndex == 0 && showStepToolStripMenuItem->Checked)	// sh
					System::IO::File::WriteAllText(filePath, this->frm_sh->info->Text);
				else if (toolStripComboBox1->SelectedIndex == 1 && showStepToolStripMenuItem->Checked)	// mh
					System::IO::File::WriteAllText(filePath, this->frm_mh->info->Text);
			}
		}
		catch (...)
		{
			MessageBox::Show("Не вдалося зберегти дані!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Tranusy::Info^ frm_info = gcnew Tranusy::Info();
		frm_info->ShowDialog();
	}
};
}
