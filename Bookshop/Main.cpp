#include "LoginForm.h"
#include "MainForm.h"
#include "RegisterForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

    User^ user = nullptr;

    while (true) {
        Bookshop::LoginForm loginForm;
        loginForm.ShowDialog();

        if (loginForm.switchToRegister) {
            // Show register form
            Bookshop::RegisterForm registerForm;
            registerForm.ShowDialog();
        }
        else if (loginForm.user != nullptr) {
            user = loginForm.user;

            Bookshop::MainForm mainForm(user);
            if (mainForm.ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                user = nullptr; // delete user after logout
            }
        }
        else {
            MessageBox::Show("Authentication Canceled", "Main.cpp", MessageBoxButtons::OK);
            break; // exit loop
        }
    }
	}


