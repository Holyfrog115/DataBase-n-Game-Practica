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
	/// Summary for editForm
	/// </summary>
	public ref class editForm : public System::Windows::Forms::Form
	{
	public:
		editForm(int listId, System::Collections::Generic::List<House^>^ housesList)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->listId = listId;
			this->housesList = housesList;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~editForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancelButton;
	protected:
	private: System::Windows::Forms::MaskedTextBox^ totalAreaTextBox;
	private: System::Windows::Forms::Label^ totalAreaLabel;
	private: System::Windows::Forms::MaskedTextBox^ livingAreaTextBox;
	private: System::Windows::Forms::Label^ livingAreaLabel;
	private: System::Windows::Forms::MaskedTextBox^ appartementsTextBox;
	private: System::Windows::Forms::Label^ appartementsLabel;
	private: System::Windows::Forms::MaskedTextBox^ floorsTextBox;
	private: System::Windows::Forms::Label^ floorsLabel;
	private: System::Windows::Forms::MaskedTextBox^ commissionYearTextBox;
	private: System::Windows::Forms::Label^ commissionYearLabel;
	private: System::Windows::Forms::MaskedTextBox^ houseNumberTextBox;
	private: System::Windows::Forms::Label^ houseNumberLabel;
	private: System::Windows::Forms::Button^ changeButton;
	private: System::Windows::Forms::MaskedTextBox^ streetNameTextBox;
	private: System::Windows::Forms::Label^ streetNameLabel;

	private: int listId;
	private: bool isChanged;
	private: System::Collections::Generic::List<House^>^ housesList;
	private: System::Windows::Forms::ErrorProvider^ errorProvider;
	private: System::ComponentModel::IContainer^ components;

	protected:
















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(editForm::typeid));
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->totalAreaTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->totalAreaLabel = (gcnew System::Windows::Forms::Label());
			this->livingAreaTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->livingAreaLabel = (gcnew System::Windows::Forms::Label());
			this->appartementsTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->appartementsLabel = (gcnew System::Windows::Forms::Label());
			this->floorsTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->floorsLabel = (gcnew System::Windows::Forms::Label());
			this->commissionYearTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->commissionYearLabel = (gcnew System::Windows::Forms::Label());
			this->houseNumberTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->houseNumberLabel = (gcnew System::Windows::Forms::Label());
			this->changeButton = (gcnew System::Windows::Forms::Button());
			this->streetNameTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->streetNameLabel = (gcnew System::Windows::Forms::Label());
			this->errorProvider = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->BeginInit();
			this->SuspendLayout();
			// 
			// cancelButton
			// 
			this->cancelButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->cancelButton->Location = System::Drawing::Point(24, 436);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(244, 72);
			this->cancelButton->TabIndex = 31;
			this->cancelButton->Text = L"Отменить Корректировку";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &editForm::cancelButton_Click);
			// 
			// totalAreaTextBox
			// 
			this->totalAreaTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->totalAreaTextBox->Location = System::Drawing::Point(340, 340);
			this->totalAreaTextBox->Name = L"totalAreaTextBox";
			this->totalAreaTextBox->Size = System::Drawing::Size(216, 36);
			this->totalAreaTextBox->TabIndex = 30;
			this->totalAreaTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editForm::decimalsOnly_KeyPress);
			this->totalAreaTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::totalAreaTextBox_Validating);
			// 
			// totalAreaLabel
			// 
			this->totalAreaLabel->AutoSize = true;
			this->totalAreaLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->totalAreaLabel->Location = System::Drawing::Point(28, 340);
			this->totalAreaLabel->Name = L"totalAreaLabel";
			this->totalAreaLabel->Size = System::Drawing::Size(247, 30);
			this->totalAreaLabel->TabIndex = 29;
			this->totalAreaLabel->Text = L"Общая Площадь Дома:";
			// 
			// livingAreaTextBox
			// 
			this->livingAreaTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->livingAreaTextBox->Location = System::Drawing::Point(340, 292);
			this->livingAreaTextBox->Name = L"livingAreaTextBox";
			this->livingAreaTextBox->Size = System::Drawing::Size(216, 36);
			this->livingAreaTextBox->TabIndex = 28;
			this->livingAreaTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editForm::decimalsOnly_KeyPress);
			this->livingAreaTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::livingAreaTextBox_Validating);
			// 
			// livingAreaLabel
			// 
			this->livingAreaLabel->AutoSize = true;
			this->livingAreaLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->livingAreaLabel->Location = System::Drawing::Point(28, 292);
			this->livingAreaLabel->Name = L"livingAreaLabel";
			this->livingAreaLabel->Size = System::Drawing::Size(259, 30);
			this->livingAreaLabel->TabIndex = 27;
			this->livingAreaLabel->Text = L"Общая Жилая Площадь:";
			// 
			// appartementsTextBox
			// 
			this->appartementsTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->appartementsTextBox->Location = System::Drawing::Point(340, 244);
			this->appartementsTextBox->Name = L"appartementsTextBox";
			this->appartementsTextBox->Size = System::Drawing::Size(216, 36);
			this->appartementsTextBox->TabIndex = 26;
			this->appartementsTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editForm::digitsOnly_KeyPress);
			this->appartementsTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::appartementsTextBox_Validating);
			// 
			// appartementsLabel
			// 
			this->appartementsLabel->AutoSize = true;
			this->appartementsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->appartementsLabel->Location = System::Drawing::Point(28, 244);
			this->appartementsLabel->Name = L"appartementsLabel";
			this->appartementsLabel->Size = System::Drawing::Size(227, 30);
			this->appartementsLabel->TabIndex = 25;
			this->appartementsLabel->Text = L"Количество Квартир:";
			// 
			// floorsTextBox
			// 
			this->floorsTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->floorsTextBox->Location = System::Drawing::Point(340, 196);
			this->floorsTextBox->Name = L"floorsTextBox";
			this->floorsTextBox->Size = System::Drawing::Size(216, 36);
			this->floorsTextBox->TabIndex = 24;
			this->floorsTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editForm::digitsOnly_KeyPress);
			this->floorsTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::floorsTextBox_Validating);
			// 
			// floorsLabel
			// 
			this->floorsLabel->AutoSize = true;
			this->floorsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->floorsLabel->Location = System::Drawing::Point(28, 196);
			this->floorsLabel->Name = L"floorsLabel";
			this->floorsLabel->Size = System::Drawing::Size(218, 30);
			this->floorsLabel->TabIndex = 23;
			this->floorsLabel->Text = L"Количество Этажей:";
			// 
			// commissionYearTextBox
			// 
			this->commissionYearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->commissionYearTextBox->Location = System::Drawing::Point(340, 148);
			this->commissionYearTextBox->Name = L"commissionYearTextBox";
			this->commissionYearTextBox->Size = System::Drawing::Size(216, 36);
			this->commissionYearTextBox->TabIndex = 22;
			this->commissionYearTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editForm::digitsOnly_KeyPress);
			this->commissionYearTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::commissionYearTextBox_Validating);
			// 
			// commissionYearLabel
			// 
			this->commissionYearLabel->AutoSize = true;
			this->commissionYearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->commissionYearLabel->Location = System::Drawing::Point(28, 148);
			this->commissionYearLabel->Name = L"commissionYearLabel";
			this->commissionYearLabel->Size = System::Drawing::Size(291, 30);
			this->commissionYearLabel->TabIndex = 21;
			this->commissionYearLabel->Text = L"Год Сдачи в Эксплуатацию:";
			// 
			// houseNumberTextBox
			// 
			this->houseNumberTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->houseNumberTextBox->Location = System::Drawing::Point(340, 100);
			this->houseNumberTextBox->Name = L"houseNumberTextBox";
			this->houseNumberTextBox->Size = System::Drawing::Size(216, 36);
			this->houseNumberTextBox->TabIndex = 20;
			this->houseNumberTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &editForm::digitsOnly_KeyPress);
			this->houseNumberTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::houseNumberTextBox_Validating);
			// 
			// houseNumberLabel
			// 
			this->houseNumberLabel->AutoSize = true;
			this->houseNumberLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->houseNumberLabel->Location = System::Drawing::Point(28, 100);
			this->houseNumberLabel->Name = L"houseNumberLabel";
			this->houseNumberLabel->Size = System::Drawing::Size(147, 30);
			this->houseNumberLabel->TabIndex = 19;
			this->houseNumberLabel->Text = L"Номер Дома:";
			// 
			// changeButton
			// 
			this->changeButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->changeButton->Location = System::Drawing::Point(316, 436);
			this->changeButton->Name = L"changeButton";
			this->changeButton->Size = System::Drawing::Size(236, 72);
			this->changeButton->TabIndex = 18;
			this->changeButton->Text = L"Изменить";
			this->changeButton->UseVisualStyleBackColor = true;
			this->changeButton->Click += gcnew System::EventHandler(this, &editForm::changeButton_Click);
			// 
			// streetNameTextBox
			// 
			this->streetNameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->streetNameTextBox->Location = System::Drawing::Point(340, 52);
			this->streetNameTextBox->Name = L"streetNameTextBox";
			this->streetNameTextBox->Size = System::Drawing::Size(216, 36);
			this->streetNameTextBox->TabIndex = 17;
			this->streetNameTextBox->Validating += gcnew System::ComponentModel::CancelEventHandler(this, &editForm::streetNameTextBox_Validating);
			// 
			// streetNameLabel
			// 
			this->streetNameLabel->AutoSize = true;
			this->streetNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->streetNameLabel->Location = System::Drawing::Point(28, 52);
			this->streetNameLabel->Name = L"streetNameLabel";
			this->streetNameLabel->Size = System::Drawing::Size(188, 30);
			this->streetNameLabel->TabIndex = 16;
			this->streetNameLabel->Text = L"Название Улицы:";
			// 
			// errorProvider
			// 
			this->errorProvider->BlinkStyle = System::Windows::Forms::ErrorBlinkStyle::NeverBlink;
			this->errorProvider->ContainerControl = this;
			// 
			// editForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->totalAreaTextBox);
			this->Controls->Add(this->totalAreaLabel);
			this->Controls->Add(this->livingAreaTextBox);
			this->Controls->Add(this->livingAreaLabel);
			this->Controls->Add(this->appartementsTextBox);
			this->Controls->Add(this->appartementsLabel);
			this->Controls->Add(this->floorsTextBox);
			this->Controls->Add(this->floorsLabel);
			this->Controls->Add(this->commissionYearTextBox);
			this->Controls->Add(this->commissionYearLabel);
			this->Controls->Add(this->houseNumberTextBox);
			this->Controls->Add(this->houseNumberLabel);
			this->Controls->Add(this->changeButton);
			this->Controls->Add(this->streetNameTextBox);
			this->Controls->Add(this->streetNameLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"editForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Корректировка Полей Строки";
			this->Load += gcnew System::EventHandler(this, &editForm::editForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void changeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (hasValidationErrors()) {
			MessageBox::Show("Некорректные данные. Пожалуйста, проверьте введенные значения.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		try {
			housesList[listId]->setAddress(streetNameTextBox->Text);
			housesList[listId]->setHouseNumber(Convert::ToInt32(houseNumberTextBox->Text));
			housesList[listId]->setCommissionYear(Convert::ToInt32(commissionYearTextBox->Text));
			housesList[listId]->setFloorsNumber(Convert::ToInt32(floorsTextBox->Text));
			housesList[listId]->setAppartmentsNumber(Convert::ToInt32(appartementsTextBox->Text));
			housesList[listId]->setLivingArea(Convert::ToDouble(livingAreaTextBox->Text));
			housesList[listId]->setTotalArea(Convert::ToDouble(totalAreaTextBox->Text));
			this->Close();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Ошибка при сохранении данных: " + ex->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void editForm_Load(System::Object^ sender, System::EventArgs^ e) {
		streetNameTextBox->Text = housesList[listId]->getAddress();
		houseNumberTextBox->Text = Convert::ToString(housesList[listId]->getHouseNumber());
		commissionYearTextBox->Text = Convert::ToString(housesList[listId]->getCommissionYear());
		floorsTextBox->Text = Convert::ToString(housesList[listId]->getFloorsNumber());
		appartementsTextBox->Text = Convert::ToString(housesList[listId]->getAppartmentsNumber());
		livingAreaTextBox->Text = Convert::ToString(housesList[listId]->getLivingArea());
		totalAreaTextBox->Text = Convert::ToString(housesList[listId]->getTotalArea());
	}

	private: System::Void streetNameTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(streetNameTextBox, "");
		if (String::IsNullOrWhiteSpace(streetNameTextBox->Text)) {
			errorProvider->SetError(streetNameTextBox, "Название улицы не может быть пустым.");
		}
		else if (streetNameTextBox->Text->Length > 100) {
			errorProvider->SetError(streetNameTextBox, "Название улицы не может быть длиннее 100 символов.");
		}
	}


	private: System::Void houseNumberTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(houseNumberTextBox, "");
		if (String::IsNullOrWhiteSpace(houseNumberTextBox->Text)) {
			errorProvider->SetError(houseNumberTextBox, "Номер дома не может быть пустым.");
		}
		else if (Convert::ToInt32(houseNumberTextBox->Text) < 0 || Convert::ToInt32(houseNumberTextBox->Text) > 200) {
			errorProvider->SetError(houseNumberTextBox, "Номер дома не может быть отрицательным или больше 200.");
		}
	}


	private: System::Void commissionYearTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(commissionYearTextBox, "");
		if (String::IsNullOrWhiteSpace(commissionYearTextBox->Text)) {
			errorProvider->SetError(commissionYearTextBox, "Год сдачи не может быть пустым.");
		}
		else if (Convert::ToInt32(commissionYearTextBox->Text) < 1700 || Convert::ToInt32(commissionYearTextBox->Text) > DateTime::Now.Year) {
			errorProvider->SetError(commissionYearTextBox, "Год сдачи должен быть между 1700 и текущим годом.");
		}
	}


	private: System::Void floorsTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(floorsTextBox, "");
		if (String::IsNullOrWhiteSpace(floorsTextBox->Text)) {
			errorProvider->SetError(floorsTextBox, "Количество этажей не может быть пустым.");
		}
		else if (Convert::ToInt32(floorsTextBox->Text) < 1 || Convert::ToInt32(floorsTextBox->Text) > 200) {
			errorProvider->SetError(floorsTextBox, "Количество этажей должно быть между 1 и 200.");
		}
	}


	private: System::Void appartementsTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(appartementsTextBox, "");
		if (String::IsNullOrWhiteSpace(appartementsTextBox->Text)) {
			errorProvider->SetError(appartementsTextBox, "Количество квартир не может быть пустым.");
		}
		else if (Convert::ToInt32(appartementsTextBox->Text) < 0 || Convert::ToInt32(appartementsTextBox->Text) > 5000) {
			errorProvider->SetError(appartementsTextBox, "Количество квартир не может быть отрицательным или больше 5000.");
		}
	}


	private: System::Void livingAreaTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(livingAreaTextBox, "");
		if (String::IsNullOrWhiteSpace(livingAreaTextBox->Text)) {
			errorProvider->SetError(livingAreaTextBox, "Общая жилая площадь не может быть пустой.");
		}
		else if (Convert::ToDouble(livingAreaTextBox->Text) < 0 || Convert::ToDouble(livingAreaTextBox->Text) > 100000) {
			errorProvider->SetError(livingAreaTextBox, "Общая жилая площадь не может быть отрицательным или больше 100000.");
		}
	}


	private: System::Void totalAreaTextBox_Validating(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
		errorProvider->SetError(totalAreaTextBox, "");
		if (String::IsNullOrWhiteSpace(totalAreaTextBox->Text)) {
			errorProvider->SetError(totalAreaTextBox, "Общая площадь дома не может быть пустой.");
		}
		else if (Convert::ToDouble(totalAreaTextBox->Text) < 0 || Convert::ToDouble(totalAreaTextBox->Text) > 100000) {
			errorProvider->SetError(totalAreaTextBox, "Общая площадь дома не может быть отрицательным или больше 100000.");
		}
		else if (Convert::ToDouble(totalAreaTextBox->Text) < Convert::ToDouble(livingAreaTextBox->Text)) {
			errorProvider->SetError(totalAreaTextBox, "Общая площадь дома не может быть меньше общей жилой площади.");
		}
	}


	private: bool hasValidationErrors() {
		// Проверяем все поля на наличие ошибок в ErrorProvider
		array<MaskedTextBox^>^ fieldsToValidate = {
			streetNameTextBox, houseNumberTextBox, commissionYearTextBox,
			floorsTextBox, appartementsTextBox, livingAreaTextBox, totalAreaTextBox
		};

		for each (MaskedTextBox ^ textBox in fieldsToValidate) {
			// Если у ErrorProvider есть текст ошибки для этого поля, то есть и сама ошибка
			if (!String::IsNullOrEmpty(errorProvider->GetError(textBox))) {
				return true;
			}
		}
		return false;
	}


	private: System::Void digitsOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверяем: если символ не является цифрой и не является клавишей Backspace
		if (!System::Char::IsDigit(e->KeyChar) && e->KeyChar != (char)Keys::Back) {
			// Пропускаем, если не цифра и не Backspace
			e->Handled = true;
		}
	}

	private: System::Void decimalsOnly_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		// Проверяем: если символ не является цифрой, запятой и не является клавишей Backspace
		System::Windows::Forms::MaskedTextBox^ currentTextBox = dynamic_cast<MaskedTextBox^>(sender);
		if (currentTextBox == nullptr) return;

		char decimalSeparator = System::Globalization::CultureInfo::CurrentCulture->NumberFormat->NumberDecimalSeparator[0];

		// Если это цифра или Backspace — разрешаем ввод
		if (System::Char::IsDigit(e->KeyChar) || e->KeyChar == (char)Keys::Back) {
			return;
		}

		if (e->KeyChar == decimalSeparator) {
			// Проверяем, нет ли уже разделителя в тексте. Если есть - запрещаем второй
			if (currentTextBox->Text->Contains(decimalSeparator.ToString())) {
				e->Handled = true;
			}
		}
		else {
			// Любой другой символ (буквы, пробелы) - блокируем
			e->Handled = true;
		}
	}
};
}
