#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ВыберитеВалюту;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ Курс;
	private: System::Windows::Forms::Button^ Конвертировать;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ВыберитеВалюту = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->Курс = (gcnew System::Windows::Forms::Label());
			this->Конвертировать = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ВыберитеВалюту
			// 
			this->ВыберитеВалюту->AutoSize = true;
			this->ВыберитеВалюту->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ВыберитеВалюту->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ВыберитеВалюту->Location = System::Drawing::Point(46, 11);
			this->ВыберитеВалюту->Name = L"ВыберитеВалюту";
			this->ВыберитеВалюту->Size = System::Drawing::Size(220, 28);
			this->ВыберитеВалюту->TabIndex = 0;
			this->ВыберитеВалюту->Text = L"Выберите валюту:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"USD", L"EUR", L"KZT", L"UAH" });
			this->comboBox1->Location = System::Drawing::Point(272, 8);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(110, 32);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->Text = L"USD";
			// 
			// Курс
			// 
			this->Курс->AutoSize = true;
			this->Курс->BackColor = System::Drawing::SystemColors::Window;
			this->Курс->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Курс->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Курс->Location = System::Drawing::Point(69, 74);
			this->Курс->Name = L"Курс";
			this->Курс->Size = System::Drawing::Size(77, 34);
			this->Курс->TabIndex = 2;
			this->Курс->Text = L"Курс";
			// 
			// Конвертировать
			// 
			this->Конвертировать->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Конвертировать.BackgroundImage")));
			this->Конвертировать->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Конвертировать->Location = System::Drawing::Point(12, 140);
			this->Конвертировать->Name = L"Конвертировать";
			this->Конвертировать->Size = System::Drawing::Size(424, 48);
			this->Конвертировать->TabIndex = 3;
			this->Конвертировать->Text = L"Конвертировать";
			this->Конвертировать->UseVisualStyleBackColor = true;
			this->Конвертировать->Click += gcnew System::EventHandler(this, &MyForm::Конвертировать_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(445, 195);
			this->Controls->Add(this->Конвертировать);
			this->Controls->Add(this->Курс);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->ВыберитеВалюту);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowInTaskbar = false;
			this->Text = L"Конвертер валют";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		

	}
	private: System::Void Конвертировать_Click(System::Object^ sender, System::EventArgs^ e)
	{

		WebClient^ wb = gcnew WebClient();
		String^ line = wb->DownloadString("https://cbr.ru/scripts/XML_daily.asp");
		Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
		Match^ match = regex->Match(line);
		Курс->Text = match->Groups[1]->Value + " " + comboBox1->Text + " = " + match->Groups[3]->Value + "RUB";

	}
};
}
