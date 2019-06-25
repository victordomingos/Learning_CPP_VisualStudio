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
    private: System::Windows::Forms::DataGridView^ tabela;
    protected:

    protected:
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ preco;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ qtd;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ categoria;
    private: System::Windows::Forms::Button^ btn_init;
    private: System::Windows::Forms::Button^ btn_limpar;
    private: System::Windows::Forms::Button^ btn_inserir;
    private: System::Windows::Forms::TextBox^ txt_nome;
    private: System::Windows::Forms::TextBox^ txt_preco;
    private: System::Windows::Forms::TextBox^ txt_qtd;
    private: System::Windows::Forms::TextBox^ txt_categoria;
    private: System::Windows::Forms::Button^ btn_remover;
    private: System::Windows::Forms::TextBox^ txt_nome_remover;
    private: System::Windows::Forms::Button^ btn_filtrar_combo;
    private: System::Windows::Forms::ComboBox^ cmb_filtrar;
    private: System::Windows::Forms::Button^ btn_mais_caro;
    private: System::Windows::Forms::TextBox^ txt_mais_caro;
    private: System::Windows::Forms::Button^ btn_qtd_zero;
    private: System::Windows::Forms::RadioButton^ rad_mostrar_tudo;
    private: System::Windows::Forms::RadioButton^ rad_esconder_qtd_zeros;
    private: System::Windows::Forms::Button^ btn_filtrar_cat_chk;
    private: System::Windows::Forms::CheckBox^ chk_bebidas;
    private: System::Windows::Forms::CheckBox^ chk_frutas;
    private: System::Windows::Forms::CheckBox^ chk_condimentos;
    private: System::Windows::Forms::Button^ btn_media;
    private: System::Windows::Forms::TextBox^ txt_categoria_media;
    private: System::Windows::Forms::TextBox^ txt_result_media;



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
            this->tabela = (gcnew System::Windows::Forms::DataGridView());
            this->nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->preco = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->qtd = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->categoria = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->btn_init = (gcnew System::Windows::Forms::Button());
            this->btn_limpar = (gcnew System::Windows::Forms::Button());
            this->btn_inserir = (gcnew System::Windows::Forms::Button());
            this->txt_nome = (gcnew System::Windows::Forms::TextBox());
            this->txt_preco = (gcnew System::Windows::Forms::TextBox());
            this->txt_qtd = (gcnew System::Windows::Forms::TextBox());
            this->txt_categoria = (gcnew System::Windows::Forms::TextBox());
            this->btn_remover = (gcnew System::Windows::Forms::Button());
            this->txt_nome_remover = (gcnew System::Windows::Forms::TextBox());
            this->btn_filtrar_combo = (gcnew System::Windows::Forms::Button());
            this->cmb_filtrar = (gcnew System::Windows::Forms::ComboBox());
            this->btn_mais_caro = (gcnew System::Windows::Forms::Button());
            this->txt_mais_caro = (gcnew System::Windows::Forms::TextBox());
            this->btn_qtd_zero = (gcnew System::Windows::Forms::Button());
            this->rad_mostrar_tudo = (gcnew System::Windows::Forms::RadioButton());
            this->rad_esconder_qtd_zeros = (gcnew System::Windows::Forms::RadioButton());
            this->btn_filtrar_cat_chk = (gcnew System::Windows::Forms::Button());
            this->chk_bebidas = (gcnew System::Windows::Forms::CheckBox());
            this->chk_frutas = (gcnew System::Windows::Forms::CheckBox());
            this->chk_condimentos = (gcnew System::Windows::Forms::CheckBox());
            this->btn_media = (gcnew System::Windows::Forms::Button());
            this->txt_categoria_media = (gcnew System::Windows::Forms::TextBox());
            this->txt_result_media = (gcnew System::Windows::Forms::TextBox());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabela))->BeginInit();
            this->SuspendLayout();
            // 
            // tabela
            // 
            resources->ApplyResources(this->tabela, L"tabela");
            this->tabela->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->tabela->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->nome, this->preco,
                    this->qtd, this->categoria
            });
            this->tabela->Name = L"tabela";
            // 
            // nome
            // 
            this->nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            resources->ApplyResources(this->nome, L"nome");
            this->nome->Name = L"nome";
            // 
            // preco
            // 
            resources->ApplyResources(this->preco, L"preco");
            this->preco->Name = L"preco";
            // 
            // qtd
            // 
            resources->ApplyResources(this->qtd, L"qtd");
            this->qtd->Name = L"qtd";
            // 
            // categoria
            // 
            this->categoria->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            resources->ApplyResources(this->categoria, L"categoria");
            this->categoria->Name = L"categoria";
            // 
            // btn_init
            // 
            resources->ApplyResources(this->btn_init, L"btn_init");
            this->btn_init->Name = L"btn_init";
            this->btn_init->UseVisualStyleBackColor = true;
            this->btn_init->Click += gcnew System::EventHandler(this, &Form1::Btn_init_Click);
            // 
            // btn_limpar
            // 
            resources->ApplyResources(this->btn_limpar, L"btn_limpar");
            this->btn_limpar->Name = L"btn_limpar";
            this->btn_limpar->UseVisualStyleBackColor = true;
            this->btn_limpar->Click += gcnew System::EventHandler(this, &Form1::Btn_limpar_Click);
            // 
            // btn_inserir
            // 
            resources->ApplyResources(this->btn_inserir, L"btn_inserir");
            this->btn_inserir->Name = L"btn_inserir";
            this->btn_inserir->UseVisualStyleBackColor = true;
            this->btn_inserir->Click += gcnew System::EventHandler(this, &Form1::Btn_inserir_Click);
            // 
            // txt_nome
            // 
            resources->ApplyResources(this->txt_nome, L"txt_nome");
            this->txt_nome->Name = L"txt_nome";
            this->txt_nome->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_nome_TextChanged);
            // 
            // txt_preco
            // 
            resources->ApplyResources(this->txt_preco, L"txt_preco");
            this->txt_preco->Name = L"txt_preco";
            this->txt_preco->TextChanged += gcnew System::EventHandler(this, &Form1::Txt_preco_TextChanged);
            // 
            // txt_qtd
            // 
            resources->ApplyResources(this->txt_qtd, L"txt_qtd");
            this->txt_qtd->Name = L"txt_qtd";
            // 
            // txt_categoria
            // 
            resources->ApplyResources(this->txt_categoria, L"txt_categoria");
            this->txt_categoria->Name = L"txt_categoria";
            // 
            // btn_remover
            // 
            resources->ApplyResources(this->btn_remover, L"btn_remover");
            this->btn_remover->Name = L"btn_remover";
            this->btn_remover->UseVisualStyleBackColor = true;
            this->btn_remover->Click += gcnew System::EventHandler(this, &Form1::Btn_remover_Click);
            // 
            // txt_nome_remover
            // 
            resources->ApplyResources(this->txt_nome_remover, L"txt_nome_remover");
            this->txt_nome_remover->Name = L"txt_nome_remover";
            // 
            // btn_filtrar_combo
            // 
            resources->ApplyResources(this->btn_filtrar_combo, L"btn_filtrar_combo");
            this->btn_filtrar_combo->Name = L"btn_filtrar_combo";
            this->btn_filtrar_combo->UseVisualStyleBackColor = true;
            this->btn_filtrar_combo->Click += gcnew System::EventHandler(this, &Form1::Btn_filtrar_combo_Click);
            // 
            // cmb_filtrar
            // 
            this->cmb_filtrar->FormattingEnabled = true;
            resources->ApplyResources(this->cmb_filtrar, L"cmb_filtrar");
            this->cmb_filtrar->Name = L"cmb_filtrar";
            // 
            // btn_mais_caro
            // 
            resources->ApplyResources(this->btn_mais_caro, L"btn_mais_caro");
            this->btn_mais_caro->Name = L"btn_mais_caro";
            this->btn_mais_caro->UseVisualStyleBackColor = true;
            this->btn_mais_caro->Click += gcnew System::EventHandler(this, &Form1::Btn_mais_caro_Click);
            // 
            // txt_mais_caro
            // 
            resources->ApplyResources(this->txt_mais_caro, L"txt_mais_caro");
            this->txt_mais_caro->Name = L"txt_mais_caro";
            // 
            // btn_qtd_zero
            // 
            resources->ApplyResources(this->btn_qtd_zero, L"btn_qtd_zero");
            this->btn_qtd_zero->Name = L"btn_qtd_zero";
            this->btn_qtd_zero->UseVisualStyleBackColor = true;
            this->btn_qtd_zero->Click += gcnew System::EventHandler(this, &Form1::Btn_qtd_zero_Click);
            // 
            // rad_mostrar_tudo
            // 
            resources->ApplyResources(this->rad_mostrar_tudo, L"rad_mostrar_tudo");
            this->rad_mostrar_tudo->Checked = true;
            this->rad_mostrar_tudo->Name = L"rad_mostrar_tudo";
            this->rad_mostrar_tudo->TabStop = true;
            this->rad_mostrar_tudo->UseVisualStyleBackColor = true;
            this->rad_mostrar_tudo->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rad_mostrar_tudo_CheckedChanged);
            // 
            // rad_esconder_qtd_zeros
            // 
            resources->ApplyResources(this->rad_esconder_qtd_zeros, L"rad_esconder_qtd_zeros");
            this->rad_esconder_qtd_zeros->Name = L"rad_esconder_qtd_zeros";
            this->rad_esconder_qtd_zeros->UseVisualStyleBackColor = true;
            this->rad_esconder_qtd_zeros->CheckedChanged += gcnew System::EventHandler(this, &Form1::Rad_esconder_qtd_zeros_CheckedChanged);
            // 
            // btn_filtrar_cat_chk
            // 
            resources->ApplyResources(this->btn_filtrar_cat_chk, L"btn_filtrar_cat_chk");
            this->btn_filtrar_cat_chk->Name = L"btn_filtrar_cat_chk";
            this->btn_filtrar_cat_chk->UseVisualStyleBackColor = true;
            this->btn_filtrar_cat_chk->Click += gcnew System::EventHandler(this, &Form1::Btn_filtrar_cat_chk_Click);
            // 
            // chk_bebidas
            // 
            resources->ApplyResources(this->chk_bebidas, L"chk_bebidas");
            this->chk_bebidas->Name = L"chk_bebidas";
            this->chk_bebidas->UseVisualStyleBackColor = true;
            // 
            // chk_frutas
            // 
            resources->ApplyResources(this->chk_frutas, L"chk_frutas");
            this->chk_frutas->Name = L"chk_frutas";
            this->chk_frutas->UseVisualStyleBackColor = true;
            // 
            // chk_condimentos
            // 
            resources->ApplyResources(this->chk_condimentos, L"chk_condimentos");
            this->chk_condimentos->Name = L"chk_condimentos";
            this->chk_condimentos->UseVisualStyleBackColor = true;
            // 
            // btn_media
            // 
            resources->ApplyResources(this->btn_media, L"btn_media");
            this->btn_media->Name = L"btn_media";
            this->btn_media->UseVisualStyleBackColor = true;
            this->btn_media->Click += gcnew System::EventHandler(this, &Form1::Btn_media_Click);
            // 
            // txt_categoria_media
            // 
            resources->ApplyResources(this->txt_categoria_media, L"txt_categoria_media");
            this->txt_categoria_media->Name = L"txt_categoria_media";
            // 
            // txt_result_media
            // 
            resources->ApplyResources(this->txt_result_media, L"txt_result_media");
            this->txt_result_media->Name = L"txt_result_media";
            // 
            // Form1
            // 
            resources->ApplyResources(this, L"$this");
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->Controls->Add(this->txt_result_media);
            this->Controls->Add(this->txt_categoria_media);
            this->Controls->Add(this->btn_media);
            this->Controls->Add(this->chk_condimentos);
            this->Controls->Add(this->chk_frutas);
            this->Controls->Add(this->chk_bebidas);
            this->Controls->Add(this->btn_filtrar_cat_chk);
            this->Controls->Add(this->rad_esconder_qtd_zeros);
            this->Controls->Add(this->rad_mostrar_tudo);
            this->Controls->Add(this->btn_qtd_zero);
            this->Controls->Add(this->txt_mais_caro);
            this->Controls->Add(this->btn_mais_caro);
            this->Controls->Add(this->cmb_filtrar);
            this->Controls->Add(this->btn_filtrar_combo);
            this->Controls->Add(this->txt_nome_remover);
            this->Controls->Add(this->btn_remover);
            this->Controls->Add(this->txt_categoria);
            this->Controls->Add(this->txt_qtd);
            this->Controls->Add(this->txt_preco);
            this->Controls->Add(this->txt_nome);
            this->Controls->Add(this->btn_inserir);
            this->Controls->Add(this->btn_limpar);
            this->Controls->Add(this->btn_init);
            this->Controls->Add(this->tabela);
            this->Name = L"Form1";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabela))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

