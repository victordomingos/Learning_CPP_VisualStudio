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
    private: System::Windows::Forms::ComboBox^ cmb_base_pizza;
    private: System::Windows::Forms::Button^ btn_calcular;
    private: System::Windows::Forms::TextBox^ txt_total;
    protected:



    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ txt_quantidade_pizzas;

    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::TextBox^ txt_desconto;

    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::CheckBox^ chk_azeitonas;
    private: System::Windows::Forms::CheckBox^ chk_pimentos;
    private: System::Windows::Forms::CheckBox^ chk_cogumelos;
    private: System::Windows::Forms::RadioButton^ rad_sim;
    private: System::Windows::Forms::RadioButton^ rad_nao;


    private: System::Windows::Forms::Label^ label5;

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
            this->cmb_base_pizza = (gcnew System::Windows::Forms::ComboBox());
            this->btn_calcular = (gcnew System::Windows::Forms::Button());
            this->txt_total = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txt_quantidade_pizzas = (gcnew System::Windows::Forms::TextBox());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->txt_desconto = (gcnew System::Windows::Forms::TextBox());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->chk_azeitonas = (gcnew System::Windows::Forms::CheckBox());
            this->chk_pimentos = (gcnew System::Windows::Forms::CheckBox());
            this->chk_cogumelos = (gcnew System::Windows::Forms::CheckBox());
            this->rad_sim = (gcnew System::Windows::Forms::RadioButton());
            this->rad_nao = (gcnew System::Windows::Forms::RadioButton());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // cmb_base_pizza
            // 
            this->cmb_base_pizza->FormattingEnabled = true;
            this->cmb_base_pizza->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Napolitana", L"Margarida", L"Anchova" });
            this->cmb_base_pizza->Location = System::Drawing::Point(116, 52);
            this->cmb_base_pizza->Name = L"cmb_base_pizza";
            this->cmb_base_pizza->Size = System::Drawing::Size(163, 21);
            this->cmb_base_pizza->TabIndex = 0;
            this->cmb_base_pizza->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::ComboBox1_SelectedIndexChanged);
            // 
            // btn_calcular
            // 
            this->btn_calcular->Location = System::Drawing::Point(35, 397);
            this->btn_calcular->Name = L"btn_calcular";
            this->btn_calcular->Size = System::Drawing::Size(75, 23);
            this->btn_calcular->TabIndex = 1;
            this->btn_calcular->Text = L"Calcular";
            this->btn_calcular->UseVisualStyleBackColor = true;
            this->btn_calcular->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
            // 
            // txt_total
            // 
            this->txt_total->Location = System::Drawing::Point(116, 399);
            this->txt_total->Name = L"txt_total";
            this->txt_total->Size = System::Drawing::Size(100, 20);
            this->txt_total->TabIndex = 2;
            this->txt_total->Text = L"0";
            this->txt_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(75, 55);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(34, 13);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Base:";
            this->label1->Click += gcnew System::EventHandler(this, &Form1::Label1_Click);
            // 
            // txt_quantidade_pizzas
            // 
            this->txt_quantidade_pizzas->Location = System::Drawing::Point(116, 183);
            this->txt_quantidade_pizzas->Name = L"txt_quantidade_pizzas";
            this->txt_quantidade_pizzas->Size = System::Drawing::Size(55, 20);
            this->txt_quantidade_pizzas->TabIndex = 4;
            this->txt_quantidade_pizzas->Text = L"1";
            this->txt_quantidade_pizzas->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txt_quantidade_pizzas->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_quantidade_pizzas_TextChanged);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(83, 186);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(27, 13);
            this->label2->TabIndex = 5;
            this->label2->Text = L"Qtd.";
            this->label2->Click += gcnew System::EventHandler(this, &Form1::Label2_Click);
            // 
            // txt_desconto
            // 
            this->txt_desconto->Location = System::Drawing::Point(254, 332);
            this->txt_desconto->Name = L"txt_desconto";
            this->txt_desconto->Size = System::Drawing::Size(55, 20);
            this->txt_desconto->TabIndex = 6;
            this->txt_desconto->Text = L"0";
            this->txt_desconto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->txt_desconto->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_desconto_TextChanged);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(178, 335);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(70, 13);
            this->label3->TabIndex = 7;
            this->label3->Text = L"Desconto (%)";
            this->label3->Click += gcnew System::EventHandler(this, &Form1::Label3_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(75, 102);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(39, 13);
            this->label4->TabIndex = 8;
            this->label4->Text = L"Extras:";
            this->label4->Click += gcnew System::EventHandler(this, &Form1::Label4_Click);
            // 
            // chk_azeitonas
            // 
            this->chk_azeitonas->AutoSize = true;
            this->chk_azeitonas->Location = System::Drawing::Point(116, 102);
            this->chk_azeitonas->Name = L"chk_azeitonas";
            this->chk_azeitonas->Size = System::Drawing::Size(72, 17);
            this->chk_azeitonas->TabIndex = 9;
            this->chk_azeitonas->Text = L"Azeitonas";
            this->chk_azeitonas->UseVisualStyleBackColor = true;
            this->chk_azeitonas->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_azeitonas_CheckedChanged);
            // 
            // chk_pimentos
            // 
            this->chk_pimentos->AutoSize = true;
            this->chk_pimentos->Location = System::Drawing::Point(116, 126);
            this->chk_pimentos->Name = L"chk_pimentos";
            this->chk_pimentos->Size = System::Drawing::Size(69, 17);
            this->chk_pimentos->TabIndex = 10;
            this->chk_pimentos->Text = L"Pimentos";
            this->chk_pimentos->UseVisualStyleBackColor = true;
            this->chk_pimentos->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_pimentos_CheckedChanged);
            // 
            // chk_cogumelos
            // 
            this->chk_cogumelos->AutoSize = true;
            this->chk_cogumelos->Location = System::Drawing::Point(116, 150);
            this->chk_cogumelos->Name = L"chk_cogumelos";
            this->chk_cogumelos->Size = System::Drawing::Size(78, 17);
            this->chk_cogumelos->TabIndex = 11;
            this->chk_cogumelos->Text = L"Cogumelos";
            this->chk_cogumelos->UseVisualStyleBackColor = true;
            this->chk_cogumelos->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_cogumelos_CheckedChanged);
            // 
            // rad_sim
            // 
            this->rad_sim->AutoSize = true;
            this->rad_sim->Location = System::Drawing::Point(116, 333);
            this->rad_sim->Name = L"rad_sim";
            this->rad_sim->Size = System::Drawing::Size(42, 17);
            this->rad_sim->TabIndex = 12;
            this->rad_sim->TabStop = true;
            this->rad_sim->Text = L"Sim";
            this->rad_sim->UseVisualStyleBackColor = true;
            this->rad_sim->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton1_CheckedChanged);
            // 
            // rad_nao
            // 
            this->rad_nao->AutoSize = true;
            this->rad_nao->Location = System::Drawing::Point(116, 356);
            this->rad_nao->Name = L"rad_nao";
            this->rad_nao->Size = System::Drawing::Size(45, 17);
            this->rad_nao->TabIndex = 13;
            this->rad_nao->TabStop = true;
            this->rad_nao->Text = L"Não";
            this->rad_nao->UseVisualStyleBackColor = true;
            this->rad_nao->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rad_nao_CheckedChanged);
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(18, 335);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(92, 13);
            this->label5->TabIndex = 14;
            this->label5->Text = L"Aplicar desconto\?";
            this->label5->Click += gcnew System::EventHandler(this, &Form1::Label5_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(342, 450);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->rad_nao);
            this->Controls->Add(this->rad_sim);
            this->Controls->Add(this->chk_cogumelos);
            this->Controls->Add(this->chk_pimentos);
            this->Controls->Add(this->chk_azeitonas);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->txt_desconto);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->txt_quantidade_pizzas);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->txt_total);
            this->Controls->Add(this->btn_calcular);
            this->Controls->Add(this->cmb_base_pizza);
            this->Name = L"Form1";
            this->Text = L"Form1";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private: void calcular()
{
    float preco_pizza = 0.0;
    float subtotal = 0.0;
    float desconto = 0.1;
    float total_a_pagar = 0.0;
    int quantidade;

    if (cmb_base_pizza->Text == "Margarida")     preco_pizza = 6;
    if (cmb_base_pizza->Text == "Napolitana")    preco_pizza = 7;
    if (cmb_base_pizza->Text == "Anchova")       preco_pizza = 5;

    if (chk_azeitonas->Checked)  preco_pizza += 1;
    if (chk_pimentos->Checked)   preco_pizza += 1;
    if (chk_cogumelos->Checked)  preco_pizza += 1;

    try
    {
        quantidade = Convert::ToInt16(txt_quantidade_pizzas->Text);
    }
    catch (...)
    {
        quantidade = 0;
        txt_quantidade_pizzas->Text = "0";
    }

    try
    {
        desconto = Convert::ToDouble(txt_desconto->Text) / 100;
    }
    catch (...)
    {
        desconto = 0;
        txt_desconto->Text = "0";
    }


    subtotal = quantidade * preco_pizza;
    if (rad_sim->Checked)
        total_a_pagar = subtotal - subtotal * desconto;
    else
        total_a_pagar = subtotal;

    txt_total->Text = Convert::ToString(total_a_pagar);
}

private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {calcular();}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {calcular();}
private: System::Void RadioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Label5_Click(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Label3_Click(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Txt_desconto_TextChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Chk_azeitonas_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular(); }
private: System::Void Chk_pimentos_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular();}
private: System::Void Chk_cogumelos_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular();}
private: System::Void Txt_quantidade_pizzas_TextChanged(System::Object^ sender, System::EventArgs^ e) {calcular();}
private: System::Void Rad_nao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {calcular();}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
