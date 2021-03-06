#pragma once
#include <math.h>
#include "GeradorAvaliacoes.h"
#include "Janela.h"
#include "Tabela.h"
#include "Acerca.h"


namespace ProjCLR {

	using namespace System;
    using namespace System::IO;
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
        GeradorAvaliacoes^ ga = gcnew GeradorAvaliacoes();
        Tabela^ tabela = gcnew Tabela();
    private: System::Windows::Forms::GroupBox^ groupBox3;
    private: System::Windows::Forms::RadioButton^ radio_todos;
    private: System::Windows::Forms::RadioButton^ radio_f;
    private: System::Windows::Forms::RadioButton^ radio_m;
    private: System::Windows::Forms::Label^ lbl_freguesia_prod;
    private: System::Windows::Forms::TextBox^ txt_freg_cp;

    private: System::Windows::Forms::DataGridView^ dataGridView2;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome_copia;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ localidade_copia;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ genero_copia;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ estado_copia;




             Janela^ janela = gcnew Janela();

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
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::GroupBox^ groupBox1;



    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ btn_copiar;

    private: System::Windows::Forms::Button^ btn_painel;



    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ delegadoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ estat�sticasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ajudaToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ acercaToolStripMenuItem;

    private: System::Windows::Forms::ToolStripMenuItem^ identificarOMaisVelhoToolStripMenuItem;
    private: System::Windows::Forms::TextBox^ txt_freguesia;
    private: System::Windows::Forms::Button^ btn_masculino;

    private: System::Windows::Forms::GroupBox^ groupBox2;


    private: System::Windows::Forms::ToolStripMenuItem^ visualiza��oToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarSeletorDeLinhasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarColunaDelegadoToolStripMenuItem;


    private: System::Windows::Forms::Button^ btn_feminino;
    private: System::Windows::Forms::ToolStripMenuItem^ novoDelegadoSortearToolStripMenuItem;

    private: System::Windows::Forms::ToolStripMenuItem^ m�diaDeIdadesToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ferramentasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ inicializarTurmaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ adicionarColunasDeDisciplinasToolStripMenuItem;

