#pragma once

namespace ProjCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Acerca
	/// </summary>
	public ref class Acerca : public System::Windows::Forms::Form
	{
	public:
		Acerca(void)
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
		~Acerca()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label1;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;

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
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // label1
            // 
            this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(130, 166);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(111, 13);
            this->label1->TabIndex = 0;
            this->label1->Text = L"2019 Victor Domingos";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label2
            // 
            this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label2->AutoSize = true;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(26, 46);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(328, 29);
            this->label2->TabIndex = 1;
            this->label2->Text = L"The Amazing Alpha Project";
            this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // label3
            // 
            this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(110, 89);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(148, 13);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Special thanks to P. J. Matos!";
            this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // Acerca
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(380, 188);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Name = L"Acerca";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Acerca desta aplicação";
            this->Load += gcnew System::EventHandler(this, &Acerca::Acerca_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Acerca_Load(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
