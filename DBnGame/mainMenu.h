#pragma once

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainMenu
	/// </summary>
	public ref class mainMenu : public System::Windows::Forms::Form
	{
	public:
		mainMenu(void)
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
		~mainMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ dataBaseButton;
	private: System::Windows::Forms::Button^ gameButton;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainMenu::typeid));
			this->dataBaseButton = (gcnew System::Windows::Forms::Button());
			this->gameButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// dataBaseButton
			// 
			this->dataBaseButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataBaseButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																	  static_cast<System::Byte>(204)));
			this->dataBaseButton->Location = System::Drawing::Point(144, 120);
			this->dataBaseButton->Name = L"dataBaseButton";
			this->dataBaseButton->Size = System::Drawing::Size(288, 120);
			this->dataBaseButton->TabIndex = 0;
			this->dataBaseButton->Text = L"База данных";
			this->dataBaseButton->UseVisualStyleBackColor = true;
			// 
			// gameButton
			// 
			this->gameButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->gameButton->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
																  static_cast<System::Byte>(204)));
			this->gameButton->Location = System::Drawing::Point(144, 288);
			this->gameButton->Name = L"gameButton";
			this->gameButton->Size = System::Drawing::Size(288, 120);
			this->gameButton->TabIndex = 1;
			this->gameButton->Text = L"Морской Бой";
			this->gameButton->UseVisualStyleBackColor = true;
			// 
			// mainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->gameButton);
			this->Controls->Add(this->dataBaseButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"mainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Главное меню";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
