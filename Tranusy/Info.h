#pragma once

namespace Tranusy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Info
	/// </summary>
	public ref class Info : public System::Windows::Forms::Form
	{
	public:
		Info(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			showAsEnglish();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Info()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ englishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ukraineToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ appInfo;


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
			this->englishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ukraineToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->appInfo = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->englishToolStripMenuItem,
					this->ukraineToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(686, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// englishToolStripMenuItem
			// 
			this->englishToolStripMenuItem->Name = L"englishToolStripMenuItem";
			this->englishToolStripMenuItem->Size = System::Drawing::Size(70, 24);
			this->englishToolStripMenuItem->Text = L"English";
			this->englishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Info::englishToolStripMenuItem_Click);
			// 
			// ukraineToolStripMenuItem
			// 
			this->ukraineToolStripMenuItem->Name = L"ukraineToolStripMenuItem";
			this->ukraineToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->ukraineToolStripMenuItem->Text = L"Ukraine";
			this->ukraineToolStripMenuItem->Click += gcnew System::EventHandler(this, &Info::ukraineToolStripMenuItem_Click);
			// 
			// appInfo
			// 
			this->appInfo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->appInfo->Location = System::Drawing::Point(13, 32);
			this->appInfo->Name = L"appInfo";
			this->appInfo->ReadOnly = true;
			this->appInfo->Size = System::Drawing::Size(661, 488);
			this->appInfo->TabIndex = 2;
			this->appInfo->Text = L"";
			// 
			// Info
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 532);
			this->Controls->Add(this->appInfo);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Info";
			this->Text = L"Info";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// *** service ***
	private: void addHeaderText(String^ text)
	{
		appInfo->SelectionFont = gcnew System::Drawing::Font("Ink Free", 25, FontStyle::Bold);
		appInfo->AppendText(text + "\n");
		appInfo->SelectionFont = appInfo->Font;
	}
	private: void addTitleText(String^ text)
	{
		appInfo->SelectionFont = gcnew System::Drawing::Font("Cascadia Code", 18, FontStyle::Bold);
		appInfo->AppendText(text + "\n");
		appInfo->SelectionFont = appInfo->Font;
	}
	private: void addSimpleText(String^ text)
	{
		appInfo->SelectionFont = gcnew System::Drawing::Font("Bahnschrift Light", 14, FontStyle::Bold);
		appInfo->AppendText(text + "\n");
		appInfo->SelectionFont = appInfo->Font;
	}
	// *** used ***
	private: void showAsEnglish()
	{
		/*
		Tranucy
		–––––––––––––––––––––––––––––––––
		Note:
		Tranusy is a numeric base converter application built using C++/CLI. It allows users to convert numbers from one base to another with the steps shown. Tranusy also offers multiple conversions, which makes the work more efficient.
		Opportunities:
		• Simple conversion from the one system to another.
		• Option to show conversion steps for better understanding.
		• Multiple converting.
		How to use 'multiple mode':
		Input as this pattern: number [from] [to]
		You will get the result as: result [to]
		Example of input:
		101101 [2] [10]
		-14201 [5] [24]
		AB04D.5F [16] [3]
		Warning:
		Tranusy's using base type of data as integer {From −9 223 372 036 854 775 808 to 9 223 372 036 854 775 807} and doubel {1.7E +/- 308 (15 characters)}.
		Thus Tranusy can't convert the very huge numbers yet.
		*/
		appInfo->Clear();

		addHeaderText("Tranucy");
		addSimpleText("––––––––––––––––––––---–\n");
		addTitleText("Note:");
		addSimpleText("Tranusy is a numeric base converter application built using C++/CLI. It allows users to convert numbers from one base to another with the steps shown. Tranusy also offers multiple conversions, which makes the work more efficient.\n");
		addTitleText("Opportunities:");
		addSimpleText("• Simple conversion from the one system to another.");
		addSimpleText("• Option to show conversion steps for better understanding.");
		addSimpleText("• Multiple converting.\n");
		addTitleText("How to use 'multiple mode':");
		addSimpleText("Input as this pattern: number [from] [to]");
		addSimpleText("You will get the result as: result [to]");
		addSimpleText("Example of input:");
		addSimpleText("101101 [2] [10]");
		addSimpleText("-14201 [5] [24]");
		addSimpleText("AB04D.5F [16] [3]\n");
		addTitleText("Warning:");
		addSimpleText("Tranusy's using base type of data as integer {From −9 223 372 036 854 775 808 to 9 223 372 036 854 775 807} and doubel {1.7E +/- 308 (15 characters)}.");
		addSimpleText("Thus Tranusy can't convert the very huge numbers yet.");
	}
	private: void showAsUkraine()
	{
		/*
		Tranucy
		––––––––––––––––––––––––––––––––––
		Примітка:
		Tranusy — програма для перетворення чисел між різними системами числення, створена за допомогою C++/CLI. Вона дозволяє користувачам перетворювати числа з однієї бази в іншу із показаними кроками. Tranusy також пропонує множинне перетворення, що робить роботу більш ефективною.
		Можливості:
		• Просте перетворення з однієї системи в іншу.
		• Можливість показати кроки перетворення для кращого розуміння.
		• Множинне перетворення.
		Як використовувати 'multiple mode':
		Введіть як нацьому шаблоні: число [з] [у]
		Ти отримаєш результат у вигляді: результат [у]
		Приклад введення:
		101101 [2] [10]
		-14201 [5] [24]
		AB04D.5F [16] [3]
		Увага:
		Tranusy використовує базовий тип даних як int {Від −9 223 372 036 854 775 808 до 9 223 372 036 854 775 807} і double {1,7E +/- 308 (15 символів)}.
		Таким чином Tranusy ще не може конвертувати дуже великі числа.
		*/
		appInfo->Clear();

		addHeaderText("Tranucy");
		addSimpleText("––––––––––––––––––––---–\n");
		addTitleText("Примітка:");
		addSimpleText("Tranusy — програма для перетворення чисел між різними системами числення, створена за допомогою C++/CLI. Вона дозволяє користувачам перетворювати числа з однієї бази в іншу із показаними кроками. Tranusy також пропонує множинне перетворення, що робить роботу більш ефективною.\n");
		addTitleText("Можливості:");
		addSimpleText("• Просте перетворення з однієї системи в іншу.");
		addSimpleText("• Можливість показати кроки перетворення для кращого розуміння.");
		addSimpleText("• Множинне перетворення.\n");
		addTitleText("Як використовувати 'multiple mode':");
		addSimpleText("Введіть як нацьому шаблоні: число [з] [у]");
		addSimpleText("Ти отримаєш результат у вигляді: результат [у]");
		addSimpleText("Приклад введення:");
		addSimpleText("101101 [2] [10]");
		addSimpleText("-14201 [5] [24]");
		addSimpleText("AB04D.5F [16] [3]\n");
		addTitleText("Увага:");
		addSimpleText("Tranusy використовує базовий тип даних як int {Від −9 223 372 036 854 775 808 до 9 223 372 036 854 775 807} і double {1,7E +/- 308 (15 символів)}.");
		addSimpleText("Таким чином Tranusy ще не може конвертувати дуже великі числа.");
	}
	// *** bound ***
	private: System::Void englishToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		showAsEnglish();
	}
	private: System::Void ukraineToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		showAsUkraine();
	}
};
}
