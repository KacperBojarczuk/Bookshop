#pragma once
#include "User.h"

namespace Bookshop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Podsumowanie informacji o LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Email;
	protected:

	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ password;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Button^ btnok;

	private: System::Windows::Forms::LinkLabel^ llRegister;


	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Email = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnok = (gcnew System::Windows::Forms::Button());
			this->llRegister = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// Email
			// 
			this->Email->AutoSize = true;
			this->Email->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Email->ForeColor = System::Drawing::Color::RoyalBlue;
			this->Email->Location = System::Drawing::Point(31, 49);
			this->Email->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Email->Name = L"Email";
			this->Email->Size = System::Drawing::Size(65, 24);
			this->Email->TabIndex = 0;
			this->Email->Text = L"Email";
			this->Email->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbEmail->Location = System::Drawing::Point(192, 44);
			this->tbEmail->Margin = System::Windows::Forms::Padding(4);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(269, 32);
			this->tbEmail->TabIndex = 1;
			this->tbEmail->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbUsername_TextChanged);
			// 
			// password
			// 
			this->password->AutoSize = true;
			this->password->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->password->ForeColor = System::Drawing::Color::RoyalBlue;
			this->password->Location = System::Drawing::Point(31, 116);
			this->password->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(109, 24);
			this->password->TabIndex = 2;
			this->password->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPassword->Location = System::Drawing::Point(192, 116);
			this->tbPassword->Margin = System::Windows::Forms::Padding(4);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(269, 32);
			this->tbPassword->TabIndex = 3;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &LoginForm::tbPassword_TextChanged);
			// 
			// btnok
			// 
			this->btnok->Font = (gcnew System::Drawing::Font(L"Arial", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnok->Location = System::Drawing::Point(322, 174);
			this->btnok->Margin = System::Windows::Forms::Padding(4);
			this->btnok->Name = L"btnok";
			this->btnok->Size = System::Drawing::Size(139, 46);
			this->btnok->TabIndex = 4;
			this->btnok->Text = L"Ok";
			this->btnok->UseVisualStyleBackColor = true;
			this->btnok->Click += gcnew System::EventHandler(this, &LoginForm::btnok_Click);
			// 
			// llRegister
			// 
			this->llRegister->AutoSize = true;
			this->llRegister->Font = (gcnew System::Drawing::Font(L"Arial Black", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->llRegister->LinkColor = System::Drawing::Color::White;
			this->llRegister->Location = System::Drawing::Point(12, 262);
			this->llRegister->Name = L"llRegister";
			this->llRegister->Size = System::Drawing::Size(121, 27);
			this->llRegister->TabIndex = 5;
			this->llRegister->TabStop = true;
			this->llRegister->Text = L"REGISTER";
			this->llRegister->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::llRegister_LinkClicked);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(527, 298);
			this->Controls->Add(this->llRegister);
			this->Controls->Add(this->btnok);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->password);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->Email);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(543, 337);
			this->MinimumSize = System::Drawing::Size(543, 337);
			this->Name = L"LoginForm";
			this->Text = L"Log in";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	public: User^ user = nullptr;
	private: System::Void btnok_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ password = this->tbPassword->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
		}

		try {
			String^ connection = "Data Source=localhost;Initial Catalog=Bookshop;Integrated Security=True";
			SqlConnection sqlConn(connection);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM users WHERE email=@email AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->password = reader->GetString(4);
				this->Close();
			}
			else {
				MessageBox::Show("Email or password incorrect", "Email or Password Error", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database", "Database Connection Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void tbUsername_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	public: bool switchToRegister = false;

private: System::Void llRegister_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
}
};
}
