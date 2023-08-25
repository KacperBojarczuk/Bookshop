#pragma once
#include "User.h"

namespace Bookshop {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	/// <summary>
	/// Podsumowanie informacji o MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			this->CenterToScreen();
			lbName->Text = "Welcome to Book Store " + user->username;
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbName;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbReturn;
	private: System::Windows::Forms::ComboBox^ cbBorrow;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbReturn = (gcnew System::Windows::Forms::ComboBox());
			this->cbBorrow = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->SuspendLayout();
			// 
			// lbName
			// 
			this->lbName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbName->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->Location = System::Drawing::Point(64, 9);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(717, 39);
			this->lbName->TabIndex = 0;
			this->lbName->Text = L"Welcome to Book Store";
			this->lbName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(67, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(715, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Borrowed books:";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(67, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(305, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Select book to return:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(67, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(372, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Available books to borrow:";
			// 
			// cbReturn
			// 
			this->cbReturn->FormattingEnabled = true;
			this->cbReturn->Location = System::Drawing::Point(377, 117);
			this->cbReturn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbReturn->Name = L"cbReturn";
			this->cbReturn->Size = System::Drawing::Size(121, 24);
			this->cbReturn->TabIndex = 4;
			// 
			// cbBorrow
			// 
			this->cbBorrow->FormattingEnabled = true;
			this->cbBorrow->Location = System::Drawing::Point(444, 166);
			this->cbBorrow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cbBorrow->Name = L"cbBorrow";
			this->cbBorrow->Size = System::Drawing::Size(121, 24);
			this->cbBorrow->TabIndex = 5;
			this->cbBorrow->DropDown += gcnew System::EventHandler(this, &MainForm::cbBorrow_DropDown);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(505, 113);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 30);
			this->button1->TabIndex = 6;
			this->button1->Text = L"RETURN";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(572, 162);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 30);
			this->button2->TabIndex = 7;
			this->button2->Text = L"BORROW";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnLogout
			// 
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Arial", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnLogout->Location = System::Drawing::Point(70, 418);
			this->btnLogout->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(125, 30);
			this->btnLogout->TabIndex = 7;
			this->btnLogout->Text = L"LOGOUT";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(835, 479);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cbBorrow);
			this->Controls->Add(this->cbReturn);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbName);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	public: bool switchToLogin = false;

	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void cbBorrow_DropDown(System::Object^ sender, System::EventArgs^ e) {
		//MessageBox::Show("Zdarzenie cbBorrow_SelectedIndexChanged zosta³o wywo³ane.");
		String^ connection = "Data Source=localhost;Initial Catalog=Bookshop;Integrated Security=True";
		SqlConnection^ sqlConn = gcnew SqlConnection(connection);

		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT Title From books";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
			SqlDataReader^ reader = command->ExecuteReader();

			cbBorrow->Items->Clear();

			while (reader->Read()) {
				String^ title = safe_cast<String^>(reader["Title"]);
				cbBorrow->Items->Add(title); // add combobox title
			}

			reader->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message, "B³¹d");
		}
		finally {
			sqlConn->Close();
		}
	}

	}
;}