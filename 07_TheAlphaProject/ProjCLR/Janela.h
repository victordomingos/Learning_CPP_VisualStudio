#pragma once
using namespace System;
using namespace System::Windows::Forms;

ref class Janela
{

public: void alternar_painel_lateral(ListBox^ listBox1, DataGridView^ dataGridView1, Button^ btn_painel)
{
    int w = listBox1->Width + 8;

    if (listBox1->Visible)
    {
        listBox1->Visible = false;
        dataGridView1->Width += w;
        btn_painel->Text = "Mostrar Painel";
    }
    else
    {
        dataGridView1->Width = dataGridView1->Width - w;
        listBox1->Visible = true;
        btn_painel->Text = "Ocultar Painel";
    }
}


public: void mostrar_painel_lateral(ListBox^ listBox1, DataGridView^ dataGridView1, Button^ btn_painel)
{
    if (listBox1->Visible == false)
        alternar_painel_lateral(listBox1, dataGridView1, btn_painel);
}



};

