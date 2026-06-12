#pragma once

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ loginLabel;
	private: System::Windows::Forms::TextBox^ loginTextBox;
	private: System::Windows::Forms::Button^ loginButton;
	protected:

	protected:


	private: System::Windows::Forms::TextBox^ passwordTextBox;

	private: System::Windows::Forms::Label^ passwordLabel;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->loginLabel = (gcnew System::Windows::Forms::Label());
			this->loginTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginLabel
			// 
			this->loginLabel->AutoSize = true;
			this->loginLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->loginLabel->Location = System::Drawing::Point(24, 48);
			this->loginLabel->Name = L"loginLabel";
			this->loginLabel->Size = System::Drawing::Size(80, 30);
			this->loginLabel->TabIndex = 0;
			this->loginLabel->Text = L"Логин:";
			// 
			// loginTextBox
			// 
			this->loginTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->loginTextBox->Location = System::Drawing::Point(144, 48);
			this->loginTextBox->Name = L"loginTextBox";
			this->loginTextBox->Size = System::Drawing::Size(216, 36);
			this->loginTextBox->TabIndex = 1;
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->loginButton->Location = System::Drawing::Point(72, 240);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(240, 72);
			this->loginButton->TabIndex = 2;
			this->loginButton->Text = L"Войти";
			this->loginButton->UseVisualStyleBackColor = true;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->passwordTextBox->Location = System::Drawing::Point(144, 120);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(216, 36);
			this->passwordTextBox->TabIndex = 4;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->passwordLabel->Location = System::Drawing::Point(24, 120);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(94, 30);
			this->passwordLabel->TabIndex = 3;
			this->passwordLabel->Text = L"Пароль:";
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->loginTextBox);
			this->Controls->Add(this->loginLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход в Режим Администратора";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