private: void inicializar()
{
    tabela->Rows->Add("Chá", "2", "100", "Bebidas");            atualiza_combo("Bebidas");
    tabela->Rows->Add("Sumo", "3", "300", "Bebidas");
    tabela->Rows->Add("Melancia", "4", "50", "Frutas");         atualiza_combo("Frutas");
    tabela->Rows->Add("Pimentão", "1", "200", "Condimentos");   atualiza_combo("Condimentos");
    tabela->Rows->Add("Vinhão", "7", "0", "Bebidas");
}


private: void inserir()
{
    String^ nome = txt_nome->Text;
    String^ preco = txt_preco->Text;
    String^ qtd = txt_qtd->Text;
    String^ categoria = txt_categoria->Text;

    tabela->Rows->Add(nome, preco, qtd, categoria);
    atualiza_combo(categoria);
}

private: void remover()
{
    String^ nome = txt_nome_remover->Text->ToUpper();
    String^ nome_linha;
    int n_linhas = tabela->Rows->Count - 1;

    MessageBox::Show("Linhas", Convert::ToString(n_linhas));

    for (int i = 0; i < n_linhas ; i++)
    {
        nome_linha = Convert::ToString(tabela->Rows[i]->Cells[0]->Value)->ToUpper();
        MessageBox::Show(nome_linha, Convert::ToString(i));

        if (nome == nome_linha)
        {
            tabela->Rows->Remove(tabela->Rows[i]);
            n_linhas--;
            i--;
        }
    }
}


