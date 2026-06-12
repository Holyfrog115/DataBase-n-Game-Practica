#pragma once

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for deletingLines
	/// </summary>
	public ref class deletingLines : public System::Windows::Forms::Form
	{
	public:
		deletingLines(void)
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
		~deletingLines()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ singleLineDeleteButton;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ lineIdLabel;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBox1;
	private: System::Windows::Forms::Button^ deleteButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(deletingLines::typeid));
			this->singleLineDeleteButton = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->lineIdLabel = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// singleLineDeleteButton
			// 
			this->singleLineDeleteButton->AutoSize = true;
			this->singleLineDeleteButton->Checked = true;
			this->singleLineDeleteButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->singleLineDeleteButton->Location = System::Drawing::Point(24, 24);
			this->singleLineDeleteButton->Name = L"singleLineDeleteButton";
			this->singleLineDeleteButton->Size = System::Drawing::Size(221, 34);
			this->singleLineDeleteButton->TabIndex = 0;
			this->singleLineDeleteButton->Text = L"Удаление 1 строки";
			this->singleLineDeleteButton->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->radioButton1->Location = System::Drawing::Point(264, 24);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(312, 34);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"Удаление нескольких строк";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// lineIdLabel
			// 
			this->lineIdLabel->AutoSize = true;
			this->lineIdLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->lineIdLabel->Location = System::Drawing::Point(72, 192);
			this->lineIdLabel->Name = L"lineIdLabel";
			this->lineIdLabel->Size = System::Drawing::Size(117, 30);
			this->lineIdLabel->TabIndex = 2;
			this->lineIdLabel->Text = L"ID Записи:";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->maskedTextBox1->Location = System::Drawing::Point(240, 192);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(264, 36);
			this->maskedTextBox1->TabIndex = 3;
			// 
			// deleteButton
			// 
			this->deleteButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->deleteButton->Location = System::Drawing::Point(144, 432);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(264, 72);
			this->deleteButton->TabIndex = 4;
			this->deleteButton->Text = L"Удалить";
			this->deleteButton->UseVisualStyleBackColor = true;
			// 
			// deletingLines
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->maskedTextBox1);
			this->Controls->Add(this->lineIdLabel);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->singleLineDeleteButton);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"deletingLines";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"deletingLines";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
