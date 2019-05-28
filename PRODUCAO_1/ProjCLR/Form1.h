#pragma once

namespace ProjCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::TextBox^ txt_qtd;
    protected:

    protected:
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;


    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ btn_calcular;
    private: System::Windows::Forms::TextBox^ txt_total;
    private: System::Windows::Forms::TextBox^ txt_preco;
    private: System::Windows::Forms::ComboBox^ combo_escalao;




    private: System::Windows::Forms::CheckBox^ chk_x;
    private: System::Windows::Forms::CheckBox^ chk_y;
    private: System::Windows::Forms::CheckBox^ chk_z;






    private: System::Windows::Forms::RadioButton^ radioButton1;
    private: System::Windows::Forms::RadioButton^ radioButton2;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::GroupBox^ groupBox2;

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
            this->txt_qtd = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->btn_calcular = (gcnew System::Windows::Forms::Button());
            this->txt_total = (gcnew System::Windows::Forms::TextBox());
            this->txt_preco = (gcnew System::Windows::Forms::TextBox());
            this->combo_escalao = (gcnew System::Windows::Forms::ComboBox());
            this->chk_x = (gcnew System::Windows::Forms::CheckBox());
            this->chk_y = (gcnew System::Windows::Forms::CheckBox());
            this->chk_z = (gcnew System::Windows::Forms::CheckBox());
            this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
            this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // txt_qtd
            // 
            this->txt_qtd->Location = System::Drawing::Point(11, 39);
            this->txt_qtd->Name = L"txt_qtd";
            this->txt_qtd->Size = System::Drawing::Size(85, 20);
            this->txt_qtd->TabIndex = 0;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(12, 20);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(62, 13);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Quantidade";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(125, 20);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(35, 13);
            this->label2->TabIndex = 2;
            this->label2->Text = L"Preço";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(12, 82);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(45, 13);
            this->label3->TabIndex = 3;
            this->label3->Text = L"Escalão";
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(11, 256);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(63, 20);
            this->label6->TabIndex = 6;
            this->label6->Text = L"TOTAL:";
            // 
            // btn_calcular
            // 
            this->btn_calcular->Location = System::Drawing::Point(11, 316);
            this->btn_calcular->Name = L"btn_calcular";
            this->btn_calcular->Size = System::Drawing::Size(216, 33);
            this->btn_calcular->TabIndex = 7;
            this->btn_calcular->Text = L"Calcular";
            this->btn_calcular->UseVisualStyleBackColor = true;
            this->btn_calcular->Click += gcnew System::EventHandler(this, &Form1::Btn_calcular_Click);
            // 
            // txt_total
            // 
            this->txt_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txt_total->Location = System::Drawing::Point(11, 279);
            this->txt_total->Name = L"txt_total";
            this->txt_total->Size = System::Drawing::Size(215, 31);
            this->txt_total->TabIndex = 8;
            this->txt_total->Text = L"0";
            this->txt_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // txt_preco
            // 
            this->txt_preco->Location = System::Drawing::Point(123, 39);
            this->txt_preco->Name = L"txt_preco";
            this->txt_preco->Size = System::Drawing::Size(104, 20);
            this->txt_preco->TabIndex = 9;
            // 
            // combo_escalao
            // 
            this->combo_escalao->FormattingEnabled = true;
            this->combo_escalao->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Menor", L"Adulto", L"Reformado" });
            this->combo_escalao->Location = System::Drawing::Point(11, 99);
            this->combo_escalao->Name = L"combo_escalao";
            this->combo_escalao->Size = System::Drawing::Size(216, 21);
            this->combo_escalao->TabIndex = 10;
            this->combo_escalao->Text = L"Clique para selecionar...";
            // 
            // chk_x
            // 
            this->chk_x->AutoSize = true;
            this->chk_x->Location = System::Drawing::Point(17, 21);
            this->chk_x->Name = L"chk_x";
            this->chk_x->Size = System::Drawing::Size(33, 17);
            this->chk_x->TabIndex = 11;
            this->chk_x->Text = L"X";
            this->chk_x->UseVisualStyleBackColor = true;
            // 
            // chk_y
            // 
            this->chk_y->AutoSize = true;
            this->chk_y->Location = System::Drawing::Point(17, 45);
            this->chk_y->Name = L"chk_y";
            this->chk_y->Size = System::Drawing::Size(33, 17);
            this->chk_y->TabIndex = 12;
            this->chk_y->Text = L"Y";
            this->chk_y->UseVisualStyleBackColor = true;
            // 
            // chk_z
            // 
            this->chk_z->AutoSize = true;
            this->chk_z->Location = System::Drawing::Point(17, 69);
            this->chk_z->Name = L"chk_z";
            this->chk_z->Size = System::Drawing::Size(33, 17);
            this->chk_z->TabIndex = 13;
            this->chk_z->Text = L"Z";
            this->chk_z->UseVisualStyleBackColor = true;
            // 
            // radioButton1
            // 
            this->radioButton1->AutoSize = true;
            this->radioButton1->Location = System::Drawing::Point(17, 21);
            this->radioButton1->Name = L"radioButton1";
            this->radioButton1->Size = System::Drawing::Size(42, 17);
            this->radioButton1->TabIndex = 14;
            this->radioButton1->TabStop = true;
            this->radioButton1->Text = L"Sim";
            this->radioButton1->UseVisualStyleBackColor = true;
            // 
            // radioButton2
            // 
            this->radioButton2->AutoSize = true;
            this->radioButton2->Location = System::Drawing::Point(17, 45);
            this->radioButton2->Name = L"radioButton2";
            this->radioButton2->Size = System::Drawing::Size(45, 17);
            this->radioButton2->TabIndex = 15;
            this->radioButton2->TabStop = true;
            this->radioButton2->Text = L"Não";
            this->radioButton2->UseVisualStyleBackColor = true;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(102, 39);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(21, 25);
            this->label7->TabIndex = 16;
            this->label7->Text = L"*";
            this->label7->Click += gcnew System::EventHandler(this, &Form1::Label7_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->chk_x);
            this->groupBox1->Controls->Add(this->chk_y);
            this->groupBox1->Controls->Add(this->chk_z);
            this->groupBox1->Location = System::Drawing::Point(11, 136);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(85, 94);
            this->groupBox1->TabIndex = 17;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Extras";
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->radioButton1);
            this->groupBox2->Controls->Add(this->radioButton2);
            this->groupBox2->Location = System::Drawing::Point(123, 136);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(100, 94);
            this->groupBox2->TabIndex = 18;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Agravamento";
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(239, 361);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->combo_escalao);
            this->Controls->Add(this->txt_preco);
            this->Controls->Add(this->txt_total);
            this->Controls->Add(this->btn_calcular);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->txt_qtd);
            this->Name = L"Form1";
            this->Text = L"Simulação de Tarifa";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_calcular_Click(System::Object^ sender, System::EventArgs^ e) {
    float qtd, preco, escalao, total;

    try
    {
        qtd = Convert::ToDouble(txt_qtd);
        preco = Convert::ToDouble(txt_preco);

    }
    catch (...)
    {        
        MessageBox::Show("Por favor, verifique os valores introduzidos.", "Atenção!");
        return;
    }


}
};
}
