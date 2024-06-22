#pragma once
#include <msclr/marshal_cppstd.h>
#include "Converter.h"
#include "Info.h"

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

			//// Switch mod panels
			//panel_s->Visible = true;
			////m
			//panel_sh->Visible = false;
			////m+h
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
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(332, 28);
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
			this->infoToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->infoToolStripMenuItem->Text = L"Info";
			this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::infoToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(332, 238);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MinimumSize = System::Drawing::Size(350, 258);
			this->Name = L"MainForm";
			this->Text = L"Tranusy";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
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

			//// Switch mod panels
			//panel_s->Visible = true;
			////m
			//panel_sh->Visible = false;
			////m+h
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

			//// Switch mod panels
			//panel_s->Visible = false;
			////m
			//panel_sh->Visible = true;
			////m+h
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
		/*Converter converter;
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

		res_s->Text = gcnew System::String(converter.getRes().c_str());*/
	}
	private: System::Void button_sh_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		/*Converter converter;
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
		info_sh->Text = gcnew System::String(converter.getInfo().c_str());*/
	}
	
	// Info
	private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Tranusy::Info^ info = gcnew Tranusy::Info();
		info->ShowDialog();
	}
};
}
