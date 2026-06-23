#pragma once
#include "MineField.h"

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MineSweeper
	/// </summary>
	public ref class MineSweeper : public System::Windows::Forms::Form
	{
	public:
		MineSweeper(System::Windows::Forms::Form^ MainMenu)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->MainMenu = MainMenu;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MineSweeper()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ restartButton;
	private: MineField^ mineField;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ timeLabel;
	private: int secondsPassed;
	private: System::Windows::Forms::Form^ MainMenu;
	private: bool isExiting = false;
	private: System::Windows::Forms::Label^ flagsLabel;
	private: System::Windows::Forms::Button^ backButton;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MineSweeper::typeid));
			this->restartButton = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->timeLabel = (gcnew System::Windows::Forms::Label());
			this->flagsLabel = (gcnew System::Windows::Forms::Label());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// restartButton
			// 
			this->restartButton->ImageList = this->imageList1;
			this->restartButton->Location = System::Drawing::Point(264, 24);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(64, 64);
			this->restartButton->TabIndex = 0;
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Click += gcnew System::EventHandler(this, &MineSweeper::restartButton_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"smileFace.jpg");
			this->imageList1->Images->SetKeyName(1, L"SadFace.jpg");
			this->imageList1->Images->SetKeyName(2, L"winFace.jpg");
			// 
			// timer
			// 
			this->timer->Interval = 1000;
			this->timer->Tick += gcnew System::EventHandler(this, &MineSweeper::timer_Tick);
			// 
			// timeLabel
			// 
			this->timeLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->timeLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->timeLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																 static_cast<System::Byte>(204)));
			this->timeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
																		  static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->timeLabel->Location = System::Drawing::Point(408, 48);
			this->timeLabel->Name = L"timeLabel";
			this->timeLabel->Padding = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->timeLabel->Size = System::Drawing::Size(71, 42);
			this->timeLabel->TabIndex = 1;
			this->timeLabel->Text = L"000";
			// 
			// flagsLabel
			// 
			this->flagsLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(151)), static_cast<System::Int32>(static_cast<System::Byte>(151)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(151)));
			this->flagsLabel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flagsLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
																		   static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->flagsLabel->Location = System::Drawing::Point(120, 48);
			this->flagsLabel->Name = L"flagsLabel";
			this->flagsLabel->Padding = System::Windows::Forms::Padding(10, 5, 10, 5);
			this->flagsLabel->Size = System::Drawing::Size(68, 42);
			this->flagsLabel->TabIndex = 2;
			this->flagsLabel->Text = L"015";
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::Silver;
			this->backButton->FlatAppearance->BorderColor = System::Drawing::Color::Silver;
			this->backButton->FlatAppearance->BorderSize = 0;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->backButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"backButton.Image")));
			this->backButton->Location = System::Drawing::Point(0, 0);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(48, 48);
			this->backButton->TabIndex = 3;
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &MineSweeper::backButton_Click);
			// 
			// MineSweeper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(584, 661);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->flagsLabel);
			this->Controls->Add(this->timeLabel);
			this->Controls->Add(this->restartButton);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->MaximizeBox = false;
			this->Name = L"MineSweeper";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сапер";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MineSweeper::MineSweeper_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MineSweeper::MineSweeper_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MineSweeper_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		if (!isExiting) {
			Application::Exit();
		}
		else {
			this->MainMenu->Show();
		}
	}


	private: System::Void MineSweeper_Load(System::Object^ sender, System::EventArgs^ e) {
		// Создаем поле 10x10 с 15 минами
		this->mineField = gcnew MineField(10, 10, 15, restartButton, timer, flagsLabel);
		this->secondsPassed = 0;
		timeLabel->Text = "000";
		mineField->InitializeField(this);
	}


	private: System::Void restartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mineField->CleanUpField(this);
		this->secondsPassed = 0;
		timeLabel->Text = "000";
		this->mineField = gcnew MineField(10, 10, 15, restartButton, timer, flagsLabel);
		mineField->InitializeField(this);
	}


	private: System::Void timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->secondsPassed++;

		if (secondsPassed > 999) {
			timer->Stop();
			return;
		}
		timeLabel->Text = secondsPassed.ToString("D3");
	}

	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->isExiting = true;
		this->Close();
	}
};
}