    private: System::Windows::Forms::ToolStripMenuItem^ mostrarOcultarPainelLateralToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ gerarNotasToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ notasToolStripMenuItem;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Localidade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ AnoNasc;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ G�nero;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Delegado;
    private: System::Windows::Forms::StatusStrip^ statusStrip1;
    private: System::Windows::Forms::ToolStripStatusLabel^ lbl_status;
    private: System::Windows::Forms::ToolStripMenuItem^ guardarDelegadoToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ toolStripComboBox1;




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
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Localidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->AnoNasc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->G�nero = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Delegado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->btn_copiar = (gcnew System::Windows::Forms::Button());
            this->btn_painel = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->delegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->novoDelegadoSortearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->guardarDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->estat�sticasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->identificarOMaisVelhoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->m�diaDeIdadesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->notasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->visualiza��oToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarColunaDelegadoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->mostrarOcultarPainelLateralToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ferramentasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->inicializarTurmaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->adicionarColunasDeDisciplinasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->gerarNotasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ajudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->acercaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->txt_freguesia = (gcnew System::Windows::Forms::TextBox());
            this->btn_masculino = (gcnew System::Windows::Forms::Button());
            this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
            this->btn_feminino = (gcnew System::Windows::Forms::Button());
            this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
            this->lbl_status = (gcnew System::Windows::Forms::ToolStripStatusLabel());
            this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
            this->radio_todos = (gcnew System::Windows::Forms::RadioButton());
            this->radio_f = (gcnew System::Windows::Forms::RadioButton());
            this->radio_m = (gcnew System::Windows::Forms::RadioButton());
            this->lbl_freguesia_prod = (gcnew System::Windows::Forms::Label());
            this->txt_freg_cp = (gcnew System::Windows::Forms::TextBox());
            this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
            this->Nome_copia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->localidade_copia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->genero_copia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->estado_copia = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->groupBox1->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->groupBox2->SuspendLayout();
            this->statusStrip1->SuspendLayout();
            this->groupBox3->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
                this->Nome, this->Localidade,
                    this->AnoNasc, this->G�nero, this->Delegado
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 127);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(777, 309);
            this->dataGridView1->TabIndex = 0;
            this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::DataGridView1_CellContentClick);
            // 
            // Nome
            // 
            this->Nome->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome->FillWeight = 170;
            this->Nome->HeaderText = L"Nome";
            this->Nome->MinimumWidth = 150;
            this->Nome->Name = L"Nome";
            // 
            // Localidade
            // 
            this->Localidade->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Localidade->FillWeight = 80;
            this->Localidade->HeaderText = L"Localidade";
            this->Localidade->MinimumWidth = 75;
            this->Localidade->Name = L"Localidade";
            // 
            // AnoNasc
            // 
            this->AnoNasc->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->AnoNasc->FillWeight = 10;
            this->AnoNasc->HeaderText = L"Ano Nasc.";
            this->AnoNasc->MinimumWidth = 78;
            this->AnoNasc->Name = L"AnoNasc";
            this->AnoNasc->Width = 82;
            // 
            // G�nero
            // 
            this->G�nero->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
            this->G�nero->FillWeight = 80;
            this->G�nero->HeaderText = L"G�nero";
            this->G�nero->MinimumWidth = 45;
            this->G�nero->Name = L"G�nero";
            this->G�nero->Width = 67;
            // 
            // Delegado
            // 
            this->Delegado->FillWeight = 80;
            this->Delegado->HeaderText = L"Delegado";
            this->Delegado->MinimumWidth = 55;
            this->Delegado->Name = L"Delegado";
            this->Delegado->Visible = false;
            this->Delegado->Width = 55;
            // 
            // listBox1
            // 
            this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(783, 127);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(223, 511);
            this->listBox1->TabIndex = 1;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->button5);
            this->groupBox1->Controls->Add(this->button4);
            this->groupBox1->Location = System::Drawing::Point(524, 38);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(101, 83);
            this->groupBox1->TabIndex = 2;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Ferramentas";
            this->groupBox1->Visible = false;
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(7, 54);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(75, 23);
            this->button5->TabIndex = 4;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(7, 23);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 3;
            this->button4->Text = L"button4";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // btn_copiar
            // 
            this->btn_copiar->Location = System::Drawing::Point(201, 21);
            this->btn_copiar->Name = L"btn_copiar";
            this->btn_copiar->Size = System::Drawing::Size(51, 23);
            this->btn_copiar->TabIndex = 2;
            this->btn_copiar->Text = L"Copiar";
            this->btn_copiar->UseVisualStyleBackColor = true;
            this->btn_copiar->Click += gcnew System::EventHandler(this, &Form1::Btn_copiar_Click);
            // 
            // btn_painel
            // 
            this->btn_painel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->btn_painel->Location = System::Drawing::Point(897, 38);
            this->btn_painel->Name = L"btn_painel";
            this->btn_painel->Size = System::Drawing::Size(99, 23);
            this->btn_painel->TabIndex = 1;
            this->btn_painel->Text = L"Mostrar Painel";
            this->btn_painel->UseVisualStyleBackColor = true;
            this->btn_painel->Click += gcnew System::EventHandler(this, &Form1::Btn_painel_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
                this->delegadoToolStripMenuItem,
                    this->estat�sticasToolStripMenuItem, this->visualiza��oToolStripMenuItem, this->ferramentasToolStripMenuItem, this->ajudaToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(1008, 24);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // delegadoToolStripMenuItem
            // 
            this->delegadoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->novoDelegadoSortearToolStripMenuItem,
                    this->guardarDelegadoToolStripMenuItem, this->toolStripComboBox1
            });
            this->delegadoToolStripMenuItem->Name = L"delegadoToolStripMenuItem";
            this->delegadoToolStripMenuItem->Size = System::Drawing::Size(69, 20);
            this->delegadoToolStripMenuItem->Text = L"Delegado";
            // 
            // novoDelegadoSortearToolStripMenuItem
            // 
            this->novoDelegadoSortearToolStripMenuItem->Name = L"novoDelegadoSortearToolStripMenuItem";
            this->novoDelegadoSortearToolStripMenuItem->Size = System::Drawing::Size(204, 22);
            this->novoDelegadoSortearToolStripMenuItem->Text = L"Novo Delegado (Sortear)";
            this->novoDelegadoSortearToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::NovoDelegadoSortearToolStripMenuItem_Click);
            // 
            // guardarDelegadoToolStripMenuItem
            // 
            this->guardarDelegadoToolStripMenuItem->Name = L"guardarDelegadoToolStripMenuItem";
            this->guardarDelegadoToolStripMenuItem->Size = System::Drawing::Size(204, 22);
            this->guardarDelegadoToolStripMenuItem->Text = L"Guardar Delegado";
            this->guardarDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GuardarDelegadoToolStripMenuItem_Click);
            // 
            // toolStripComboBox1
            // 
            this->toolStripComboBox1->Name = L"toolStripComboBox1";
            this->toolStripComboBox1->Size = System::Drawing::Size(204, 22);
            this->toolStripComboBox1->Text = L"Recuperar Delegado";
            this->toolStripComboBox1->Click += gcnew System::EventHandler(this, &Form1::ToolStripComboBox1_Click);
            // 
            // estat�sticasToolStripMenuItem
            // 
            this->estat�sticasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->identificarOMaisVelhoToolStripMenuItem,
                    this->m�diaDeIdadesToolStripMenuItem, this->notasToolStripMenuItem
            });
            this->estat�sticasToolStripMenuItem->Name = L"estat�sticasToolStripMenuItem";
            this->estat�sticasToolStripMenuItem->Size = System::Drawing::Size(76, 20);
            this->estat�sticasToolStripMenuItem->Text = L"Estat�sticas";
            // 
            // identificarOMaisVelhoToolStripMenuItem
            // 
            this->identificarOMaisVelhoToolStripMenuItem->Name = L"identificarOMaisVelhoToolStripMenuItem";
            this->identificarOMaisVelhoToolStripMenuItem->Size = System::Drawing::Size(197, 22);
            this->identificarOMaisVelhoToolStripMenuItem->Text = L"Identificar o mais velho";
            this->identificarOMaisVelhoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::IdentificarOMaisVelhoToolStripMenuItem_Click);
            // 
            // m�diaDeIdadesToolStripMenuItem
            // 
            this->m�diaDeIdadesToolStripMenuItem->Name = L"m�diaDeIdadesToolStripMenuItem";
            this->m�diaDeIdadesToolStripMenuItem->Size = System::Drawing::Size(197, 22);
            this->m�diaDeIdadesToolStripMenuItem->Text = L"M�dia de idades";
            this->m�diaDeIdadesToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::M�diaDeIdadesToolStripMenuItem_Click);
            // 
            // notasToolStripMenuItem
            // 
            this->notasToolStripMenuItem->Name = L"notasToolStripMenuItem";
            this->notasToolStripMenuItem->Size = System::Drawing::Size(197, 22);
            this->notasToolStripMenuItem->Text = L"Notas";
            this->notasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::NotasToolStripMenuItem_Click);
            // 
            // visualiza��oToolStripMenuItem
            // 
            this->visualiza��oToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->mostrarToolStripMenuItem,
                    this->mostrarOcultarSeletorDeLinhasToolStripMenuItem, this->mostrarOcultarColunaDelegadoToolStripMenuItem, this->mostrarOcultarPainelLateralToolStripMenuItem
            });
            this->visualiza��oToolStripMenuItem->Name = L"visualiza��oToolStripMenuItem";
            this->visualiza��oToolStripMenuItem->Size = System::Drawing::Size(35, 20);
            this->visualiza��oToolStripMenuItem->Text = L"Ver";
            // 
            // mostrarToolStripMenuItem
            // 
            this->mostrarToolStripMenuItem->Name = L"mostrarToolStripMenuItem";
            this->mostrarToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarToolStripMenuItem->Text = L"Mostrar/Ocultar Linha de Introdu��o";
            this->mostrarToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarToolStripMenuItem_Click);
            // 
            // mostrarOcultarSeletorDeLinhasToolStripMenuItem
            // 
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Name = L"mostrarOcultarSeletorDeLinhasToolStripMenuItem";
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Text = L"Mostrar/Ocultar Coluna de Sele��o de Linhas";
            this->mostrarOcultarSeletorDeLinhasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarSeletorDeLinhasToolStripMenuItem_Click);
            // 
            // mostrarOcultarColunaDelegadoToolStripMenuItem
            // 
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Name = L"mostrarOcultarColunaDelegadoToolStripMenuItem";
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Text = L"Mostrar/Ocultar Coluna \"Delegado\"";
            this->mostrarOcultarColunaDelegadoToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarColunaDelegadoToolStripMenuItem_Click);
            // 
            // mostrarOcultarPainelLateralToolStripMenuItem
            // 
            this->mostrarOcultarPainelLateralToolStripMenuItem->Name = L"mostrarOcultarPainelLateralToolStripMenuItem";
            this->mostrarOcultarPainelLateralToolStripMenuItem->Size = System::Drawing::Size(312, 22);
            this->mostrarOcultarPainelLateralToolStripMenuItem->Text = L"Mostrar/Ocultar Painel Lateral";
            this->mostrarOcultarPainelLateralToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::MostrarOcultarPainelLateralToolStripMenuItem_Click);
            // 
            // ferramentasToolStripMenuItem
            // 
            this->ferramentasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->inicializarTurmaToolStripMenuItem,
                    this->adicionarColunasDeDisciplinasToolStripMenuItem, this->gerarNotasToolStripMenuItem
            });
            this->ferramentasToolStripMenuItem->Name = L"ferramentasToolStripMenuItem";
            this->ferramentasToolStripMenuItem->Size = System::Drawing::Size(84, 20);
            this->ferramentasToolStripMenuItem->Text = L"Ferramentas";
            this->ferramentasToolStripMenuItem->Visible = false;
            // 
            // inicializarTurmaToolStripMenuItem
            // 
            this->inicializarTurmaToolStripMenuItem->Name = L"inicializarTurmaToolStripMenuItem";
            this->inicializarTurmaToolStripMenuItem->Size = System::Drawing::Size(246, 22);
            this->inicializarTurmaToolStripMenuItem->Text = L"Inicializar Turma";
            this->inicializarTurmaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::InicializarTurmaToolStripMenuItem_Click);
            // 
            // adicionarColunasDeDisciplinasToolStripMenuItem
            // 
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Name = L"adicionarColunasDeDisciplinasToolStripMenuItem";
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Size = System::Drawing::Size(246, 22);
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Text = L"Adicionar Colunas de Disciplinas";
            this->adicionarColunasDeDisciplinasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AdicionarColunasDeDisciplinasToolStripMenuItem_Click);
            // 
            // gerarNotasToolStripMenuItem
            // 
            this->gerarNotasToolStripMenuItem->Name = L"gerarNotasToolStripMenuItem";
            this->gerarNotasToolStripMenuItem->Size = System::Drawing::Size(246, 22);
            this->gerarNotasToolStripMenuItem->Text = L"Gerar Notas";
            this->gerarNotasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::GerarNotasToolStripMenuItem_Click);
            // 
            // ajudaToolStripMenuItem
            // 
            this->ajudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->acercaToolStripMenuItem });
            this->ajudaToolStripMenuItem->Name = L"ajudaToolStripMenuItem";
            this->ajudaToolStripMenuItem->Size = System::Drawing::Size(50, 20);
            this->ajudaToolStripMenuItem->Text = L"Ajuda";
            // 
            // acercaToolStripMenuItem
            // 
            this->acercaToolStripMenuItem->Name = L"acercaToolStripMenuItem";
            this->acercaToolStripMenuItem->Size = System::Drawing::Size(119, 22);
            this->acercaToolStripMenuItem->Text = L"Acerca...";
            this->acercaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::AcercaToolStripMenuItem_Click);
            // 
            // txt_freguesia
            // 
            this->txt_freguesia->Location = System::Drawing::Point(8, 23);
            this->txt_freguesia->Name = L"txt_freguesia";
            this->txt_freguesia->Size = System::Drawing::Size(202, 20);
            this->txt_freguesia->TabIndex = 4;
            this->txt_freguesia->Leave += gcnew System::EventHandler(this, &Form1::Btn_freguesia_Click);
            // 
            // btn_masculino
            // 
            this->btn_masculino->Location = System::Drawing::Point(53, 50);
            this->btn_masculino->Name = L"btn_masculino";
            this->btn_masculino->Size = System::Drawing::Size(75, 23);
            this->btn_masculino->TabIndex = 5;
            this->btn_masculino->Text = L"Masculino";
            this->btn_masculino->UseVisualStyleBackColor = true;
            this->btn_masculino->Click += gcnew System::EventHandler(this, &Form1::Btn_freguesia_Click);
            // 
            // groupBox2
            // 
            this->groupBox2->Controls->Add(this->btn_feminino);
            this->groupBox2->Controls->Add(this->txt_freguesia);
            this->groupBox2->Controls->Add(this->btn_masculino);
            this->groupBox2->Location = System::Drawing::Point(12, 38);
            this->groupBox2->Name = L"groupBox2";
            this->groupBox2->Size = System::Drawing::Size(216, 83);
            this->groupBox2->TabIndex = 6;
            this->groupBox2->TabStop = false;
            this->groupBox2->Text = L"Pesquisar por localidade/g�nero";
            // 
            // btn_feminino
            // 
            this->btn_feminino->Location = System::Drawing::Point(135, 50);
            this->btn_feminino->Name = L"btn_feminino";
            this->btn_feminino->Size = System::Drawing::Size(75, 23);
            this->btn_feminino->TabIndex = 6;
            this->btn_feminino->Text = L"Feminino";
            this->btn_feminino->UseVisualStyleBackColor = true;
            this->btn_feminino->Click += gcnew System::EventHandler(this, &Form1::Btn_feminino_Click);
            // 
            // statusStrip1
            // 
            this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->lbl_status });
            this->statusStrip1->Location = System::Drawing::Point(0, 639);
            this->statusStrip1->Name = L"statusStrip1";
            this->statusStrip1->Size = System::Drawing::Size(1008, 22);
            this->statusStrip1->TabIndex = 7;
            this->statusStrip1->Text = L"statusStrip1";
            // 
            // lbl_status
            // 
            this->lbl_status->Name = L"lbl_status";
            this->lbl_status->Size = System::Drawing::Size(0, 17);
            // 
            // groupBox3
            // 
            this->groupBox3->Controls->Add(this->radio_todos);
            this->groupBox3->Controls->Add(this->radio_f);
            this->groupBox3->Controls->Add(this->radio_m);
            this->groupBox3->Controls->Add(this->btn_copiar);
            this->groupBox3->Controls->Add(this->lbl_freguesia_prod);
            this->groupBox3->Controls->Add(this->txt_freg_cp);
            this->groupBox3->Location = System::Drawing::Point(246, 38);
            this->groupBox3->Name = L"groupBox3";
            this->groupBox3->Size = System::Drawing::Size(263, 83);
            this->groupBox3->TabIndex = 8;
            this->groupBox3->TabStop = false;
            this->groupBox3->Text = L"Copiar por crit�rio";
            // 
            // radio_todos
            // 
            this->radio_todos->AutoSize = true;
            this->radio_todos->Checked = true;
            this->radio_todos->Location = System::Drawing::Point(142, 51);
            this->radio_todos->Name = L"radio_todos";
            this->radio_todos->Size = System::Drawing::Size(55, 17);
            this->radio_todos->TabIndex = 4;
            this->radio_todos->TabStop = true;
            this->radio_todos->Text = L"Todos";
            this->radio_todos->UseVisualStyleBackColor = true;
            // 
            // radio_f
            // 
            this->radio_f->AutoSize = true;
            this->radio_f->Location = System::Drawing::Point(105, 51);
            this->radio_f->Name = L"radio_f";
            this->radio_f->Size = System::Drawing::Size(31, 17);
            this->radio_f->TabIndex = 3;
            this->radio_f->Text = L"F";
            this->radio_f->UseVisualStyleBackColor = true;
            // 
            // radio_m
            // 
            this->radio_m->AutoSize = true;
            this->radio_m->Location = System::Drawing::Point(65, 51);
            this->radio_m->Name = L"radio_m";
            this->radio_m->Size = System::Drawing::Size(34, 17);
            this->radio_m->TabIndex = 2;
            this->radio_m->Text = L"M";
            this->radio_m->UseVisualStyleBackColor = true;
            // 
            // lbl_freguesia_prod
            // 
            this->lbl_freguesia_prod->AutoSize = true;
            this->lbl_freguesia_prod->Location = System::Drawing::Point(4, 26);
            this->lbl_freguesia_prod->Name = L"lbl_freguesia_prod";
            this->lbl_freguesia_prod->Size = System::Drawing::Size(53, 13);
            this->lbl_freguesia_prod->TabIndex = 1;
            this->lbl_freguesia_prod->Text = L"Freguesia";
            this->lbl_freguesia_prod->Click += gcnew System::EventHandler(this, &Form1::Lbl_freguesia_prod_Click);
            // 
            // txt_freg_cp
            // 
            this->txt_freg_cp->Location = System::Drawing::Point(63, 23);
            this->txt_freg_cp->Name = L"txt_freg_cp";
            this->txt_freg_cp->Size = System::Drawing::Size(132, 20);
            this->txt_freg_cp->TabIndex = 0;
            // 
            // dataGridView2
            // 
            this->dataGridView2->AllowUserToAddRows = false;
            this->dataGridView2->AllowUserToDeleteRows = false;
            this->dataGridView2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Nome_copia,
                    this->localidade_copia, this->genero_copia, this->estado_copia
            });
            this->dataGridView2->Location = System::Drawing::Point(0, 442);
            this->dataGridView2->Name = L"dataGridView2";
            this->dataGridView2->ReadOnly = true;
            this->dataGridView2->RowHeadersVisible = false;
            this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView2->Size = System::Drawing::Size(777, 194);
            this->dataGridView2->TabIndex = 9;
            // 
            // Nome_copia
            // 
            this->Nome_copia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->Nome_copia->HeaderText = L"Nome";
            this->Nome_copia->Name = L"Nome_copia";
            this->Nome_copia->ReadOnly = true;
            // 
            // localidade_copia
            // 
            this->localidade_copia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->localidade_copia->HeaderText = L"Localidade";
            this->localidade_copia->Name = L"localidade_copia";
            this->localidade_copia->ReadOnly = true;
            // 
            // genero_copia
            // 
            this->genero_copia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->genero_copia->HeaderText = L"G�nero";
            this->genero_copia->Name = L"genero_copia";
            this->genero_copia->ReadOnly = true;
            // 
            // estado_copia
            // 
            this->estado_copia->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
            this->estado_copia->HeaderText = L"Estado";
            this->estado_copia->Name = L"estado_copia";
            this->estado_copia->ReadOnly = true;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1008, 661);
            this->Controls->Add(this->dataGridView2);
            this->Controls->Add(this->groupBox3);
            this->Controls->Add(this->statusStrip1);
            this->Controls->Add(this->groupBox2);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->btn_painel);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->MinimumSize = System::Drawing::Size(1000, 640);
            this->Name = L"Form1";
            this->Text = L"Victor Domingos";
            this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->groupBox1->ResumeLayout(false);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->groupBox2->ResumeLayout(false);
            this->groupBox2->PerformLayout();
            this->statusStrip1->ResumeLayout(false);
            this->statusStrip1->PerformLayout();
            this->groupBox3->ResumeLayout(false);
            this->groupBox3->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        private: void on_form_load()
        {
            init_grid();
            janela->alternar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);
            tabela->gerar_colunas(dataGridView1);
            
			
			for (size_t i = 2; i < dataGridView1->Columns->Count; i++)
				dataGridView1->Columns[i]->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
			
            ga->gerar_notas(dataGridView1);
            tabela->atualizar_tabela(dataGridView1, lbl_status);
        }
    private: void init_grid()
    {
		dataGridView1->Rows->Clear();
        dataGridView1->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
        dataGridView1->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
        dataGridView1->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
        dataGridView1->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
        dataGridView1->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
        dataGridView1->Rows->Add("Daniel Silva Ferraz", "S. V�tor", 1999, "M");
        dataGridView1->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
        dataGridView1->Rows->Add("Fernanda Maria Silva", "S. V�tor", 2002, "F");
        dataGridView1->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
        dataGridView1->Rows->Add("Gilherme Alexandre Barros", "Lama��es", 2001, "M");
        dataGridView1->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
        dataGridView1->Rows->Add("Jos� Manuel Carvalho", "Gualtar", 1997, "M");
        dataGridView1->Rows->Add("Jos� Alberto Gomes", "Maximinos", 2001, "M");
        dataGridView1->Rows->Add("Maria Silv�ria Bastos", "Maximinos", 1997, "F");
        dataGridView1->Rows->Add("Anabela Bastos Torres", "S. V�tor", 1996, "F");
        dataGridView1->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
        dataGridView1->Rows->Add("Ot�vio Ferreira", "Maximinos", 1999, "M");
        dataGridView1->Rows->Add("Silv�rio Silva Teixeira", "Lama��es", 2001, "M");
        dataGridView1->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
        dataGridView1->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");
    }
    
    private: void identificar_mais_velho()
    {
        String^ nome = dataGridView1->Rows[0]->Cells["Nome"]->Value->ToString();
        String^ resultado = nome;
        
        int ano_mais_velho = Convert::ToInt16(dataGridView1->Rows[0]->Cells["AnoNasc"]->Value);
        int ano_linha = ano_mais_velho;
        int n_mais_velhos = 0;
        
        int n_linhas = dataGridView1->Rows->Count;
        // Encontrar o ano mais antigo
        for (size_t i = 1; i < n_linhas; i++)
        {
            ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells["AnoNasc"]->Value);

            if (ano_mais_velho > ano_linha)
                ano_mais_velho = ano_linha;
        }

        janela->mostrar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);
        dataGridView1->ClearSelection();
        listBox1->Items->Clear();
        listBox1->Items->Add("Elemento(s) mais velho(s):");
        listBox1->Items->Add("");
        // Recolher todos os elementos com o ano igual ao mais antigo
        for (size_t i = 1; i < n_linhas; i++)
        {
            ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells["AnoNasc"]->Value);

            if (ano_mais_velho == ano_linha)
            {
                nome = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
                resultado = nome + ", " + ano_mais_velho;               
                listBox1->Items->Add(resultado);
                dataGridView1->Rows[i]->Selected = true;
                n_mais_velhos++;
            }
        }
        listBox1->Items->Add("");

        listBox1->Items->Add("Encontrado(s) " + Convert::ToString(n_mais_velhos) + " elemento(s).");


    }


    private: void procurar_por_localidade(String^ genero)
    {
        String^ localidade = txt_freguesia->Text;
        String^ genero_linha = "M";
        String^ nome_linha;
        String^ localidade_linha;

        array<String^>^ resultados = gcnew array<String^>(100) {""};
        int linhas = -1;
        bool linha_intro = dataGridView1->AllowUserToAddRows;
        dataGridView1->AllowUserToAddRows = false;

        dataGridView1->ClearSelection();
        listBox1->Items->Clear();
        janela->mostrar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);

        for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
        {
            nome_linha = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
            localidade_linha = dataGridView1->Rows[i]->Cells["Localidade"]->Value->ToString();
            genero_linha = dataGridView1->Rows[i]->Cells["G�nero"]->Value->ToString()->ToUpper();

            if (genero == genero_linha && localidade_linha->ToUpper() == localidade->ToUpper())
            {
                linhas++;
                resultados[linhas] = nome_linha + ", " + localidade_linha;
                dataGridView1->Rows[i]->Selected = true;
                //MessageBox::Show(Convert::ToString(resultados[i]));

            }
            
        }
        

        if (localidade == "")
        {
            listBox1->Items->Add(" - N�o foi indicada uma localidade.");
        }
        else
        {
            listBox1->Items->Add("Elementos do g�nero masculino");
            listBox1->Items->Add("em " + localidade + ":");
            listBox1->Items->Add(" ");

            if (linhas == -1)
            {
                listBox1->Items->Add(" - N�o foram encontrados elementos.");
            }
            else
            {
                for (int i = 0; i <= linhas; i++)
                {

                    listBox1->Items->Add(resultados[i]);
                }
                listBox1->Items->Add(" ");
                listBox1->Items->Add("Total: " + (linhas+1));
            }
        }
        dataGridView1->AllowUserToAddRows = linha_intro;

    }

      
    
    private: void sortear_delegado()
    {
        Random^ r = gcnew Random(); // inicializar gerador de numeros aleat�rios
        int n;
        
        // Como vamos usar o n�mero de linhas no sorteio, retiramos a linha de introdu��o de registos
        bool linha_intro = dataGridView1->AllowUserToAddRows;
        dataGridView1->AllowUserToAddRows = false;

        n = r->Next(0, dataGridView1->Rows->Count); // gerar n�mero aleat�rio
        
        // Limpar c�lulas da coluna delegado e assinalar o novo delegado.
        for (size_t i = 0; i < dataGridView1->Rows->Count; i++)
        {
            if (i==n)
                dataGridView1->Rows[i]->Cells["Delegado"]->Value = "X";
            else
                dataGridView1->Rows[i]->Cells["Delegado"]->Value = "";

        }

        // Repor o estado original da linha de introdu��o de registos.
        dataGridView1->AllowUserToAddRows = linha_intro;
        dataGridView1->Columns["Delegado"]->Visible = true;
    }



