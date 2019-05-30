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
    private: System::Windows::Forms::DataGridView^ dataGridView1;

    protected:








    private: System::Windows::Forms::Button^ btn_inicializar;
    private: System::Windows::Forms::Button^ btn_limpar;
    private: System::Windows::Forms::GroupBox^ grpbx_novo;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::TextBox^ txt_ano;

    private: System::Windows::Forms::TextBox^ txt_cidade;

    private: System::Windows::Forms::TextBox^ txt_nome;


    private: System::Windows::Forms::Button^ btn_insert;
    private: System::Windows::Forms::Button^ btn_messagebox;
    private: System::Windows::Forms::Button^ btn_del_incomplete;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cidade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnoNasc;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Button^ btn_remover;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::TextBox^ txt_nome_a_remover;
    private: System::Windows::Forms::TextBox^ txt_search;
    private: System::Windows::Forms::Button^ btn_del_seleted;

    private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Cidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->AnoNasc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->btn_inicializar = (gcnew System::Windows::Forms::Button());
            this->btn_limpar = (gcnew System::Windows::Forms::Button());
            this->grpbx_novo = (gcnew System::Windows::Forms::GroupBox());
            this->btn_insert = (gcnew System::Windows::Forms::Button());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->txt_ano = (gcnew System::Windows::Forms::TextBox());
            this->txt_cidade = (gcnew System::Windows::Forms::TextBox());
            this->txt_nome = (gcnew System::Windows::Forms::TextBox());
            this->btn_messagebox = (gcnew System::Windows::Forms::Button());
            this->btn_del_incomplete = (gcnew System::Windows::Forms::Button());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->btn_remover = (gcnew System::Windows::Forms::Button());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->txt_nome_a_remover = (gcnew System::Windows::Forms::TextBox());
            this->txt_search = (gcnew System::Windows::Forms::TextBox());
            this->btn_del_seleted = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->grpbx_novo->SuspendLayout();
            this->groupBox1->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
                this->Nome, this->Cidade,
                    this->AnoNasc
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 198);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->ShowEditingIcon = false;
            this->dataGridView1->Size = System::Drawing::Size(784, 363);
            this->dataGridView1->TabIndex = 0;
            // 
            // Nome
            // 
            this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome->FillWeight = 170;
            this->Nome->HeaderText = L"Nome";
            this->Nome->Name = L"Nome";
            // 
            // Cidade
            // 
            this->Cidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Cidade->HeaderText = L"Cidade";
            this->Cidade->Name = L"Cidade";
            // 
            // AnoNasc
            // 
            this->AnoNasc->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->AnoNasc->HeaderText = L"Ano Nasc.";
            this->AnoNasc->Name = L"AnoNasc";
            this->AnoNasc->Width = 82;
            // 
            // btn_inicializar
            // 
            this->btn_inicializar->Location = System::Drawing::Point(12, 12);
            this->btn_inicializar->Name = L"btn_inicializar";
            this->btn_inicializar->Size = System::Drawing::Size(75, 23);
            this->btn_inicializar->TabIndex = 3;
            this->btn_inicializar->Text = L"Inicializar";
            this->btn_inicializar->UseVisualStyleBackColor = true;
            this->btn_inicializar->Click += gcnew System::EventHandler(this, &Form1::Btn_inicializar_Click);
            // 
            // btn_limpar
            // 
            this->btn_limpar->Location = System::Drawing::Point(93, 12);
            this->btn_limpar->Name = L"btn_limpar";
            this->btn_limpar->Size = System::Drawing::Size(75, 23);
            this->btn_limpar->TabIndex = 4;
            this->btn_limpar->Text = L"Limpar";
            this->btn_limpar->UseVisualStyleBackColor = true;
            this->btn_limpar->Click += gcnew System::EventHandler(this, &Form1::Btn_limpar_Click);
            // 
            // grpbx_novo
            // 
            this->grpbx_novo->Controls->Add(this->btn_insert);
            this->grpbx_novo->Controls->Add(this->label3);
            this->grpbx_novo->Controls->Add(this->label2);
            this->grpbx_novo->Controls->Add(this->label1);
            this->grpbx_novo->Controls->Add(this->txt_ano);
            this->grpbx_novo->Controls->Add(this->txt_cidade);
            this->grpbx_novo->Controls->Add(this->txt_nome);
            this->grpbx_novo->Location = System::Drawing::Point(13, 66);
            this->grpbx_novo->Name = L"grpbx_novo";
            this->grpbx_novo->Size = System::Drawing::Size(349, 126);
            this->grpbx_novo->TabIndex = 5;
            this->grpbx_novo->TabStop = false;
            this->grpbx_novo->Text = L"Novo registo";
            // 
            // btn_insert
            // 
            this->btn_insert->Location = System::Drawing::Point(263, 85);
            this->btn_insert->Name = L"btn_insert";
            this->btn_insert->Size = System::Drawing::Size(75, 23);
            this->btn_insert->TabIndex = 6;
            this->btn_insert->Text = L"Inserir";
            this->btn_insert->UseVisualStyleBackColor = true;
            this->btn_insert->Click += gcnew System::EventHandler(this, &Form1::Btn_insert_Click);
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(6, 90);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(98, 13);
            this->label3->TabIndex = 5;
            this->label3->Text = L"Ano de nascimento";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(64, 64);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(40, 13);
            this->label2->TabIndex = 4;
            this->label2->Text = L"Cidade";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(69, 38);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(35, 13);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Nome";
            // 
            // txt_ano
            // 
            this->txt_ano->Location = System::Drawing::Point(110, 87);
            this->txt_ano->Name = L"txt_ano";
            this->txt_ano->Size = System::Drawing::Size(87, 20);
            this->txt_ano->TabIndex = 2;
            // 
            // txt_cidade
            // 
            this->txt_cidade->Location = System::Drawing::Point(110, 61);
            this->txt_cidade->Name = L"txt_cidade";
            this->txt_cidade->Size = System::Drawing::Size(228, 20);
            this->txt_cidade->TabIndex = 1;
            // 
            // txt_nome
            // 
            this->txt_nome->Location = System::Drawing::Point(110, 35);
            this->txt_nome->Name = L"txt_nome";
            this->txt_nome->Size = System::Drawing::Size(228, 20);
            this->txt_nome->TabIndex = 0;
            // 
            // btn_messagebox
            // 
            this->btn_messagebox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_messagebox->Location = System::Drawing::Point(231, 12);
            this->btn_messagebox->Name = L"btn_messagebox";
            this->btn_messagebox->Size = System::Drawing::Size(92, 23);
            this->btn_messagebox->TabIndex = 7;
            this->btn_messagebox->Text = L"MessageBox";
            this->btn_messagebox->UseVisualStyleBackColor = true;
            this->btn_messagebox->Click += gcnew System::EventHandler(this, &Form1::Btn_messagebox_Click);
            // 
            // btn_del_incomplete
            // 
            this->btn_del_incomplete->Anchor = System::Windows::Forms::AnchorStyles::Top;
            this->btn_del_incomplete->Location = System::Drawing::Point(329, 12);
            this->btn_del_incomplete->Name = L"btn_del_incomplete";
            this->btn_del_incomplete->Size = System::Drawing::Size(125, 23);
            this->btn_del_incomplete->TabIndex = 8;
            this->btn_del_incomplete->Text = L"Eliminar incompletos";
            this->btn_del_incomplete->UseVisualStyleBackColor = true;
            this->btn_del_incomplete->Click += gcnew System::EventHandler(this, &Form1::Btn_del_incomplete_Click);
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->btn_remover);
            this->groupBox1->Controls->Add(this->label4);
            this->groupBox1->Controls->Add(this->txt_nome_a_remover);
            this->groupBox1->Location = System::Drawing::Point(385, 66);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(387, 77);
            this->groupBox1->TabIndex = 9;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Remover registo";
            // 
            // btn_remover
            // 
            this->btn_remover->Location = System::Drawing::Point(302, 34);
            this->btn_remover->Name = L"btn_remover";
            this->btn_remover->Size = System::Drawing::Size(75, 23);
            this->btn_remover->TabIndex = 2;
            this->btn_remover->Text = L"Remover";
            this->btn_remover->UseVisualStyleBackColor = true;
            this->btn_remover->Click += gcnew System::EventHandler(this, &Form1::Btn_remover_Click);
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(34, 38);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(35, 13);
            this->label4->TabIndex = 1;
            this->label4->Text = L"Nome";
            // 
            // txt_nome_a_remover
            // 
            this->txt_nome_a_remover->Location = System::Drawing::Point(75, 35);
            this->txt_nome_a_remover->Name = L"txt_nome_a_remover";
            this->txt_nome_a_remover->Size = System::Drawing::Size(221, 20);
            this->txt_nome_a_remover->TabIndex = 0;
            this->txt_nome_a_remover->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_nome_a_remover_TextChanged);
            // 
            // txt_search
            // 
            this->txt_search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->txt_search->Location = System::Drawing::Point(638, 14);
            this->txt_search->Name = L"txt_search";
            this->txt_search->Size = System::Drawing::Size(134, 20);
            this->txt_search->TabIndex = 10;
            this->txt_search->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_search_TextChanged_1);
            // 
            // btn_del_seleted
            // 
            this->btn_del_seleted->Location = System::Drawing::Point(460, 12);
            this->btn_del_seleted->Name = L"btn_del_seleted";
            this->btn_del_seleted->Size = System::Drawing::Size(129, 23);
            this->btn_del_seleted->TabIndex = 11;
            this->btn_del_seleted->Text = L"Eliminar selecionados";
            this->btn_del_seleted->UseVisualStyleBackColor = true;
            this->btn_del_seleted->Click += gcnew System::EventHandler(this, &Form1::Btn_del_seleted_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(784, 561);
            this->Controls->Add(this->btn_del_seleted);
            this->Controls->Add(this->txt_search);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->btn_del_incomplete);
            this->Controls->Add(this->btn_messagebox);
            this->Controls->Add(this->grpbx_novo);
            this->Controls->Add(this->btn_limpar);
            this->Controls->Add(this->btn_inicializar);
            this->Controls->Add(this->dataGridView1);
            this->MinimumSize = System::Drawing::Size(800, 600);
            this->Name = L"Form1";
            this->Text = L"Form1";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->grpbx_novo->ResumeLayout(false);
            this->grpbx_novo->PerformLayout();
            this->groupBox1->ResumeLayout(false);
            this->groupBox1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void Txt_search_TextChanged(System::Object^ sender, System::EventArgs^ e) {
       
    }
