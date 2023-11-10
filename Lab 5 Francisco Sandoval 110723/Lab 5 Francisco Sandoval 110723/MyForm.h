#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Unidad.h"
#include "Pokemon.h"
namespace Lab5FranciscoSandoval110723 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ BtnCrearArchivo;
	protected:

	private: System::Windows::Forms::Button^ BtnAbrirArchivo;
	private: System::Windows::Forms::Button^ BtnLeerArchivo;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->BtnCrearArchivo = (gcnew System::Windows::Forms::Button());
			this->BtnAbrirArchivo = (gcnew System::Windows::Forms::Button());
			this->BtnLeerArchivo = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// BtnCrearArchivo
			// 
			this->BtnCrearArchivo->Location = System::Drawing::Point(51, 62);
			this->BtnCrearArchivo->Name = L"BtnCrearArchivo";
			this->BtnCrearArchivo->Size = System::Drawing::Size(109, 41);
			this->BtnCrearArchivo->TabIndex = 0;
			this->BtnCrearArchivo->Text = L"CrearArchivoNuevo";
			this->BtnCrearArchivo->UseVisualStyleBackColor = true;
			this->BtnCrearArchivo->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// BtnAbrirArchivo
			// 
			this->BtnAbrirArchivo->Location = System::Drawing::Point(206, 62);
			this->BtnAbrirArchivo->Name = L"BtnAbrirArchivo";
			this->BtnAbrirArchivo->Size = System::Drawing::Size(107, 41);
			this->BtnAbrirArchivo->TabIndex = 1;
			this->BtnAbrirArchivo->Text = L"AbrirArchivo";
			this->BtnAbrirArchivo->UseVisualStyleBackColor = true;
			this->BtnAbrirArchivo->Click += gcnew System::EventHandler(this, &MyForm::BtnAbrirArchivo_Click);
			// 
			// BtnLeerArchivo
			// 
			this->BtnLeerArchivo->Location = System::Drawing::Point(131, 118);
			this->BtnLeerArchivo->Name = L"BtnLeerArchivo";
			this->BtnLeerArchivo->Size = System::Drawing::Size(103, 41);
			this->BtnLeerArchivo->TabIndex = 2;
			this->BtnLeerArchivo->Text = L"LeerArchivo";
			this->BtnLeerArchivo->UseVisualStyleBackColor = true;
			this->BtnLeerArchivo->Click += gcnew System::EventHandler(this, &MyForm::BtnLeerArchivo_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(457, 82);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 41);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Ordenar por dex nacional";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(566, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 41);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Ordenar por nombre";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(675, 82);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 41);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Ordenar por generacion";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(945, 273);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->BtnLeerArchivo);
			this->Controls->Add(this->BtnAbrirArchivo);
			this->Controls->Add(this->BtnCrearArchivo);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		ListaDE<Unidad<String^>^>^ Unidades = gcnew ListaDE<Unidad<String^>^>();
		void CrearPokemones(ListaDE<Unidad<String^>^>^  Unidades) {
			try
			{
				// Cambia el nombre del archivo según sea necesario
				String^ filePath = "MapaInicial.txt";

				// Abre el archivo de texto
				StreamReader^ reader = gcnew StreamReader(filePath);

				// Lee el archivo línea por línea
				while (!reader->EndOfStream)
				{
					String^ line = reader->ReadLine();

					// Separa la línea utilizando la coma como delimitador
					array<String^>^ tokens = line->Split(',');

					// Imprime cada dato
					int i = 0;
					int NN = 0;
					String^ Nombre = " ";
					int Gen = 0;

					for each (String ^ token in tokens)
					{
						if (i == 0) {
							NN = Convert::ToInt32(token->Trim());
						}
						if (i == 1) {
							Nombre = token->Trim();

						}
						if (i == 2) {
							Gen = Convert::ToInt32(token->Trim());
						}
						Unidad<String^>^ newUnidad = gcnew Unidad<String^>(NN,Nombre,Gen);
					}

				}

				reader->Close();
			}
			catch (Exception^ ex)
			{
				Console::WriteLine("Error: " + ex->Message);
			}
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		try {
			// Utilizamos StreamWriter para crear el archivo y escribir en él
			StreamWriter^ writer = gcnew StreamWriter(fileName);



			// Cierra el StreamWriter
			writer->Close();

			MessageBox::Show("Archivo MapaInicial creado exitosamente.", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);


		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al crear el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void BtnAbrirArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName = "MapaInicial.txt"; // Nombre del archivo
		try {
			// Abre el archivo con el programa predeterminado
			Process::Start(fileName);
			
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error al abrir el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void BtnLeerArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearPokemones(Unidades);
}
	   
};
}
