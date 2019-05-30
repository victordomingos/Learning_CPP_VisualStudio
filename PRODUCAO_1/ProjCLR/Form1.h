// Simulação de Tarifa (Produção 1)
// 2019-05-29
// Victor Domingos

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

    private: System::Windows::Forms::TextBox^ txt_total;
    private: System::Windows::Forms::TextBox^ txt_preco;
    private: System::Windows::Forms::ComboBox^ combo_escalao;




    private: System::Windows::Forms::CheckBox^ chk_x;
    private: System::Windows::Forms::CheckBox^ chk_y;
    private: System::Windows::Forms::CheckBox^ chk_z;
	private: System::Windows::Forms::RadioButton^ rad_sim;
	private: System::Windows::Forms::RadioButton^ rad_nao;








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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
            this->txt_qtd = (gcnew System::Windows::Forms::TextBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->txt_total = (gcnew System::Windows::Forms::TextBox());
            this->txt_preco = (gcnew System::Windows::Forms::TextBox());
            this->combo_escalao = (gcnew System::Windows::Forms::ComboBox());
            this->chk_x = (gcnew System::Windows::Forms::CheckBox());
            this->chk_y = (gcnew System::Windows::Forms::CheckBox());
            this->chk_z = (gcnew System::Windows::Forms::CheckBox());
            this->rad_sim = (gcnew System::Windows::Forms::RadioButton());
            this->rad_nao = (gcnew System::Windows::Forms::RadioButton());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->groupBox1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->SuspendLayout();
            // 
            // txt_qtd
            // 
            resources->ApplyResources(this->txt_qtd, L"txt_qtd");
            this->txt_qtd->Name = L"txt_qtd";
            this->txt_qtd->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_qtd_TextChanged);
            // 
            // label1
            // 
            resources->ApplyResources(this->label1, L"label1");
            this->label1->Name = L"label1";
            // 
            // label2
            // 
            resources->ApplyResources(this->label2, L"label2");
            this->label2->Name = L"label2";
            // 
            // label3
            // 
            resources->ApplyResources(this->label3, L"label3");
            this->label3->Name = L"label3";
            // 
            // label6
            // 
            resources->ApplyResources(this->label6, L"label6");
            this->label6->Name = L"label6";
            // 
            // txt_total
            // 
            resources->ApplyResources(this->txt_total, L"txt_total");
            this->txt_total->Name = L"txt_total";
            // 
            // txt_preco
            // 
            resources->ApplyResources(this->txt_preco, L"txt_preco");
            this->txt_preco->Name = L"txt_preco";
            this->txt_preco->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_preco_TextChanged);
            // 
            // combo_escalao
            // 
            resources->ApplyResources(this->combo_escalao, L"combo_escalao");
            this->combo_escalao->FormattingEnabled = true;
            this->combo_escalao->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                resources->GetString(L"combo_escalao.Items"),
                    resources->GetString(L"combo_escalao.Items1"), resources->GetString(L"combo_escalao.Items2")
            });
            this->combo_escalao->Name = L"combo_escalao";
            this->combo_escalao->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Combo_escalao_SelectedIndexChanged);
            // 
            // chk_x
            // 
            resources->ApplyResources(this->chk_x, L"chk_x");
            this->chk_x->Name = L"chk_x";
            this->chk_x->UseVisualStyleBackColor = true;
            this->chk_x->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_x_CheckedChanged);
            // 
            // chk_y
            // 
            resources->ApplyResources(this->chk_y, L"chk_y");
            this->chk_y->Name = L"chk_y";
            this->chk_y->UseVisualStyleBackColor = true;
            this->chk_y->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_y_CheckedChanged);
            // 
            // chk_z
            // 
            resources->ApplyResources(this->chk_z, L"chk_z");
            this->chk_z->Name = L"chk_z";
            this->chk_z->UseVisualStyleBackColor = true;
            this->chk_z->CheckedChanged += gcnew System::EventHandler(this, &Form1::Chk_z_CheckedChanged);
            // 
            // rad_sim
            // 
            resources->ApplyResources(this->rad_sim, L"rad_sim");
            this->rad_sim->Name = L"rad_sim";
            this->rad_sim->TabStop = true;
            this->rad_sim->UseVisualStyleBackColor = true;
            this->rad_sim->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rad_sim_CheckedChanged);
            // 
            // rad_nao
            // 
            resources->ApplyResources(this->rad_nao, L"rad_nao");
            this->rad_nao->Name = L"rad_nao";
            this->rad_nao->TabStop = true;
            this->rad_nao->UseVisualStyleBackColor = true;
            this->rad_nao->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rad_nao_CheckedChanged);
            // 
            // label7
            // 
            resources->ApplyResources(this->label7, L"label7");
            this->label7->Name = L"label7";
            this->label7->Click += gcnew System::EventHandler(this, &Form1::Label7_Click);
            // 
            // groupBox1
            // 
            resources->ApplyResources(this->groupBox1, L"groupBox1");
            this->groupBox1->Controls->Add(this->chk_x);
            this->groupBox1->Controls->Add(this->chk_y);
            this->groupBox1->Controls->Add(this->chk_z);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->TabStop = false;
            // 
            // groupBox2
            // 
            resources->ApplyResources(this->groupBox2, L"groupBox2");
            this->groupBox2->Controls->Add(this->rad_sim);
            this->groupBox2->Controls->Add(this->rad_nao);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->TabStop = false;
            // 
            // Form1
            // 
            resources->ApplyResources(this, L"$this");
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->combo_escalao);
            this->Controls->Add(this->txt_preco);
            this->Controls->Add(this->txt_total);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->txt_qtd);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->MaximizeBox = false;
            this->Name = L"Form1";
            this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
private: System::Void Label7_Click(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Btn_calcular_Click(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Txt_qtd_TextChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Txt_preco_TextChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Combo_escalao_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Chk_x_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Chk_y_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Chk_z_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Rad_sim_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }
private: System::Void Rad_nao_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { calcular_total(); }


	void calcular_total()
	{
		double qtd, preco, desconto, x, y, z, agravamento, total;

		// Verificar se todos os dados são adequados e atribuir às variáveis 

		try
		{
			qtd = Convert::ToDouble(txt_qtd->Text);
			preco = Convert::ToDouble(txt_preco->Text);
		}
		catch (...)
		{
			MessageBox::Show("Por favor, verifique os valores introduzidos.", "Atenção!");
			return;
		}

		// Percentagem de desconto
		if (combo_escalao->Text == "Menor")
			desconto = 0.05;
		else if (combo_escalao->Text == "Reformado")
			desconto = 0.07;
		else desconto = 0;

		// Cada extra custa 10 euros
		x = chk_x->Checked ? 10 : 0;
		y = chk_y->Checked ? 10 : 0;
		z = chk_z->Checked ? 10 : 0;

		// Agravamento de preço em percentagem
		agravamento = rad_sim->Checked ? 1.10 : 1.0;

		// Calcular e apresentar total. 
		// Nota: enunciado é ambíguo sobre se os extras são ou não afetados pelos 
		// descontos e agravamentos. Na presente implementação, os preços dos extras
		// são adicionados ao preço do produto/serviço, antes de aplicar os descontos 
		// e agravamentos.
		total = qtd * (preco + x + y + z) * (1 - desconto) * agravamento;

		txt_total->Text = Convert::ToString(total);
	}
};
}