private: System::Void Btn_inicializar_Click(System::Object^ sender, System::EventArgs^ e) {
    dataGridView1->Rows->Add("Miguel Borges", "Viana do Castelo", "1983");
    dataGridView1->Rows->Add("Daniela Caras-Lindas", "Braga", "1977");
    dataGridView1->Rows->Add("Maria Francisca Carmelo dos Santos Figueira Mendes de Arruda e Costa", "Viana do Castelo", "1983");
}
private: System::Void Btn_limpar_Click(System::Object^ sender, System::EventArgs^ e) {
    dataGridView1->Rows->Clear();
}
private: System::Void Btn_messagebox_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ dados;

    for (int i = 0; i < dataGridView1->RowCount-1; i++)
    {
        dados += Convert::ToString(i);
        dados += ". ";
        dados += dataGridView1->Rows[i]->Cells[0]->Value;
        dados += "\n";
    }
    MessageBox::Show(dados, "Todos os Nomes");
}
private: System::Void Btn_insert_Click(System::Object^ sender, System::EventArgs^ e) {
    dataGridView1->Rows->Add(txt_nome->Text, txt_cidade->Text, txt_ano->Text);
}
private: System::Void Btn_del_selected_Click(System::Object^ sender, System::EventArgs^ e) {
//    DataGridViewSelectedRowCollection selected = dataGridView1->SelectedRows;
    
}
private: System::Void Btn_remover_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ grid_name;
    String^ nome_a_remover = txt_nome_a_remover->Text->ToUpper();

    for (int i = 0; i < dataGridView1->Rows->Count; i++) // -1 porque a ultima linha é a de novo registo
    {
        grid_name = dataGridView1->Rows[i]->Cells[0]->Value->ToString()->ToUpper();

        if (nome_a_remover == grid_name)
        {
            dataGridView1->Rows->RemoveAt(i);
        }
    }
}
private: System::Void Btn_del_incomplete_Click(System::Object^ sender, System::EventArgs^ e) {
    int n_linhas = dataGridView1->Rows->Count;

    for (int i = 0; i < n_linhas; i++) // -1 porque a ultima linha é a de novo registo
    {
        if ("" == dataGridView1->Rows[i]->Cells[0]->Value->ToString()->ToUpper())
        {
            dataGridView1->Rows->RemoveAt(i);
            i--; // Ao apagar uma linha, linha seguinte muda de posição.
            n_linhas--; // Ao apagar uma linha, o número de linhas fica menor.
        }
    }
}
private: System::Void Txt_search_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    String^ grid_name;
    String^ search_name = txt_search->Text->ToUpper();
    int n_linhas = dataGridView1->Rows->Count;

    dataGridView1->ClearSelection();

    for (int i = 0; i < n_linhas; i++)
    {
        grid_name = dataGridView1->Rows[i]->Cells[0]->Value->ToString()->ToUpper();

        if (search_name == grid_name)
            dataGridView1->Rows[i]->Selected = true;
    }

}
private: System::Void Btn_del_seleted_Click(System::Object^ sender, System::EventArgs^ e) {
    for each (DataGridViewRow^ linha in dataGridView1->SelectedRows)
        dataGridView1->Rows->Remove(linha);
}

private: System::Void Tooltip_pesquisa_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
}
private: System::Void Txt_nome_a_remover_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
