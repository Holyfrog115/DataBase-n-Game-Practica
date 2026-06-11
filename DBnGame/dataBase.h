#pragma once
#include "loginForm.h"

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
		dataBase(void)
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


	protected:











	private: System::Windows::Forms::Label^ headerLabel;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ currentDbStatusLabel;

	private: System::Windows::Forms::ToolStripStatusLabel^ dbModeStatusLabel;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->topBarMenuStrip->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// topBarMenuStrip
			// 
			this->topBarMenuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->createDbButton,
					this->openDbButton, this->loginButton, this->dataEditButton, this->searchButton, this->exitButton
			});
			this->topBarMenuStrip->Location = System::Drawing::Point(0, 0);
			this->topBarMenuStrip->Name = L"topBarMenuStrip";
			this->topBarMenuStrip->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->topBarMenuStrip->Size = System::Drawing::Size(909, 24);
			this->topBarMenuStrip->TabIndex = 1;
			this->topBarMenuStrip->Text = L"menuStrip1";
			// 
			// createDbButton
			// 
			this->createDbButton->BackColor = System::Drawing::SystemColors::Control;
			this->createDbButton->Name = L"createDbButton";
			this->createDbButton->Size = System::Drawing::Size(80, 20);
			this->createDbButton->Text = L"Создать БД";
			// 
			// openDbButton
			// 
			this->openDbButton->Name = L"openDbButton";
			this->openDbButton->Size = System::Drawing::Size(84, 20);
			this->openDbButton->Text = L"Открыть БД";
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
			this->dataEditButton->Name = L"dataEditButton";
			this->dataEditButton->Size = System::Drawing::Size(187, 20);
			this->dataEditButton->Text = L"Ввод и Корректировка Данных";
			// 
			// enterHouseButton
			// 
			this->enterHouseButton->Name = L"enterHouseButton";
			this->enterHouseButton->Size = System::Drawing::Size(296, 22);
			this->enterHouseButton->Text = L"Ввод Строк";
			// 
			// deleteHouseButton
			// 
			this->deleteHouseButton->Name = L"deleteHouseButton";
			this->deleteHouseButton->Size = System::Drawing::Size(296, 22);
			this->deleteHouseButton->Text = L"Удаление Строк";
			// 
			// changeHouseDataButton
			// 
			this->changeHouseDataButton->Name = L"changeHouseDataButton";
			this->changeHouseDataButton->Size = System::Drawing::Size(296, 22);
			this->changeHouseDataButton->Text = L"Корректировка Полей Заданной Строки";
			// 
			// searchButton
			// 
			this->searchButton->Name = L"searchButton";
			this->searchButton->Size = System::Drawing::Size(198, 20);
			this->searchButton->Text = L"Поиск Информации по Запросу";
			// 
			// exitButton
			// 
			this->exitButton->Name = L"exitButton";
			this->exitButton->Size = System::Drawing::Size(155, 20);
			this->exitButton->Text = L"Выход из программы БД";
			// 
			// headerLabel
			// 
			this->headerLabel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->headerLabel->AutoSize = true;
			this->headerLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->headerLabel->Location = System::Drawing::Point(262, 48);
			this->headerLabel->Name = L"headerLabel";
			this->headerLabel->Size = System::Drawing::Size(410, 30);
			this->headerLabel->TabIndex = 2;
			this->headerLabel->Text = L"База Данных Управляющей Компании";
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->currentDbStatusLabel,
					this->dbModeStatusLabel
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 539);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->statusStrip1->Size = System::Drawing::Size(909, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// currentDbStatusLabel
			// 
			this->currentDbStatusLabel->Name = L"currentDbStatusLabel";
			this->currentDbStatusLabel->Size = System::Drawing::Size(669, 17);
			this->currentDbStatusLabel->Spring = true;
			this->currentDbStatusLabel->Text = L"Текущая База Данных: Houses.txt";
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
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
																							  | System::Windows::Forms::AnchorStyles::Left)
																							 | System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 96);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(912, 432);
			this->dataGridView1->TabIndex = 4;
			// 
			// dataBase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 561);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->headerLabel);
			this->Controls->Add(this->topBarMenuStrip);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->topBarMenuStrip;
			this->MinimumSize = System::Drawing::Size(925, 600);
			this->Name = L"dataBase";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"База Данных";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &dataBase::dataBase_FormClosed);
			this->topBarMenuStrip->ResumeLayout(false);
			this->topBarMenuStrip->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataBase_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}
	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginForm^ loginFormInstance = gcnew loginForm();

		loginFormInstance->ShowDialog();
	}
};
}
