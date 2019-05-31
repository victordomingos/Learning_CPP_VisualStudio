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
    private: System::Windows::Forms::ListBox^ listBox1;
    private: System::Windows::Forms::GroupBox^ groupBox1;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ btn_init_grid;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nome;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Localidade;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ano;
    private: System::Windows::Forms::DataGridViewTextBoxColumn^ Género;

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
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->listBox1 = (gcnew System::Windows::Forms::ListBox());
            this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->btn_init_grid = (gcnew System::Windows::Forms::Button());
            this->Nome = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Localidade = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Ano = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Género = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->groupBox1->SuspendLayout();
            this->SuspendLayout();
            // 
            // dataGridView1
            // 
            this->dataGridView1->AllowUserToAddRows = false;
            this->dataGridView1->AllowUserToDeleteRows = false;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Nome, this->Localidade,
                    this->Ano, this->Género
            });
            this->dataGridView1->Location = System::Drawing::Point(0, 157);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->ReadOnly = true;
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
            this->dataGridView1->Size = System::Drawing::Size(751, 563);
            this->dataGridView1->TabIndex = 0;
            // 
            // listBox1
            // 
            this->listBox1->FormattingEnabled = true;
            this->listBox1->Location = System::Drawing::Point(758, 157);
            this->listBox1->Name = L"listBox1";
            this->listBox1->Size = System::Drawing::Size(248, 563);
            this->listBox1->TabIndex = 1;
            // 
            // groupBox1
            // 
            this->groupBox1->Controls->Add(this->button9);
            this->groupBox1->Controls->Add(this->button8);
            this->groupBox1->Controls->Add(this->button7);
            this->groupBox1->Controls->Add(this->button6);
            this->groupBox1->Controls->Add(this->button5);
            this->groupBox1->Controls->Add(this->button4);
            this->groupBox1->Controls->Add(this->button3);
            this->groupBox1->Controls->Add(this->button2);
            this->groupBox1->Controls->Add(this->btn_init_grid);
            this->groupBox1->Location = System::Drawing::Point(12, 38);
            this->groupBox1->Name = L"groupBox1";
            this->groupBox1->Size = System::Drawing::Size(265, 113);
            this->groupBox1->TabIndex = 2;
            this->groupBox1->TabStop = false;
            this->groupBox1->Text = L"Ferramentas";
            // 
            // button9
            // 
            this->button9->Location = System::Drawing::Point(181, 79);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(75, 23);
            this->button9->TabIndex = 8;
            this->button9->Text = L"button9";
            this->button9->UseVisualStyleBackColor = true;
            // 
            // button8
            // 
            this->button8->Location = System::Drawing::Point(99, 79);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(75, 23);
            this->button8->TabIndex = 7;
            this->button8->Text = L"button8";
            this->button8->UseVisualStyleBackColor = true;
            // 
            // button7
            // 
            this->button7->Location = System::Drawing::Point(17, 79);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(75, 23);
            this->button7->TabIndex = 6;
            this->button7->Text = L"button7";
            this->button7->UseVisualStyleBackColor = true;
            // 
            // button6
            // 
            this->button6->Location = System::Drawing::Point(181, 50);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(75, 23);
            this->button6->TabIndex = 5;
            this->button6->Text = L"button6";
            this->button6->UseVisualStyleBackColor = true;
            // 
            // button5
            // 
            this->button5->Location = System::Drawing::Point(181, 20);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(75, 23);
            this->button5->TabIndex = 4;
            this->button5->Text = L"button5";
            this->button5->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Location = System::Drawing::Point(99, 50);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(75, 23);
            this->button4->TabIndex = 3;
            this->button4->Text = L"button4";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->Location = System::Drawing::Point(99, 20);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(75, 23);
            this->button3->TabIndex = 2;
            this->button3->Text = L"button3";
            this->button3->UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(17, 50);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(75, 23);
            this->button2->TabIndex = 1;
            this->button2->Text = L"button2";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // btn_init_grid
            // 
            this->btn_init_grid->Location = System::Drawing::Point(17, 20);
            this->btn_init_grid->Name = L"btn_init_grid";
            this->btn_init_grid->Size = System::Drawing::Size(75, 23);
            this->btn_init_grid->TabIndex = 0;
            this->btn_init_grid->Text = L"InitGrid";
            this->btn_init_grid->UseVisualStyleBackColor = true;
            this->btn_init_grid->Click += gcnew System::EventHandler(this, &Form1::Btn_init_grid_Click);
            // 
            // Nome
            // 
            this->Nome->HeaderText = L"Nome";
            this->Nome->Name = L"Nome";
            this->Nome->ReadOnly = true;
            // 
            // Localidade
            // 
            this->Localidade->HeaderText = L"Localidade";
            this->Localidade->Name = L"Localidade";
            this->Localidade->ReadOnly = true;
            // 
            // Ano
            // 
            this->Ano->HeaderText = L"Ano";
            this->Ano->Name = L"Ano";
            this->Ano->ReadOnly = true;
            // 
            // Género
            // 
            this->Género->HeaderText = L"Género";
            this->Género->Name = L"Género";
            this->Género->ReadOnly = true;
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1008, 721);
            this->Controls->Add(this->groupBox1);
            this->Controls->Add(this->listBox1);
            this->Controls->Add(this->dataGridView1);
            this->Name = L"Form1";
            this->Text = L"Form1";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->groupBox1->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
    private: void init_grid()
    {
        dataGridView1->Rows->Add("Ana Rita Cunha", "Maximinos", 1998, "F");
        dataGridView1->Rows->Add("Bela Costa Silva", "Lomar", 2002, "F");
        dataGridView1->Rows->Add("Carlos Alberto Costa", "Sequeira", 1999, "M");
        dataGridView1->Rows->Add("Carlos Daniel Ferreira", "Sequeira", 2001, "M");
        dataGridView1->Rows->Add("Daniel Bastos Gomes", "Lovios", 1998, "M");
        dataGridView1->Rows->Add("Daniel Silva Ferraz", "S. Vítor", 1999, "M");
        dataGridView1->Rows->Add("Elvira Gomes Pendes", "Maximinos", 2001, "F");
        dataGridView1->Rows->Add("Fernanda Maria Silva", "S. Vítor", 2002, "F");
        dataGridView1->Rows->Add("Fernando Gomes Barros", "Maximinos", 1999, "M");
        dataGridView1->Rows->Add("Gilherme Alexandre Barros", "Lamaçães", 2001, "M");
        dataGridView1->Rows->Add("Hilda Fonseca Silva", "S. Geraldo", 1999, "F");
        dataGridView1->Rows->Add("José Manuel Carvalho", "Gualtar", 1997, "M");
        dataGridView1->Rows->Add("José Alberto Gomes", "Maximinos", 2001, "M");
        dataGridView1->Rows->Add("Maria Silvéria Bastos", "Maximinos", 1997, "F");
        dataGridView1->Rows->Add("Anabela Bastos Torres", "S. Vítor", 1996, "F");
        dataGridView1->Rows->Add("Rui Vasco Santos", "Maximinos", 2002, "M");
        dataGridView1->Rows->Add("Otávio Ferreira", "Maximinos", 1999, "M");
        dataGridView1->Rows->Add("Silvério Silva Teixeira", "Lamaçães", 2001, "M");
        dataGridView1->Rows->Add("Teodoro Armando Matos", "Maximinos", 2002, "M");
        dataGridView1->Rows->Add("Zacarias Alexandre Sampaio", "Ferreiros", 1998, "M");
    }
    private: System::Void Btn_init_grid_Click(System::Object^ sender, System::EventArgs^ e) { init_grid(); }
};
}
