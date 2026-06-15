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
	/// Summary for searchForm
	/// </summary>
	public ref class searchForm : public System::Windows::Forms::Form
	{
	public:
		searchForm(System::Collections::Generic::List<House^>^ filteredHousesList, bool isFilterActive)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->filteredHousesList = filteredHousesList;
			this->isFilterActive = isFilterActive;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~searchForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ resetButton;
	protected:

	protected:

	private: System::Windows::Forms::Label^ totalAreaLabel;

	private: System::Windows::Forms::Label^ livingAreaLabel;

	private: System::Windows::Forms::Label^ appartementsLabel;

	private: System::Windows::Forms::Label^ floorsLabel;

	private: System::Windows::Forms::Label^ commissionYearLabel;
	private: System::Windows::Forms::MaskedTextBox^ fromHouseNumberTextBox;


	private: System::Windows::Forms::Label^ houseNumberLabel;
	private: System::Windows::Forms::Button^ applyButton;

	private: System::Windows::Forms::MaskedTextBox^ streetNameTextBox;
	private: System::Windows::Forms::Label^ streetNameLabel;
	private: System::Windows::Forms::Label^ fromHouseNumberLabel;
	private: System::Windows::Forms::Label^ toHouseNumberLabel;
	private: System::Windows::Forms::MaskedTextBox^ toHouseNumberTextBox;
	private: System::Windows::Forms::Label^ toCommissionYearLabel;
	private: System::Windows::Forms::MaskedTextBox^ toCommissionYearTextBox;





	private: System::Windows::Forms::Label^ fromCommissionYearLabel;
	private: System::Windows::Forms::MaskedTextBox^ fromCommissionYearTextBox;
	private: System::Windows::Forms::Label^ toFloorsLabel;
	private: System::Windows::Forms::MaskedTextBox^ toFloorsTextBox;





	private: System::Windows::Forms::Label^ fromFloorsLabel;
	private: System::Windows::Forms::MaskedTextBox^ fromFloorsTextBox;
	private: System::Windows::Forms::Label^ toAppartmentsLabel;
	private: System::Windows::Forms::MaskedTextBox^ toAppartmentsTextBox;




	private: System::Windows::Forms::Label^ fromAppartmentsLabel;
	private: System::Windows::Forms::MaskedTextBox^ fromAppartmentsTextBox;
	private: System::Windows::Forms::Label^ toLivingAreaLabel;
	private: System::Windows::Forms::MaskedTextBox^ toLivingAreaTextBox;




	private: System::Windows::Forms::Label^ fromLivingAreaLabel;
	private: System::Windows::Forms::MaskedTextBox^ fromLivingAreaTextBox;
	private: System::Windows::Forms::Label^ toTotalAreaLabel;
	private: System::Windows::Forms::MaskedTextBox^ toTotalAreaTextBox;




	private: System::Windows::Forms::Label^ fromTotalAreaLabel;
	private: System::Windows::Forms::MaskedTextBox^ fromTotalAreaTextBox;

	private: System::Collections::Generic::List<House^>^ filteredHousesList;
	private: bool isFilterActive;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(searchForm::typeid));
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->totalAreaLabel = (gcnew System::Windows::Forms::Label());
			this->livingAreaLabel = (gcnew System::Windows::Forms::Label());
			this->appartementsLabel = (gcnew System::Windows::Forms::Label());
			this->floorsLabel = (gcnew System::Windows::Forms::Label());
			this->commissionYearLabel = (gcnew System::Windows::Forms::Label());
			this->fromHouseNumberTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->houseNumberLabel = (gcnew System::Windows::Forms::Label());
			this->applyButton = (gcnew System::Windows::Forms::Button());
			this->streetNameTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->streetNameLabel = (gcnew System::Windows::Forms::Label());
			this->fromHouseNumberLabel = (gcnew System::Windows::Forms::Label());
			this->toHouseNumberLabel = (gcnew System::Windows::Forms::Label());
			this->toHouseNumberTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toCommissionYearLabel = (gcnew System::Windows::Forms::Label());
			this->toCommissionYearTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fromCommissionYearLabel = (gcnew System::Windows::Forms::Label());
			this->fromCommissionYearTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toFloorsLabel = (gcnew System::Windows::Forms::Label());
			this->toFloorsTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fromFloorsLabel = (gcnew System::Windows::Forms::Label());
			this->fromFloorsTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toAppartmentsLabel = (gcnew System::Windows::Forms::Label());
			this->toAppartmentsTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fromAppartmentsLabel = (gcnew System::Windows::Forms::Label());
			this->fromAppartmentsTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toLivingAreaLabel = (gcnew System::Windows::Forms::Label());
			this->toLivingAreaTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fromLivingAreaLabel = (gcnew System::Windows::Forms::Label());
			this->fromLivingAreaTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toTotalAreaLabel = (gcnew System::Windows::Forms::Label());
			this->toTotalAreaTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fromTotalAreaLabel = (gcnew System::Windows::Forms::Label());
			this->fromTotalAreaTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// resetButton
			// 
			this->resetButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->resetButton->Location = System::Drawing::Point(96, 432);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(244, 72);
			this->resetButton->TabIndex = 47;
			this->resetButton->Text = L"Отключить все фильтры";
			this->resetButton->UseVisualStyleBackColor = true;
			this->resetButton->Click += gcnew System::EventHandler(this, &searchForm::resetButton_Click);
			// 
			// totalAreaLabel
			// 
			this->totalAreaLabel->AutoSize = true;
			this->totalAreaLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->totalAreaLabel->Location = System::Drawing::Point(30, 340);
			this->totalAreaLabel->Name = L"totalAreaLabel";
			this->totalAreaLabel->Size = System::Drawing::Size(247, 30);
			this->totalAreaLabel->TabIndex = 45;
			this->totalAreaLabel->Text = L"Общая Площадь Дома:";
			// 
			// livingAreaLabel
			// 
			this->livingAreaLabel->AutoSize = true;
			this->livingAreaLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->livingAreaLabel->Location = System::Drawing::Point(30, 292);
			this->livingAreaLabel->Name = L"livingAreaLabel";
			this->livingAreaLabel->Size = System::Drawing::Size(259, 30);
			this->livingAreaLabel->TabIndex = 43;
			this->livingAreaLabel->Text = L"Общая Жилая Площадь:";
			// 
			// appartementsLabel
			// 
			this->appartementsLabel->AutoSize = true;
			this->appartementsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->appartementsLabel->Location = System::Drawing::Point(30, 244);
			this->appartementsLabel->Name = L"appartementsLabel";
			this->appartementsLabel->Size = System::Drawing::Size(227, 30);
			this->appartementsLabel->TabIndex = 41;
			this->appartementsLabel->Text = L"Количество Квартир:";
			// 
			// floorsLabel
			// 
			this->floorsLabel->AutoSize = true;
			this->floorsLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->floorsLabel->Location = System::Drawing::Point(30, 196);
			this->floorsLabel->Name = L"floorsLabel";
			this->floorsLabel->Size = System::Drawing::Size(218, 30);
			this->floorsLabel->TabIndex = 39;
			this->floorsLabel->Text = L"Количество Этажей:";
			// 
			// commissionYearLabel
			// 
			this->commissionYearLabel->AutoSize = true;
			this->commissionYearLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->commissionYearLabel->Location = System::Drawing::Point(30, 148);
			this->commissionYearLabel->Name = L"commissionYearLabel";
			this->commissionYearLabel->Size = System::Drawing::Size(291, 30);
			this->commissionYearLabel->TabIndex = 37;
			this->commissionYearLabel->Text = L"Год Сдачи в Эксплуатацию:";
			// 
			// fromHouseNumberTextBox
			// 
			this->fromHouseNumberTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->fromHouseNumberTextBox->Location = System::Drawing::Point(384, 96);
			this->fromHouseNumberTextBox->Name = L"fromHouseNumberTextBox";
			this->fromHouseNumberTextBox->Size = System::Drawing::Size(120, 36);
			this->fromHouseNumberTextBox->TabIndex = 36;
			// 
			// houseNumberLabel
			// 
			this->houseNumberLabel->AutoSize = true;
			this->houseNumberLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->houseNumberLabel->Location = System::Drawing::Point(30, 100);
			this->houseNumberLabel->Name = L"houseNumberLabel";
			this->houseNumberLabel->Size = System::Drawing::Size(147, 30);
			this->houseNumberLabel->TabIndex = 35;
			this->houseNumberLabel->Text = L"Номер Дома:";
			// 
			// applyButton
			// 
			this->applyButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->applyButton->Location = System::Drawing::Point(408, 432);
			this->applyButton->Name = L"applyButton";
			this->applyButton->Size = System::Drawing::Size(236, 72);
			this->applyButton->TabIndex = 34;
			this->applyButton->Text = L"Применить фильтры";
			this->applyButton->UseVisualStyleBackColor = true;
			// 
			// streetNameTextBox
			// 
			this->streetNameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->streetNameTextBox->Location = System::Drawing::Point(342, 52);
			this->streetNameTextBox->Name = L"streetNameTextBox";
			this->streetNameTextBox->Size = System::Drawing::Size(354, 36);
			this->streetNameTextBox->TabIndex = 33;
			// 
			// streetNameLabel
			// 
			this->streetNameLabel->AutoSize = true;
			this->streetNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->streetNameLabel->Location = System::Drawing::Point(30, 52);
			this->streetNameLabel->Name = L"streetNameLabel";
			this->streetNameLabel->Size = System::Drawing::Size(188, 30);
			this->streetNameLabel->TabIndex = 32;
			this->streetNameLabel->Text = L"Название Улицы:";
			// 
			// fromHouseNumberLabel
			// 
			this->fromHouseNumberLabel->AutoSize = true;
			this->fromHouseNumberLabel->Location = System::Drawing::Point(336, 96);
			this->fromHouseNumberLabel->Name = L"fromHouseNumberLabel";
			this->fromHouseNumberLabel->Size = System::Drawing::Size(40, 30);
			this->fromHouseNumberLabel->TabIndex = 48;
			this->fromHouseNumberLabel->Text = L"ОТ";
			// 
			// toHouseNumberLabel
			// 
			this->toHouseNumberLabel->AutoSize = true;
			this->toHouseNumberLabel->Location = System::Drawing::Point(528, 96);
			this->toHouseNumberLabel->Name = L"toHouseNumberLabel";
			this->toHouseNumberLabel->Size = System::Drawing::Size(44, 30);
			this->toHouseNumberLabel->TabIndex = 50;
			this->toHouseNumberLabel->Text = L"ДО";
			// 
			// toHouseNumberTextBox
			// 
			this->toHouseNumberTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->toHouseNumberTextBox->Location = System::Drawing::Point(576, 96);
			this->toHouseNumberTextBox->Name = L"toHouseNumberTextBox";
			this->toHouseNumberTextBox->Size = System::Drawing::Size(120, 36);
			this->toHouseNumberTextBox->TabIndex = 49;
			// 
			// toCommissionYearLabel
			// 
			this->toCommissionYearLabel->AutoSize = true;
			this->toCommissionYearLabel->Location = System::Drawing::Point(528, 144);
			this->toCommissionYearLabel->Name = L"toCommissionYearLabel";
			this->toCommissionYearLabel->Size = System::Drawing::Size(44, 30);
			this->toCommissionYearLabel->TabIndex = 54;
			this->toCommissionYearLabel->Text = L"ДО";
			// 
			// toCommissionYearTextBox
			// 
			this->toCommissionYearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->toCommissionYearTextBox->Location = System::Drawing::Point(576, 144);
			this->toCommissionYearTextBox->Name = L"toCommissionYearTextBox";
			this->toCommissionYearTextBox->Size = System::Drawing::Size(120, 36);
			this->toCommissionYearTextBox->TabIndex = 53;
			// 
			// fromCommissionYearLabel
			// 
			this->fromCommissionYearLabel->AutoSize = true;
			this->fromCommissionYearLabel->Location = System::Drawing::Point(336, 144);
			this->fromCommissionYearLabel->Name = L"fromCommissionYearLabel";
			this->fromCommissionYearLabel->Size = System::Drawing::Size(40, 30);
			this->fromCommissionYearLabel->TabIndex = 52;
			this->fromCommissionYearLabel->Text = L"ОТ";
			// 
			// fromCommissionYearTextBox
			// 
			this->fromCommissionYearTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->fromCommissionYearTextBox->Location = System::Drawing::Point(384, 144);
			this->fromCommissionYearTextBox->Name = L"fromCommissionYearTextBox";
			this->fromCommissionYearTextBox->Size = System::Drawing::Size(120, 36);
			this->fromCommissionYearTextBox->TabIndex = 51;
			// 
			// toFloorsLabel
			// 
			this->toFloorsLabel->AutoSize = true;
			this->toFloorsLabel->Location = System::Drawing::Point(528, 192);
			this->toFloorsLabel->Name = L"toFloorsLabel";
			this->toFloorsLabel->Size = System::Drawing::Size(44, 30);
			this->toFloorsLabel->TabIndex = 58;
			this->toFloorsLabel->Text = L"ДО";
			// 
			// toFloorsTextBox
			// 
			this->toFloorsTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->toFloorsTextBox->Location = System::Drawing::Point(576, 192);
			this->toFloorsTextBox->Name = L"toFloorsTextBox";
			this->toFloorsTextBox->Size = System::Drawing::Size(120, 36);
			this->toFloorsTextBox->TabIndex = 57;
			// 
			// fromFloorsLabel
			// 
			this->fromFloorsLabel->AutoSize = true;
			this->fromFloorsLabel->Location = System::Drawing::Point(336, 192);
			this->fromFloorsLabel->Name = L"fromFloorsLabel";
			this->fromFloorsLabel->Size = System::Drawing::Size(40, 30);
			this->fromFloorsLabel->TabIndex = 56;
			this->fromFloorsLabel->Text = L"ОТ";
			// 
			// fromFloorsTextBox
			// 
			this->fromFloorsTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->fromFloorsTextBox->Location = System::Drawing::Point(384, 192);
			this->fromFloorsTextBox->Name = L"fromFloorsTextBox";
			this->fromFloorsTextBox->Size = System::Drawing::Size(120, 36);
			this->fromFloorsTextBox->TabIndex = 55;
			// 
			// toAppartmentsLabel
			// 
			this->toAppartmentsLabel->AutoSize = true;
			this->toAppartmentsLabel->Location = System::Drawing::Point(528, 240);
			this->toAppartmentsLabel->Name = L"toAppartmentsLabel";
			this->toAppartmentsLabel->Size = System::Drawing::Size(44, 30);
			this->toAppartmentsLabel->TabIndex = 62;
			this->toAppartmentsLabel->Text = L"ДО";
			// 
			// toAppartmentsTextBox
			// 
			this->toAppartmentsTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->toAppartmentsTextBox->Location = System::Drawing::Point(576, 240);
			this->toAppartmentsTextBox->Name = L"toAppartmentsTextBox";
			this->toAppartmentsTextBox->Size = System::Drawing::Size(120, 36);
			this->toAppartmentsTextBox->TabIndex = 61;
			// 
			// fromAppartmentsLabel
			// 
			this->fromAppartmentsLabel->AutoSize = true;
			this->fromAppartmentsLabel->Location = System::Drawing::Point(336, 240);
			this->fromAppartmentsLabel->Name = L"fromAppartmentsLabel";
			this->fromAppartmentsLabel->Size = System::Drawing::Size(40, 30);
			this->fromAppartmentsLabel->TabIndex = 60;
			this->fromAppartmentsLabel->Text = L"ОТ";
			// 
			// fromAppartmentsTextBox
			// 
			this->fromAppartmentsTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->fromAppartmentsTextBox->Location = System::Drawing::Point(384, 240);
			this->fromAppartmentsTextBox->Name = L"fromAppartmentsTextBox";
			this->fromAppartmentsTextBox->Size = System::Drawing::Size(120, 36);
			this->fromAppartmentsTextBox->TabIndex = 59;
			// 
			// toLivingAreaLabel
			// 
			this->toLivingAreaLabel->AutoSize = true;
			this->toLivingAreaLabel->Location = System::Drawing::Point(528, 288);
			this->toLivingAreaLabel->Name = L"toLivingAreaLabel";
			this->toLivingAreaLabel->Size = System::Drawing::Size(44, 30);
			this->toLivingAreaLabel->TabIndex = 66;
			this->toLivingAreaLabel->Text = L"ДО";
			// 
			// toLivingAreaTextBox
			// 
			this->toLivingAreaTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->toLivingAreaTextBox->Location = System::Drawing::Point(576, 288);
			this->toLivingAreaTextBox->Name = L"toLivingAreaTextBox";
			this->toLivingAreaTextBox->Size = System::Drawing::Size(120, 36);
			this->toLivingAreaTextBox->TabIndex = 65;
			// 
			// fromLivingAreaLabel
			// 
			this->fromLivingAreaLabel->AutoSize = true;
			this->fromLivingAreaLabel->Location = System::Drawing::Point(336, 288);
			this->fromLivingAreaLabel->Name = L"fromLivingAreaLabel";
			this->fromLivingAreaLabel->Size = System::Drawing::Size(40, 30);
			this->fromLivingAreaLabel->TabIndex = 64;
			this->fromLivingAreaLabel->Text = L"ОТ";
			// 
			// fromLivingAreaTextBox
			// 
			this->fromLivingAreaTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->fromLivingAreaTextBox->Location = System::Drawing::Point(384, 288);
			this->fromLivingAreaTextBox->Name = L"fromLivingAreaTextBox";
			this->fromLivingAreaTextBox->Size = System::Drawing::Size(120, 36);
			this->fromLivingAreaTextBox->TabIndex = 63;
			// 
			// toTotalAreaLabel
			// 
			this->toTotalAreaLabel->AutoSize = true;
			this->toTotalAreaLabel->Location = System::Drawing::Point(528, 336);
			this->toTotalAreaLabel->Name = L"toTotalAreaLabel";
			this->toTotalAreaLabel->Size = System::Drawing::Size(44, 30);
			this->toTotalAreaLabel->TabIndex = 70;
			this->toTotalAreaLabel->Text = L"ДО";
			// 
			// toTotalAreaTextBox
			// 
			this->toTotalAreaTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->toTotalAreaTextBox->Location = System::Drawing::Point(576, 336);
			this->toTotalAreaTextBox->Name = L"toTotalAreaTextBox";
			this->toTotalAreaTextBox->Size = System::Drawing::Size(120, 36);
			this->toTotalAreaTextBox->TabIndex = 69;
			// 
			// fromTotalAreaLabel
			// 
			this->fromTotalAreaLabel->AutoSize = true;
			this->fromTotalAreaLabel->Location = System::Drawing::Point(336, 336);
			this->fromTotalAreaLabel->Name = L"fromTotalAreaLabel";
			this->fromTotalAreaLabel->Size = System::Drawing::Size(40, 30);
			this->fromTotalAreaLabel->TabIndex = 68;
			this->fromTotalAreaLabel->Text = L"ОТ";
			// 
			// fromTotalAreaTextBox
			// 
			this->fromTotalAreaTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->fromTotalAreaTextBox->Location = System::Drawing::Point(384, 336);
			this->fromTotalAreaTextBox->Name = L"fromTotalAreaTextBox";
			this->fromTotalAreaTextBox->Size = System::Drawing::Size(120, 36);
			this->fromTotalAreaTextBox->TabIndex = 67;
			// 
			// searchForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(734, 561);
			this->Controls->Add(this->toTotalAreaLabel);
			this->Controls->Add(this->toTotalAreaTextBox);
			this->Controls->Add(this->fromTotalAreaLabel);
			this->Controls->Add(this->fromTotalAreaTextBox);
			this->Controls->Add(this->toLivingAreaLabel);
			this->Controls->Add(this->toLivingAreaTextBox);
			this->Controls->Add(this->fromLivingAreaLabel);
			this->Controls->Add(this->fromLivingAreaTextBox);
			this->Controls->Add(this->toAppartmentsLabel);
			this->Controls->Add(this->toAppartmentsTextBox);
			this->Controls->Add(this->fromAppartmentsLabel);
			this->Controls->Add(this->fromAppartmentsTextBox);
			this->Controls->Add(this->toFloorsLabel);
			this->Controls->Add(this->toFloorsTextBox);
			this->Controls->Add(this->fromFloorsLabel);
			this->Controls->Add(this->fromFloorsTextBox);
			this->Controls->Add(this->toCommissionYearLabel);
			this->Controls->Add(this->toCommissionYearTextBox);
			this->Controls->Add(this->fromCommissionYearLabel);
			this->Controls->Add(this->fromCommissionYearTextBox);
			this->Controls->Add(this->toHouseNumberLabel);
			this->Controls->Add(this->toHouseNumberTextBox);
			this->Controls->Add(this->fromHouseNumberLabel);
			this->Controls->Add(this->resetButton);
			this->Controls->Add(this->totalAreaLabel);
			this->Controls->Add(this->livingAreaLabel);
			this->Controls->Add(this->appartementsLabel);
			this->Controls->Add(this->floorsLabel);
			this->Controls->Add(this->commissionYearLabel);
			this->Controls->Add(this->fromHouseNumberTextBox);
			this->Controls->Add(this->houseNumberLabel);
			this->Controls->Add(this->applyButton);
			this->Controls->Add(this->streetNameTextBox);
			this->Controls->Add(this->streetNameLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"searchForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Настройка Фильтров Поиска";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		streetNameTextBox->Text = "";

		fromHouseNumberTextBox->Text = "";
		toHouseNumberTextBox->Text = "";

		fromCommissionYearTextBox->Text = "";
		toCommissionYearTextBox->Text = "";

		fromFloorsTextBox->Text = "";
		toFloorsTextBox->Text = "";

		fromAppartmentsTextBox->Text = "";
		toAppartmentsTextBox->Text = "";

		fromLivingAreaTextBox->Text = "";
		toLivingAreaTextBox->Text = "";

		fromTotalAreaTextBox->Text = "";
		toTotalAreaTextBox->Text = "";
	}
};
}
