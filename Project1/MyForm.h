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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ��������������;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ ����;
	private: System::Windows::Forms::Button^ ��������������;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->�������������� = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->���� = (gcnew System::Windows::Forms::Label());
			this->�������������� = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ��������������
			// 
			this->��������������->AutoSize = true;
			this->��������������->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->��������������->Font = (gcnew System::Drawing::Font(L"Consolas", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->��������������->Location = System::Drawing::Point(46, 11);
			this->��������������->Name = L"��������������";
			this->��������������->Size = System::Drawing::Size(220, 28);
			this->��������������->TabIndex = 0;
			this->��������������->Text = L"�������� ������:";
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
			// ����
			// 
			this->����->AutoSize = true;
			this->����->BackColor = System::Drawing::SystemColors::Window;
			this->����->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->����->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->����->Location = System::Drawing::Point(69, 74);
			this->����->Name = L"����";
			this->����->Size = System::Drawing::Size(77, 34);
			this->����->TabIndex = 2;
			this->����->Text = L"����";
			// 
			// ��������������
			// 
			this->��������������->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"��������������.BackgroundImage")));
			this->��������������->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->��������������->Location = System::Drawing::Point(12, 140);
			this->��������������->Name = L"��������������";
			this->��������������->Size = System::Drawing::Size(424, 48);
			this->��������������->TabIndex = 3;
			this->��������������->Text = L"��������������";
			this->��������������->UseVisualStyleBackColor = true;
			this->��������������->Click += gcnew System::EventHandler(this, &MyForm::��������������_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(445, 195);
			this->Controls->Add(this->��������������);
			this->Controls->Add(this->����);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->��������������);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->ForeColor = System::Drawing::Color::DarkOliveGreen;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowInTaskbar = false;
			this->Text = L"��������� �����";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		

	}
	private: System::Void ��������������_Click(System::Object^ sender, System::EventArgs^ e)
	{

		WebClient^ wb = gcnew WebClient();
		String^ line = wb->DownloadString("https://cbr.ru/scripts/XML_daily.asp");
		Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");
		Match^ match = regex->Match(line);
		����->Text = match->Groups[1]->Value + " " + comboBox1->Text + " = " + match->Groups[3]->Value + "RUB";

	}
};
}