private: void calcular_media_idades()
{
    int idades[100];
    int n, idade_linha, ano_linha;
    int idade_max, idade_min;
    double soma = 0; 
    double idade_media = 0;
    double idade_desv_padrao = 0;
    
    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n = dataGridView1->Rows->Count;

    for (size_t i = 0; i < n; i++)
    {
        ano_linha = Convert::ToInt16(dataGridView1->Rows[i]->Cells["AnoNasc"]->Value);
        idade_linha = System::DateTime::Now.Year - ano_linha;
        idades[i] = idade_linha;
    }

    // Calcular idade m�dia, min e max
    idade_max = idade_min = idades[0];
    for (size_t i = 0; i < n; i++)
    {
        if (idade_max < idades[i])  idade_max = idades[i];
        if (idade_min > idades[i])  idade_min = idades[i];
        
        soma += idades[i];
    }
    idade_media = soma / n;

    // Calcular desvio-padr�o das idades
    soma = 0;
    for (size_t i = 0; i < n; i++)
        soma += pow((idades[i]-idade_media), 2);
    
    idade_desv_padrao = sqrt(soma / n);
    
    // Mostrar resultados
    listBox1->Items->Clear();
    janela->mostrar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);
    listBox1->Items->Add("Idade do mais velho: " + Convert::ToString(idade_max) + " anos");
    listBox1->Items->Add("Idade do mais novo: " + Convert::ToString(idade_min) + " anos");
    listBox1->Items->Add("");
    listBox1->Items->Add("M�dia de idades: " + Convert::ToString(idade_media) + " anos");
    listBox1->Items->Add("Desv. Padr�o: " + Convert::ToString(idade_desv_padrao));

    dataGridView1->AllowUserToAddRows = linha_intro;
}


