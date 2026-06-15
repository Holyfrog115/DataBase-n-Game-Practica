#pragma once
#include "editForm.h"
#include "House.h"

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for houseIdEditForm
	/// </summary>
	public ref class houseIdEditForm : public System::Windows::Forms::Form
	{
	public:
		houseIdEditForm(System::Collections::Generic::List<House^>^ housesList)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->housesList = housesList;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~houseIdEditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ idTextBox;
	protected:

	private: System::Windows::Forms::Label^ idLabel;
	private: System::Windows::Forms::Button^ continueButton;

	private: System::Collections::Generic::List<House^>^ housesList;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(houseIdEditForm::typeid));
			this->idTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->continueButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// idTextBox
			// 
			this->idTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->idTextBox->Location = System::Drawing::Point(240, 72);
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(120, 36);
			this->idTextBox->TabIndex = 5;
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->idLabel->Location = System::Drawing::Point(24, 72);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(206, 30);
			this->idLabel->TabIndex = 4;
			this->idLabel->Text = L"Введите ID Записи:";
			// 
			// continueButton
			// 
			this->continueButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->continueButton->Location = System::Drawing::Point(48, 216);
			this->continueButton->Name = L"continueButton";
			this->continueButton->Size = System::Drawing::Size(264, 72);
			this->continueButton->TabIndex = 6;
			this->continueButton->Text = L"Продолжить";
			this->continueButton->UseVisualStyleBackColor = true;
			this->continueButton->Click += gcnew System::EventHandler(this, &houseIdEditForm::continueButton_Click);
			// 
			// houseIdEditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->continueButton);
			this->Controls->Add(this->idTextBox);
			this->Controls->Add(this->idLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"houseIdEditForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Корректировка Полей Строки";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void continueButton_Click(System::Object^ sender, System::EventArgs^ e) {
		int idToDelete;

		// Проверка ввода ID на корректность (число, не пустая строка и т.д.)
		if (!Int32::TryParse(idTextBox->Text, idToDelete)) {
			MessageBox::Show("Пожалуйста, введите корректный числовой ID записи!",
							 "Ошибка ввода",
							 MessageBoxButtons::OK,
							 MessageBoxIcon::Error);
			return;
		}

		int listId = -1;

		for each(House ^ house in housesList) {
			if (house->getId() == idToDelete) {
				listId = housesList->IndexOf(house);
				break;
			}
		}

		if (listId != -1) {
			editForm^ editFormInstance = gcnew editForm(listId);
			editFormInstance->Show();
			this->Close();
		}
		else {
			MessageBox::Show("Запись с указанным ID не найдена.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
