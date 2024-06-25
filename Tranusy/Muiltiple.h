#pragma once
#include <msclr/marshal_cppstd.h>
#include "Converter.h"
#include <vector>
#include <sstream>
#include <regex>

namespace Tranusy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Muiltiple
	/// </summary>
	public ref class Muiltiple : public System::Windows::Forms::Form
	{
	public:
		Muiltiple(void)
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
		~Muiltiple()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button_s;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ result;

	private: System::Windows::Forms::TextBox^ data;

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->data = (gcnew System::Windows::Forms::TextBox());
			this->button_s = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->tableLayoutPanel1);
			this->panel1->Controls->Add(this->button_s);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(350, 350);
			this->panel1->TabIndex = 0;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->result, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->data, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 49);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(344, 298);
			this->tableLayoutPanel1->TabIndex = 3;
			// 
			// result
			// 
			this->result->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->result->Enabled = false;
			this->result->Location = System::Drawing::Point(175, 3);
			this->result->Multiline = true;
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(166, 292);
			this->result->TabIndex = 1;
			// 
			// data
			// 
			this->data->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->data->Location = System::Drawing::Point(3, 3);
			this->data->Multiline = true;
			this->data->Name = L"data";
			this->data->Size = System::Drawing::Size(166, 292);
			this->data->TabIndex = 0;
			// 
			// button_s
			// 
			this->button_s->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button_s->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_s->Location = System::Drawing::Point(3, 3);
			this->button_s->Name = L"button_s";
			this->button_s->Size = System::Drawing::Size(344, 40);
			this->button_s->TabIndex = 2;
			this->button_s->Text = L"Convert";
			this->button_s->UseVisualStyleBackColor = true;
			this->button_s->Click += gcnew System::EventHandler(this, &Muiltiple::button_s_Click);
			// 
			// Muiltiple
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(350, 350);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Muiltiple";
			this->Text = L"Muiltiple";
			this->panel1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool verifyLine(const string& line)
	{
		std::regex pattern(R"(^[^\ ]+ \[\d+\] \[\d+\]$)");
		return std::regex_match(line, pattern);
	}
	private: System::Void button_s_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::vector<std::vector<string>> numData;
		string numRes{};
		unsigned int counter{};

		// Convert String^ in std::string
		string content = msclr::interop::marshal_as<std::string>(this->data->Text);

		// Split in {{"num", "from", "to"}, ...}
		std::stringstream ss(content);
		string line;
		while (getline(ss, line))
		{
			counter++;
			if (!verifyLine(line[line.size() - 1] == '\r' ? line.substr(0, line.size() - 1) : line))
			{
				MessageBox::Show(msclr::interop::marshal_as<System::String^>("Не вдалося сконвертувати число!\nрядок #" + to_string(counter) + ": \"" + line + "\"\n\nПеревірте коректність рядка та повторіть спробу. Шаблон для вводу рядка: \"число [з] [у]\"; де 'число' будь-яке (дійсне), 'з' натуральне (2-36), 'у' натуральне (2-36)\n\nПриклад рядка: -A34F3.1B [16] [2]"), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			std::vector<string> tokens;
			size_t pos = 0;

			// get num (before square brackets)
			pos = line.find(" ");
			tokens.push_back(line.substr(0, pos));
			line.erase(0, pos + 1);

			// get from sys base (number in first brackets)
			pos = line.find("]");
			tokens.push_back(line.substr(1, pos - 1)); // skip the opening brackets
			line.erase(0, pos + 2); // skip the ending brackets and backspace

			// get to sys base (number in second brackets)
			pos = line.find("]");
			tokens.push_back(line.substr(1, pos - 1)); // skip the opening brackets

			numData.push_back(tokens);
		}

		// Get result
		UIcppProject::Converter converter;
		for (std::vector<string> set : numData)
		{
			try
			{
				converter.convert(static_cast<short>(stoi(set[1])), static_cast<short>(stoi(set[2])), set[0]);
				numRes += converter.getRes() + " [" + set[2] + "]\r\n";
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(msclr::interop::marshal_as<System::String^>("Не вдалося сконвертувати число!\nрядок #" + to_string(counter) + ": \"" + set[0] + " [" + set[1] + "] [" + set[2] + "]\n\n") + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				numRes = "";
				this->result->Text = L"";
				return;
			}
		}
		this->result->Text = msclr::interop::marshal_as<System::String^>(numRes);
	}
};
}
