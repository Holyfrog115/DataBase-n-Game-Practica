#pragma once
#include "loginForm.h"
#include "enteringLines.h"
#include "deletingLines.h"
#include "houseIdEditForm.h"
#include "searchForm.h"
#include "createDbForm.h"
#include "House.h"

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dataBase
	/// </summary>
	public ref class dataBase : public System::Windows::Forms::Form
	{
	public:
		dataBase(System::Windows::Forms::Form^ mainMenuForm)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->mainMenuForm = mainMenuForm;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dataBase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ topBarMenuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^ createDbButton;
	private: System::Windows::Forms::ToolStripMenuItem^ openDbButton;
	private: System::Windows::Forms::ToolStripMenuItem^ loginButton;
	private: System::Windows::Forms::ToolStripMenuItem^ dataEditButton;
	private: System::Windows::Forms::ToolStripMenuItem^ enterHouseButton;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteHouseButton;
	private: System::Windows::Forms::ToolStripMenuItem^ changeHouseDataButton;
	private: System::Windows::Forms::ToolStripMenuItem^ searchButton;
	private: System::Windows::Forms::ToolStripMenuItem^ exitButton;

	private: System::Windows::Forms::Form^ mainMenuForm;
	private: bool isExiting = false;
	private: bool isAdminMode = false;
	private: bool isDbOpen = false;
	private: bool isFilterActive = false;
	private: String^ currentDbFilePath = "";
	private: String^ currentDbName = "";
	private: System::Collections::Generic::List<House^>^ housesList = gcnew System::Collections::Generic::List<House^>();
	private: System::Collections::Generic::List<House^>^ filteredHousesList = gcnew System::Collections::Generic::List<House^>();
	private: int lastId = -1;
	private: String^ addressSearch;
		     array<int>^ houseNumberRange = gcnew array<int>(2);
		     array<int>^ commissionYearRange = gcnew array<int>(2);
		     array<int>^ floorsNumberRange = gcnew array<int>(2);
		     array<int>^ appartmentsNumberRange = gcnew array<int>(2);
		     array<int>^ livingAreaRange = gcnew array<int>(2);
		     array<int>^ totalAreaRange = gcnew array<int>(2);


	protected:











	private: System::Windows::Forms::Label^ headerLabel;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ currentDbStatusLabel;

	private: System::Windows::Forms::ToolStripStatusLabel^ dbModeStatusLabel;
	private: System::Windows::Forms::DataGridView^ dbGridView;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ commissionYear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ floors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ appartments;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ livingArea;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ totalArea;





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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(dataBase::typeid));
			this->topBarMenuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->createDbButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openDbButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loginButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataEditButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enterHouseButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteHouseButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeHouseDataButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitButton = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->headerLabel = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->currentDbStatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->dbModeStatusLabel = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->dbGridView = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->commissionYear = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->floors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->appartments = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->livingArea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->totalArea = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->topBarMenuStrip->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dbGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// topBarMenuStrip
			// 
			this->topBarMenuStrip->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
																				static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->topBarMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->createDbButton,
					this->openDbButton, this->loginButton, this->dataEditButton, this->searchButton, this->exitButton
			});
			this->topBarMenuStrip->Location = System::Drawing::Point(0, 0);
			this->topBarMenuStrip->Name = L"topBarMenuStrip";
			this->topBarMenuStrip->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->topBarMenuStrip->Size = System::Drawing::Size(934, 24);
			this->topBarMenuStrip->TabIndex = 1;
			this->topBarMenuStrip->Text = L"menuStrip1";
			// 
			// createDbButton
			// 
			this->createDbButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
																			   static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->createDbButton->Name = L"createDbButton";
			this->createDbButton->Size = System::Drawing::Size(80, 20);
			this->createDbButton->Text = L"Создать БД";
			this->createDbButton->Click += gcnew System::EventHandler(this, &dataBase::createDbButton_Click);
			// 
			// openDbButton
			// 
			this->openDbButton->Name = L"openDbButton";
			this->openDbButton->Size = System::Drawing::Size(84, 20);
			this->openDbButton->Text = L"Открыть БД";
			this->openDbButton->Click += gcnew System::EventHandler(this, &dataBase::openDbButton_Click);
			// 
			// loginButton
			// 
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(198, 20);
			this->loginButton->Text = L"Войти в Режим Администратора";
			this->loginButton->Click += gcnew System::EventHandler(this, &dataBase::loginButton_Click);
			// 
			// dataEditButton
			// 
			this->dataEditButton->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->enterHouseButton,
					this->deleteHouseButton, this->changeHouseDataButton
			});
			this->dataEditButton->Enabled = false;
			this->dataEditButton->Name = L"dataEditButton";
			this->dataEditButton->Size = System::Drawing::Size(187, 20);
			this->dataEditButton->Text = L"Ввод и Корректировка Данных";
			// 
			// enterHouseButton
			// 
			this->enterHouseButton->Name = L"enterHouseButton";
			this->enterHouseButton->Size = System::Drawing::Size(296, 22);
			this->enterHouseButton->Text = L"Ввод Строк";
			this->enterHouseButton->Click += gcnew System::EventHandler(this, &dataBase::enterHouseButton_Click);
			// 
			// deleteHouseButton
			// 
			this->deleteHouseButton->Name = L"deleteHouseButton";
			this->deleteHouseButton->Size = System::Drawing::Size(296, 22);
			this->deleteHouseButton->Text = L"Удаление Строк";
			this->deleteHouseButton->Click += gcnew System::EventHandler(this, &dataBase::deleteHouseButton_Click);
			// 
			// changeHouseDataButton
			// 
			this->changeHouseDataButton->Name = L"changeHouseDataButton";
			this->changeHouseDataButton->Size = System::Drawing::Size(296, 22);
			this->changeHouseDataButton->Text = L"Корректировка Полей Заданной Строки";
			this->changeHouseDataButton->Click += gcnew System::EventHandler(this, &dataBase::changeHouseDataButton_Click);
			// 
			// searchButton
			// 
			this->searchButton->Enabled = false;
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(198, 20);
			this->searchButton->Text = L"Поиск Информации по Запросу";
			this->searchButton->Click += gcnew System::EventHandler(this, &dataBase::searchButton_Click);
			// 
			// exitButton
			// 
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(155, 20);
			this->exitButton->Text = L"Выход из программы БД";
			this->exitButton->Click += gcnew System::EventHandler(this, &dataBase::exitButton_Click);
			// 
			// headerLabel
			// 
			this->headerLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->headerLabel->AutoSize = true;
			this->headerLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->headerLabel->Location = System::Drawing::Point(275, 48);
			this->headerLabel->Name = L"headerLabel";
			this->headerLabel->Size = System::Drawing::Size(410, 30);
			this->headerLabel->TabIndex = 2;
			this->headerLabel->Text = L"База Данных Управляющей Компании";
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(227)), static_cast<System::Int32>(static_cast<System::Byte>(227)),
																			 static_cast<System::Int32>(static_cast<System::Byte>(227)));
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->currentDbStatusLabel,
					this->dbModeStatusLabel
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 509);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->statusStrip1->Size = System::Drawing::Size(934, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// currentDbStatusLabel
			// 
			this->currentDbStatusLabel->Name = L"currentDbStatusLabel";
			this->currentDbStatusLabel->Size = System::Drawing::Size(694, 17);
			this->currentDbStatusLabel->Spring = true;
			this->currentDbStatusLabel->Text = L"Текущая База Данных:";
			this->currentDbStatusLabel->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// dbModeStatusLabel
			// 
			this->dbModeStatusLabel->Name = L"dbModeStatusLabel";
			this->dbModeStatusLabel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dbModeStatusLabel->Size = System::Drawing::Size(225, 17);
			this->dbModeStatusLabel->Text = L"Текущий Режим Работы: Пользователь";
			this->dbModeStatusLabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dbGridView
			// 
			this->dbGridView->AllowUserToResizeColumns = false;
			this->dbGridView->AllowUserToResizeRows = false;
			this->dbGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																						   | System::Windows::Forms::AnchorStyles::Left)
																						  | System::Windows::Forms::AnchorStyles::Right));
			this->dbGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dbGridView->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dbGridView->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dbGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dbGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->id, this->address,
					this->commissionYear, this->floors, this->appartments, this->livingArea, this->totalArea
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
																		static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dbGridView->DefaultCellStyle = dataGridViewCellStyle2;
			this->dbGridView->Location = System::Drawing::Point(24, 96);
			this->dbGridView->Name = L"dbGridView";
			this->dbGridView->ReadOnly = true;
			this->dbGridView->RowHeadersVisible = false;
			this->dbGridView->RowTemplate->Height = 30;
			this->dbGridView->Size = System::Drawing::Size(889, 411);
			this->dbGridView->TabIndex = 4;
			// 
			// id
			// 
			this->id->FillWeight = 40;
			this->id->HeaderText = L"ID";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			// 
			// address
			// 
			this->address->FillWeight = 150;
			this->address->HeaderText = L"Адрес Дома";
			this->address->Name = L"address";
			this->address->ReadOnly = true;
			// 
			// commissionYear
			// 
			this->commissionYear->HeaderText = L"Год Сдачи";
			this->commissionYear->Name = L"commissionYear";
			this->commissionYear->ReadOnly = true;
			// 
			// floors
			// 
			this->floors->HeaderText = L"Количество Этажей";
			this->floors->Name = L"floors";
			this->floors->ReadOnly = true;
			// 
			// appartments
			// 
			this->appartments->HeaderText = L"Количество квартир";
			this->appartments->Name = L"appartments";
			this->appartments->ReadOnly = true;
			// 
			// livingArea
			// 
			this->livingArea->HeaderText = L"Общая Жилая Площадь";
			this->livingArea->Name = L"livingArea";
			this->livingArea->ReadOnly = true;
			// 
			// totalArea
			// 
			this->totalArea->HeaderText = L"Общая Площадь Дома";
			this->totalArea->Name = L"totalArea";
			this->totalArea->ReadOnly = true;
			// 
			// dataBase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 531);
			this->Controls->Add(this->dbGridView);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->headerLabel);
			this->Controls->Add(this->topBarMenuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->topBarMenuStrip;
			this->MinimumSize = System::Drawing::Size(950, 570);
			this->Name = L"dataBase";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"База Данных";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &dataBase::dataBase_FormClosed);
			this->topBarMenuStrip->ResumeLayout(false);
			this->topBarMenuStrip->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dbGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataBase_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (isDbOpen) {
			savingDb();
		}
		if (!isExiting) {
			Application::Exit();
		}
	}


	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginForm^ loginFormInstance = gcnew loginForm();

		if (!this->isAdminMode) {
			if (loginFormInstance->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->isAdminMode = !isAdminMode;
				updateCurrentMode();
				updateLoginButton();
				updateButtonsAccess();
			}
		}
		else {
			this->isAdminMode = !isAdminMode;
			updateCurrentMode();
			updateLoginButton();
			updateButtonsAccess();
		}
	}


	private: System::Void enterHouseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		enteringLines^ enteringLinesFormInstance = gcnew enteringLines(this->housesList, dbGridView, this->lastId);

		enteringLinesFormInstance->ShowDialog();
	}


	private: System::Void deleteHouseButton_Click(System::Object^ sender, System::EventArgs^ e) {
		deletingLines^ deletingLinesInstance = gcnew deletingLines(this->housesList, dbGridView);

		deletingLinesInstance->ShowDialog();
		updateLastId();
	}


	private: System::Void changeHouseDataButton_Click(System::Object^ sender, System::EventArgs^ e) {
		houseIdEditForm^ editFormInstance = gcnew houseIdEditForm(this->housesList);

		editFormInstance->ShowDialog();
		updateGridView();
	}


	private: System::Void searchButton_Click(System::Object^ sender, System::EventArgs^ e) {
		searchForm^ searchFormInstance = gcnew searchForm(this->filteredHousesList, this->isFilterActive, this->addressSearch,
														  this->houseNumberRange, this->commissionYearRange, this->floorsNumberRange,
														  this->appartmentsNumberRange, this->livingAreaRange, this->totalAreaRange);

		searchFormInstance->ShowDialog();
	}


	private: System::Void exitButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->isExiting = true;

		mainMenuForm->Show();

		this->Close();
	}


	private: System::Void updateDbNameLabel() {
		this->currentDbStatusLabel->Text = "Текущая База Данных: " + this->currentDbName;
	}


	private: System::Void updateCurrentMode() {
		if (this->isAdminMode) {
			dbModeStatusLabel->Text = "Текущий Режим Работы: Администратор";
		}
		else {
			dbModeStatusLabel->Text = "Текущий Режим Работы: Пользователь";
		}
	}


	private: System::Void updateLoginButton() {
		if (this->isAdminMode) {
			loginButton->Text = "Выйти из Режима Администратора";
		}
		else {
			loginButton->Text = "Войти в Режим Администратора";
		}
	}


	private: System::Void updateButtonsAccess() {
		if (this->isDbOpen) {
			searchButton->Enabled = true;
		}
		if (this->isAdminMode && this->isDbOpen) {
			dataEditButton->Enabled = true;
		}
		else {
			dataEditButton->Enabled = false;
		}
	}


	private: System::Void updateDb() {
		StreamReader^ reader = gcnew StreamReader(this->currentDbFilePath, System::Text::Encoding::UTF8);
		String^ line;

		housesList->Clear();

		while ((line = reader->ReadLine()) != nullptr) {
			House^ house = gcnew House();
			array<String^>^ fields = line->Split(';');
			if (fields->Length == 8) {
				house->setId(Convert::ToInt32(fields[0]));
				house->setAddress(fields[1]);
				house->setHouseNumber(Convert::ToInt32(fields[2]));
				house->setCommissionYear(Convert::ToInt32(fields[3]));
				house->setFloorsNumber(Convert::ToInt32(fields[4]));
				house->setAppartmentsNumber(Convert::ToInt32(fields[5]));
				house->setLivingArea(Convert::ToDouble(fields[6]));
				house->setTotalArea(Convert::ToDouble(fields[7]));
				housesList->Add(house);
				
				this->lastId = house->getId();
			}
		}

		reader->Close();

		updateLastId();
		updateGridView();
	}


	private: System::Void updateGridView() {
		dbGridView->Rows->Clear();
		if (this->isFilterActive) {
			for each (House ^ house in filteredHousesList) {
				dbGridView->Rows->Add(house->getId(), house->getAddress() + ", " + house->getHouseNumber(), house->getCommissionYear(), house->getFloorsNumber(),
									  house->getAppartmentsNumber(), house->getLivingArea(), house->getTotalArea());
			}
		}
		else {
			for each (House ^ house in housesList) {
				dbGridView->Rows->Add(house->getId(), house->getAddress() + ", " + house->getHouseNumber(), house->getCommissionYear(), house->getFloorsNumber(),
									  house->getAppartmentsNumber(), house->getLivingArea(), house->getTotalArea());
			}
		}
	}


	private: System::Void updateLastId() {
		if (housesList->Count > 0) {
			this->lastId = housesList[housesList->Count - 1]->getId();
		}
		else {
			this->lastId = -1;
		}
	}


	private: System::Void createDbButton_Click(System::Object^ sender, System::EventArgs^ e) {
		createDbForm^ createDbFormInstance = gcnew createDbForm();
		if (createDbFormInstance->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->currentDbName = createDbFormInstance->currentDbName;
			this->currentDbFilePath = createDbFormInstance->currentDbfilePath;
			this->isDbOpen = true;
			this->lastId = -1;
			updateDbNameLabel();
			updateButtonsAccess();
			updateDb();
		}
	}


	private: System::Void openDbButton_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();

		openFileDialog->InitialDirectory = System::IO::Path::GetFullPath(System::Windows::Forms::Application::StartupPath) + "dataBases/";
		openFileDialog->Filter = "Текстовые файлы (*.txt)|*.txt";
		openFileDialog->FilterIndex = 1;

		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->currentDbFilePath = openFileDialog->FileName;
			this->currentDbName = openFileDialog->SafeFileName;
			this->isDbOpen = true;
			updateDbNameLabel();
			updateButtonsAccess();
			updateDb();
		}
	}


	private: System::Void savingDb() {
		StreamWriter^ writer = gcnew StreamWriter(this->currentDbFilePath, false, System::Text::Encoding::UTF8);

		// Запись данных в формате: улица;номер;год;этажи;квартиры;жилая площадь;общая площадь
		for each (House ^ house in housesList) {
			writer->WriteLine(house->getId() + ";" + house->getAddress() + ";" + house->getHouseNumber() + ";"
							  + house->getCommissionYear() + ";" + house->getFloorsNumber() + ";" + house->getAppartmentsNumber()
							  + ";" + house->getLivingArea() + ";" + house->getTotalArea());
		}

		writer->Close();
	}
};
}