private: void atualiza_combo(String^ categoria)
{
    String^ categoria_linha;
    
    for (size_t i = 0; i < tabela->Rows->Count -1; i++)
    {
        categoria_linha = tabela->Rows[i]->Cells[3]->Value->ToString()->ToUpper();
        if (categoria == categoria_linha)
            return;
        else
        {
            if (!cmb_filtrar->Items->Contains(categoria))
                cmb_filtrar->Items->Add(categoria);
        }
    }
}

private: void filtrar_categoria(String^ categoria)
{
    String^ categoria_linha;

    for (size_t i = 0; i < tabela->Rows->Count-1; i++)
    {
        categoria_linha = tabela->Rows[i]->Cells[3]->Value->ToString()->ToUpper();

        if (categoria->ToUpper() == categoria_linha)
            tabela->Rows[i]->Visible = true;
        else
            tabela->Rows[i]->Visible = false;
    }
}

private: void encontrar_mais_caros()
{
    Int64 preco_max = 0;
    Int64 preco_linha = 0;
    String^ nomes_mais_caros = "";
    String^ nome_linha = "";

    for (size_t i = 0; i < tabela->Rows->Count - 1; i++)
    {
        preco_linha = Convert::ToInt64(tabela->Rows[i]->Cells[1]->Value);
        nome_linha = tabela->Rows[i]->Cells[0]->Value->ToString();

        if (preco_linha == preco_max)
        {
            if (nomes_mais_caros != "")
                nomes_mais_caros += ", ";

            nomes_mais_caros += nome_linha;
        }
        else if (preco_linha > preco_max)
        {
            preco_max = preco_linha;
            nomes_mais_caros = nome_linha;
        }
    }

    txt_mais_caro->Text = nomes_mais_caros;
}