private: void stats_notas()
{
    Double notas[30][20] = { -1 };
    int n_linhas, n_cols, n_disciplinas;

    Double nota_max, nota_min;
    Double soma = 0.0;
    Double nota_media = 0.0;
    Double nota_desv_padrao = 0.0;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_linhas = dataGridView1->Rows->Count;
    n_cols = dataGridView1->ColumnCount-3;
    n_disciplinas = dataGridView1->ColumnCount - 8;


    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 5; j < n_cols; j++)
        {
            if (dataGridView1->Rows[i]->Cells[j]->Value == "")
                notas[i][j] = 0.0;
            else
                notas[i][j] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
        }
    }

    // Calcular nota m�dia, min e max
    nota_max = nota_min = notas[0][5];
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 5; j < n_cols; j++)
        {
            if (nota_max < notas[i][j])  nota_max = notas[i][j];
            if (nota_min > notas[i][j])  nota_min = notas[i][j];

            soma += notas[i][j];
        }
    }
    nota_media = soma / (n_linhas * n_disciplinas);

    // Calcular desvio-padr�o das notas
    soma = 0;
    for (int i = 0; i < n_linhas; i++)
    {
        for (int j = 5; j < n_cols; j++)
            soma += pow((notas[i][j] - nota_media), 2);
    }
    nota_desv_padrao = sqrt(soma / (n_linhas * n_disciplinas));

    // Mostrar resultados
    listBox1->Items->Clear();
    janela->mostrar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);
    listBox1->Items->Add("Nota m�xima: " + Convert::ToString(nota_max));
    listBox1->Items->Add("Nota m�nima: " + Convert::ToString(nota_min));
    listBox1->Items->Add("");
    listBox1->Items->Add("M�dia global de notas: " + Convert::ToString(nota_media));
    listBox1->Items->Add("Desv. Padr�o: " + Convert::ToString(nota_desv_padrao));

    dataGridView1->AllowUserToAddRows = linha_intro;
}



         // Guardar o nome do delegado num ficheiro de texto
