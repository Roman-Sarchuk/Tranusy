#pragma once
#include "Simple.h"
#include "Muiltiple.h"
#include "SimpleHistory.h"
#include "MuiltiplehHistory.h"

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
			this->menuStrip1->Size = System::Drawing::Size(338, 28);
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
			this->importToolStripMenuItem->Name = L"importToolStripMenuItem";
			this->importToolStripMenuItem->Size = System::Drawing::Size(137, 26);
			this->importToolStripMenuItem->Text = L"Import";
			// 
			// modeToolStripMenuItem
			// 
			this->modeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripComboBox1,
					this->showStepToolStripMenuItem
			});
			this->modeToolStripMenuItem->Name = L"modeToolStripMenuItem";
			this->modeToolStripMenuItem->Size = System::Drawing::Size(62, 24);
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
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->infoToolStripMenuItem->Text = L"Info";
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
			Tranusy::Simple^ frm = gcnew Tranusy::Simple();
			frm->TopLevel = false;
			frm->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm);
			frm->BringToFront();
			frm->Show();
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

			Tranusy::Muiltiple^ frm = gcnew Tranusy::Muiltiple();
			frm->TopLevel = false;
			frm->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm);
			frm->BringToFront();
			frm->Show();
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
			Tranusy::SimpleHistory^ frm = gcnew Tranusy::SimpleHistory();
			frm->TopLevel = false;
			frm->Dock = System::Windows::Forms::DockStyle::Fill;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm);
			frm->BringToFront();
			frm->Show();
		}
		else if (toolStripComboBox1->SelectedIndex == 1 && showStepToolStripMenuItem->Checked)	// mh
		{
			Tranusy::MuiltiplehHistory^ frm = gcnew Tranusy::MuiltiplehHistory();
			frm->TopLevel = false;
			if (mainPanel->Controls->Count > 0)
				mainPanel->Controls->Clear();
			mainPanel->Controls->Add(frm);
			frm->BringToFront();
			frm->Show();
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
};
}