private: void atualizar_vista_qtd_zero()
{
    Int64 qtd = 0;

    for (size_t i = 0; i < tabela->Rows->Count -1; i++)
    {
        if (rad_mostrar_tudo->Checked)
            tabela->Rows[i]->Visible = true;
        else
        {
            qtd = Convert::ToInt64(tabela->Rows[i]->Cells[2]->Value);
            if(qtd == 0)
                tabela->Rows[i]->Visible = false;
        }
        
    }

}


private: void mostrar_categoria(String^ categoria)
{
    String^ categoria_linha;

    for (size_t i = 0; i < tabela->Rows->Count - 1; i++)
    {
        categoria_linha = tabela->Rows[i]->Cells[3]->Value->ToString()->ToUpper();

        if (categoria == categoria_linha)
            tabela->Rows[i]->Visible = true;
    }
}


private: void filtrar_categorias_chk()
{
    String^ categoria;

    // esconder tudo
    for (size_t i = 0; i < tabela->Rows->Count - 1; i++)
        tabela->Rows[i]->Visible = false;
    
    if (chk_bebidas->Checked)     mostrar_categoria("BEBIDAS");
    if (chk_frutas->Checked)      mostrar_categoria("FRUTAS");
    if (chk_condimentos->Checked) mostrar_categoria("CONDIMENTOS");
}