private: void guardar_delegado()
{
    String^ filename = "_Projeto_Alpha__delegado.txt";
    StreamWriter^ fp = gcnew StreamWriter(filename);
    String^ delegado = "";
    int n_formandos;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    for (int i = 0; i < n_formandos && delegado==""; i++)
    {
        if (dataGridView1->Rows[i]->Cells["Delegado"]->Value == "X")
            delegado = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
    }

    fp->WriteLine(delegado);
    fp->Close();
}


         // Recuperar o nome do delegado a partir de um ficheiro de texto
private: void recuperar_delegado()
{

    String^ filename = "_Projeto_Alpha__delegado.txt";
    StreamReader^ fp;
    String^ delegado;
    int n_formandos;

    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    try
    {
        fp = gcnew StreamReader(filename);
    }
    catch (FileNotFoundException^)
    {
        MessageBox::Show("N�o h� nenhum delegado guardado.");
        return;
    }
    delegado = fp->ReadLine();
    

    if (delegado == "" || delegado == nullptr)
        MessageBox::Show("N�o h� nenhum delegado guardado.");

    for (int i = 0; i < n_formandos; i++)
    {
        if (dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString() == delegado)
            dataGridView1->Rows[i]->Cells["Delegado"]->Value = "X";
        else
            dataGridView1->Rows[i]->Cells["Delegado"]->Value = "";
    }

    fp->Close();
    dataGridView1->Columns["Delegado"]->Visible = true;
}

