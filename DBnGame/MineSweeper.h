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
		MineSweeper(void)
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
		~MineSweeper()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ restartButton;
	private: MineField^ mineField;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MineSweeper::typeid));
			this->restartButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// restartButton
			// 
			this->restartButton->Location = System::Drawing::Point(240, 48);
			this->restartButton->Name = L"restartButton";
			this->restartButton->Size = System::Drawing::Size(96, 48);
			this->restartButton->TabIndex = 0;
			this->restartButton->Text = L"Restart";
			this->restartButton->UseVisualStyleBackColor = true;
			this->restartButton->Click += gcnew System::EventHandler(this, &MineSweeper::restartButton_Click);
			// 
			// MineSweeper
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 661);
			this->Controls->Add(this->restartButton);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"MineSweeper";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Сапер";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MineSweeper::MineSweeper_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MineSweeper::MineSweeper_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MineSweeper_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
		Application::Exit();
	}


	private: System::Void MineSweeper_Load(System::Object^ sender, System::EventArgs^ e) {
		// Создаем поле 10x10 с 15 минами
		this->mineField = gcnew MineField(10, 10, 15);
		mineField->InitializeField(this);
		mineField->GenerateMines();
	}

	private: System::Void restartButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->mineField->CleanUpField(this);
		this->mineField = gcnew MineField(10, 10, 15);
		mineField->InitializeField(this);
		mineField->GenerateMines();
	}
	};
}
