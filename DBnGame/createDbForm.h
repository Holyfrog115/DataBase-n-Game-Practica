#pragma once

namespace DBnGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for createDbForm
	/// </summary>
	public ref class createDbForm : public System::Windows::Forms::Form
	{
	public:
		createDbForm(void)
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
		~createDbForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ createButton;
	protected:
	private: System::Windows::Forms::TextBox^ dbNameTextBox;
	private: System::Windows::Forms::Label^ dbNameLabel;
	public: String^ currentDbName;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(createDbForm::typeid));
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->dbNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->dbNameLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// createButton
			// 
			this->createButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->createButton->Location = System::Drawing::Point(72, 240);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(240, 72);
			this->createButton->TabIndex = 7;
			this->createButton->Text = L"Создать";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &createDbForm::createButton_Click);
			// 
			// dbNameTextBox
			// 
			this->dbNameTextBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->dbNameTextBox->Location = System::Drawing::Point(48, 120);
			this->dbNameTextBox->Name = L"dbNameTextBox";
			this->dbNameTextBox->Size = System::Drawing::Size(288, 36);
			this->dbNameTextBox->TabIndex = 6;
			// 
			// dbNameLabel
			// 
			this->dbNameLabel->AutoSize = true;
			this->dbNameLabel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->dbNameLabel->Location = System::Drawing::Point(24, 72);
			this->dbNameLabel->Name = L"dbNameLabel";
			this->dbNameLabel->Size = System::Drawing::Size(345, 30);
			this->dbNameLabel->TabIndex = 5;
			this->dbNameLabel->Text = L"Введите Название Базы Данных:";
			// 
			// createDbForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 30);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->dbNameTextBox);
			this->Controls->Add(this->dbNameLabel);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
													  static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
			this->Name = L"createDbForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Создание Базы Данных";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void createDb(String^ filePath) {
		this->currentDbName = this->dbNameTextBox->Text + ".txt";

		File::Create(filePath)->Close();

		this->DialogResult = System::Windows::Forms::DialogResult::OK;

		this->Close();
	}


	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->dbNameTextBox->Text)) {
			MessageBox::Show(this, "Имя базы данных не может быть пустым.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->dbNameTextBox->Text->Contains(".txt")) {
			MessageBox::Show(this, "Имя базы данных не должно содержать расширение .txt.", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			String^ filePath = Path::Combine(Application::StartupPath, "dataBases/" + this->dbNameTextBox->Text + ".txt");
			
			if (File::Exists(filePath)) {
				if (MessageBox::Show(this, "База данных с таким именем уже существует.\nПерезаписать Базу Данных?",
									 "Ошибка", MessageBoxButtons::YesNo, MessageBoxIcon::Error)
									 == System::Windows::Forms::DialogResult::Yes) {
					createDb(filePath);
				}
			}
			else {
				createDb(filePath);
			}
			
		}
	}
	};
}