private: void status_formando()
{
    String^ status_text;
    String^ media;
    String^ estado;
    String^ nome;
    DataGridViewSelectedRowCollection^ selected = dataGridView1->SelectedRows;
    int n_selected = selected->Count;

    if (n_selected == 1)
    {
        nome = Convert::ToString(selected[0]->Cells["Nome"]->Value);
        media = Convert::ToString(selected[0]->Cells["media"]->Value);
        estado = Convert::ToString(selected[0]->Cells["estado"]->Value);
        status_text = nome + " - " + estado + " (M�dia: " + media + ")";
        lbl_status->Text = status_text;
    }
    else
    {
        status_text = Convert::ToString(n_selected) + " formandos selecionados.";
        lbl_status->Text = status_text;
    }
}



private: void CopiarDados()
{
    bool linha_intro = dataGridView1->AllowUserToAddRows;
    dataGridView1->AllowUserToAddRows = false;
    int n_formandos = dataGridView1->Rows->Count;
    dataGridView1->AllowUserToAddRows = linha_intro;

    // Dados com origem na grid1 a escrever na grid 2
    String^ nome_grid;
    String^ localidade_grid;
    String^ genero_grid;
    String^ estado_grid;

    // Dados do formul�rio de pesquisa
    String^ genero;
    String^ localidade;
    
    dataGridView2->Rows->Clear();

    localidade = txt_freg_cp->Text->ToUpper();
    if (localidade == "")
    {
        MessageBox::Show("N�o foi indicada uma localidade.");
        txt_freg_cp->Focus();
        return;
    }
  

    if (radio_m->Checked)
        genero = "M";
    else if (radio_f->Checked)
        genero = "F";
    else 
        genero = "Todos";
    

    for (int i = 0; i < n_formandos; i++)
    {
        genero_grid = dataGridView1->Rows[i]->Cells["G�nero"]->Value->ToString();
        localidade_grid = dataGridView1->Rows[i]->Cells["Localidade"]->Value->ToString()->ToUpper();

        if ((genero == "Todos" || genero == genero_grid ) && localidade == localidade_grid)
        {
            nome_grid = dataGridView1->Rows[i]->Cells["Nome"]->Value->ToString();
            localidade_grid = dataGridView1->Rows[i]->Cells["Localidade"]->Value->ToString();
            genero_grid = dataGridView1->Rows[i]->Cells["G�nero"]->Value->ToString();
            estado_grid = dataGridView1->Rows[i]->Cells["Estado"]->Value->ToString();

            dataGridView2->Rows->Add(nome_grid, localidade_grid, genero_grid, estado_grid);
        }
    }

}

