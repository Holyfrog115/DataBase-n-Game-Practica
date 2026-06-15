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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cancelButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}


	private: System::Void changeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		housesList[listId]->setAddress(streetNameTextBox->Text);
		housesList[listId]->setHouseNumber(Convert::ToInt32(houseNumberTextBox->Text));
		housesList[listId]->setCommissionYear(Convert::ToInt32(commissionYearTextBox->Text));
		housesList[listId]->setFloorsNumber(Convert::ToInt32(floorsTextBox->Text));
		housesList[listId]->setAppartmentsNumber(Convert::ToInt32(appartementsTextBox->Text));
		housesList[listId]->setLivingArea(Convert::ToDouble(livingAreaTextBox->Text));
		housesList[listId]->setTotalArea(Convert::ToDouble(totalAreaTextBox->Text));

		this->Close();
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
};
}
