#pragma once
#include "House.h"

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
		deletingLines(System::Collections::Generic::List<House^>^ housesList, System::Windows::Forms::DataGridView^ targetGrid)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->housesList = housesList;
			this->targetGrid = targetGrid;
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
	private: System::Windows::Forms::RadioButton^ multipleLinesDeleteButton;

	private: System::Windows::Forms::Label^ lineIdLabel;
	private: System::Windows::Forms::MaskedTextBox^ lineIdTextBox;

	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::MaskedTextBox^ startIdTextBox;

	private: System::Windows::Forms::Label^ startIdLabel;
	private: System::Windows::Forms::MaskedTextBox^ endIdTextBox;


	private: System::Windows::Forms::Label^ endIdLabel;

	private: System::Collections::Generic::List<House^>^ housesList;
	private: System::Windows::Forms::DataGridView^ targetGrid;

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
			this->multipleLinesDeleteButton = (gcnew System::Windows::Forms::RadioButton());
			this->lineIdLabel = (gcnew System::Windows::Forms::Label());
			this->lineIdTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->startIdTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->startIdLabel = (gcnew System::Windows::Forms::Label());
			this->endIdTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->endIdLabel = (gcnew System::Windows::Forms::Label());
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
			this->singleLineDeleteButton->TabStop = true;
			this->singleLineDeleteButton->Text = L"Удаление 1 строки";
			this->singleLineDeleteButton->UseVisualStyleBackColor = true;
			this->singleLineDeleteButton->CheckedChanged += gcnew System::EventHandler(this, &deletingLines::singleLineDeleteButton_CheckedChanged);
			// 
			// multipleLinesDeleteButton
			// 
			this->multipleLinesDeleteButton->AutoSize = true;
			this->multipleLinesDeleteButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->multipleLinesDeleteButton->Location = System::Drawing::Point(264, 24);
			this->multipleLinesDeleteButton->Name = L"multipleLinesDeleteButton";
			this->multipleLinesDeleteButton->Size = System::Drawing::Size(312, 34);
			this->multipleLinesDeleteButton->TabIndex = 1;
			this->multipleLinesDeleteButton->Text = L"Удаление нескольких строк";
			this->multipleLinesDeleteButton->UseVisualStyleBackColor = true;
			this->multipleLinesDeleteButton->CheckedChanged += gcnew System::EventHandler(this, &deletingLines::multipleLinesDeleteButton_CheckedChanged);
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
			// lineIdTextBox
			// 
			this->lineIdTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->lineIdTextBox->Location = System::Drawing::Point(240, 192);
			this->lineIdTextBox->Name = L"lineIdTextBox";
			this->lineIdTextBox->Size = System::Drawing::Size(264, 36);
			this->lineIdTextBox->TabIndex = 3;
			this->lineIdTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &deletingLines::digitsOnly_KeyPress);
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
			this->deleteButton->Click += gcnew System::EventHandler(this, &deletingLines::deleteButton_Click);
			// 
			// startIdTextBox
			// 
			this->startIdTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->startIdTextBox->Location = System::Drawing::Point(312, 144);
			this->startIdTextBox->Name = L"startIdTextBox";
			this->startIdTextBox->Size = System::Drawing::Size(192, 36);
			this->startIdTextBox->TabIndex = 6;
			this->startIdTextBox->Visible = false;
			this->startIdTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &deletingLines::digitsOnly_KeyPress);
			// 
			// startIdLabel
			// 
			this->startIdLabel->AutoSize = true;
			this->startIdLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->startIdLabel->Location = System::Drawing::Point(72, 144);
			this->startIdLabel->Name = L"startIdLabel";
			this->startIdLabel->Size = System::Drawing::Size(238, 30);
			this->startIdLabel->TabIndex = 5;
			this->startIdLabel->Text = L"ID-Начало Интервала:";
			this->startIdLabel->Visible = false;
			// 
			// endIdTextBox
			// 
			this->endIdTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->endIdTextBox->Location = System::Drawing::Point(312, 240);
			this->endIdTextBox->Name = L"endIdTextBox";
			this->endIdTextBox->Size = System::Drawing::Size(192, 36);
			this->endIdTextBox->TabIndex = 8;
			this->endIdTextBox->Visible = false;
			this->endIdTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &deletingLines::digitsOnly_KeyPress);
			// 
			// endIdLabel
			// 
			this->endIdLabel->AutoSize = true;
			this->endIdLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->endIdLabel->Location = System::Drawing::Point(72, 240);
			this->endIdLabel->Name = L"endIdLabel";
			this->endIdLabel->Size = System::Drawing::Size(227, 30);
			this->endIdLabel->TabIndex = 7;
			this->endIdLabel->Text = L"ID-Конец Интервала:";
			this->endIdLabel->Visible = false;
			// 
			// deletingLines
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->endIdTextBox);
			this->Controls->Add(this->endIdLabel);
			this->Controls->Add(this->startIdTextBox);
			this->Controls->Add(this->startIdLabel);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->lineIdTextBox);
			this->Controls->Add(this->lineIdLabel);
			this->Controls->Add(this->multipleLinesDeleteButton);
			this->Controls->Add(this->singleLineDeleteButton);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"deletingLines";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Удаление Строк";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void multipleLinesDeleteButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->lineIdLabel->Visible = false;
		this->lineIdTextBox->Visible = false;

		this->startIdLabel->Visible = true;
		this->startIdTextBox->Visible = true;
		this->endIdLabel->Visible = true;
		this->endIdTextBox->Visible = true;
	}


	private: System::Void singleLineDeleteButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->startIdLabel->Visible = false;
		this->startIdTextBox->Visible = false;
		this->endIdLabel->Visible = false;
		this->endIdTextBox->Visible = false;
		
		this->lineIdLabel->Visible = true;
		this->lineIdTextBox->Visible = true;
	}


	private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (singleLineDeleteButton->Checked) {
			int idToDelete;

			// Проверка ввода ID на корректность (число, не пустая строка и т.д.)
			if (!Int32::TryParse(lineIdTextBox->Text, idToDelete)) {
				MessageBox::Show("Пожалуйста, введите корректный числовой ID записи!",
								 "Ошибка ввода",
								 MessageBoxButtons::OK,
								 MessageBoxIcon::Error);
				return;
			}

			int listId = -1;

			for each (House ^ house in housesList) {
				if (house->getId() == idToDelete) {
					listId = housesList->IndexOf(house);
					break;
				}
			}

			if (listId != -1) {
				housesList->RemoveAt(listId);
				targetGrid->Rows->RemoveAt(listId);
			}
			else {
				MessageBox::Show("Запись с указанным ID не найдена.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		else {
			int startId;
			int endId;

			// Проверка ввода ID на корректность (число, не пустая строка и т.д.)
			if (!Int32::TryParse(startIdTextBox->Text, startId) || !Int32::TryParse(endIdTextBox->Text, endId)) {
				MessageBox::Show("Пожалуйста, введите корректные числовые ID диапазона!", "Ошибка ввода", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Collections::Generic::List<House^>^ housesToDelete = gcnew System::Collections::Generic::List<House^>();

			for each (House^ house in housesList) {
				if (house->getId() >= startId && house->getId() <= endId) {
					housesToDelete->Add(house);
				}
			}

			if (housesToDelete->Count > 0) {
				for each (House ^ house in housesToDelete) {
					housesList->Remove(house);
				}

				for (int i = targetGrid->Rows->Count - 1; i >= 0; i--) {
					if (targetGrid->Rows[i]->Cells[0]->Value != nullptr) {
						int cellId = Convert::ToInt32(targetGrid->Rows[i]->Cells[0]->Value);

						if (cellId >= startId && cellId <= endId) {
							targetGrid->Rows->RemoveAt(i);
						}
					}
				}
			}
			else {
				MessageBox::Show("Записей с указанными ID не найдено.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	private: System::Void digitsOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверяем: если символ не является цифрой и не является клавишей Backspace
		if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			// Пропускаем, если не цифра и не Backspace
			e->Handled = true;
		}
	}
};
}