private: System::Void Btn_init_grid_Click(System::Object^ sender, System::EventArgs^ e) { init_grid(); }
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) { on_form_load(); }
private: System::Void ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) { identificar_mais_velho();  }
private: System::Void IdentificarOMaisVelhoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {identificar_mais_velho();}
private: System::Void Btn_freguesia_Click(System::Object^ sender, System::EventArgs^ e) { procurar_por_localidade("M"); }
private: System::Void Btn_feminino_Click(System::Object^ sender, System::EventArgs^ e) { procurar_por_localidade("F"); }
private: System::Void MostrarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { tabela->alternar_linha_introducao(dataGridView1); }
private: System::Void MostrarOcultarSeletorDeLinhasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { tabela->alternar_row_headers(dataGridView1); }
private: System::Void MostrarOcultarColunaDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {tabela->alternar_col_delegado(dataGridView1);}
private: System::Void NovoDelegadoSortearToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { sortear_delegado();}
private: System::Void M�diaDeIdadesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {calcular_media_idades();}
private: System::Void DataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) { status_formando(); }
private: System::Void InicializarTurmaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { init_grid();}
private: System::Void AdicionarColunasDeDisciplinasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { tabela->gerar_colunas(dataGridView1); }
private: System::Void MostrarOcultarPainelLateralToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {janela->alternar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);}
private: System::Void Btn_painel_Click(System::Object^ sender, System::EventArgs^ e) { janela->alternar_painel_lateral(listBox1, dataGridView1, dataGridView2, btn_painel);}

private: System::Void GerarNotasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{ 
    ga->gerar_notas(dataGridView1);
    tabela->atualizar_tabela(dataGridView1, lbl_status);
}

private: System::Void NotasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { stats_notas(); }
private: System::Void ToolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) { recuperar_delegado(); }
private: System::Void GuardarDelegadoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { guardar_delegado();}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) 
{ 
    ga->gerar_notas(dataGridView1);
    tabela->atualizar_tabela(dataGridView1, lbl_status);
}
private: System::Void AcercaToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { 
    
    ;

}
private: System::Void Lbl_freguesia_prod_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Btn_copiar_Click(System::Object^ sender, System::EventArgs^ e) { CopiarDados(); }
};
}