private: void calcular_media()
{
    String^ categoria_linha;
    String^ categoria;

    Int64 qtd_linha = 0;
    Int64 qtd_total = 0;
    Int64 preco_linha = 0;
    Int64 soma_precos = 0;
    Double media = 0.0;

    categoria = txt_categoria_media->Text->ToUpper();

    for (size_t i = 0; i < tabela->Rows->Count - 1; i++)
    {
        categoria_linha = tabela->Rows[i]->Cells[3]->Value->ToString()->ToUpper();

        qtd_linha = Convert::ToInt64(tabela->Rows[i]->Cells[2]->Value);
        preco_linha = Convert::ToInt64(tabela->Rows[i]->Cells[1]->Value);

        if ((categoria == categoria_linha || categoria == "") && qtd_linha > 0)
        {
            soma_precos = soma_precos + (preco_linha * qtd_linha);
            qtd_total = qtd_total + qtd_linha;
        }
    }

    media = Convert::ToDouble(soma_precos) / Convert::ToDouble(qtd_total);
    txt_result_media->Text = Convert::ToString(media);
}


private: System::Void Txt_nome_TextChanged(System::Object^ sender, System::EventArgs^ e)      {}
private: System::Void Txt_preco_TextChanged(System::Object^ sender, System::EventArgs^ e)     {}
private: System::Void Btn_init_Click(System::Object^ sender, System::EventArgs^ e)            { inicializar(); }
private: System::Void Btn_limpar_Click(System::Object^ sender, System::EventArgs^ e)          { tabela->Rows->Clear(); }
private: System::Void Btn_inserir_Click(System::Object^ sender, System::EventArgs^ e)         { inserir(); }
private: System::Void Btn_remover_Click(System::Object^ sender, System::EventArgs^ e)         { remover();}

private: System::Void Btn_filtrar_combo_Click(System::Object^ sender, System::EventArgs^ e)   { filtrar_categoria(Convert::ToString(cmb_filtrar->Text)); }
private: System::Void Btn_mais_caro_Click(System::Object^ sender, System::EventArgs^ e)       { encontrar_mais_caros(); }

private: System::Void Rad_mostrar_tudo_CheckedChanged(System::Object^ sender, System::EventArgs^ e) { }
private: System::Void Rad_esconder_qtd_zeros_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Btn_qtd_zero_Click(System::Object^ sender, System::EventArgs^ e)        { atualizar_vista_qtd_zero(); }

private: System::Void Btn_filtrar_cat_chk_Click(System::Object^ sender, System::EventArgs^ e) { filtrar_categorias_chk(); }
private: System::Void Btn_media_Click(System::Object^ sender, System::EventArgs^ e)           { calcular_media(); }
};
}
