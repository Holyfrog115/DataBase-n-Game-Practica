#pragma once

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for enteringLines
	/// </summary>
	public ref class enteringLines : public System::Windows::Forms::Form
	{
	public:
		enteringLines(void)
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
		~enteringLines()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(enteringLines::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label1->Location = System::Drawing::Point(24, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Название Улицы:";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox1->Location = System::Drawing::Point(336, 48);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->button1->Location = System::Drawing::Point(312, 432);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(216, 72);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox2->Location = System::Drawing::Point(336, 96);
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label2->Location = System::Drawing::Point(24, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 30);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Номер Дома:";
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox3->Location = System::Drawing::Point(336, 144);
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label3->Location = System::Drawing::Point(24, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(291, 30);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Год Сдачи в Эксплуатацию:";
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox4->Location = System::Drawing::Point(336, 192);
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label4->Location = System::Drawing::Point(24, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(218, 30);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Количество Этажей:";
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox5->Location = System::Drawing::Point(336, 240);
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label5->Location = System::Drawing::Point(24, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(227, 30);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Количество Квартир:";
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox6->Location = System::Drawing::Point(336, 288);
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox6->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label6->Location = System::Drawing::Point(24, 288);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(259, 30);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Общая Жилая Площадь:";
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox7->Location = System::Drawing::Point(336, 336);
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->Size = System::Drawing::Size(216, 36);
			this->maskedTextBox7->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->label7->Location = System::Drawing::Point(24, 336);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(247, 30);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Общая Площадь Дома:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->button2->Location = System::Drawing::Point(48, 432);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(216, 72);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Отменить Ввод";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// enteringLines
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->maskedTextBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maskedTextBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->maskedTextBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->maskedTextBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maskedTextBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"enteringLines";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ввод Строк";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
