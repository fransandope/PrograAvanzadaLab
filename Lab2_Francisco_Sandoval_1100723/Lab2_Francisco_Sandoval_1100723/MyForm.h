#pragma once
#include "iostream"
#include "string"


namespace Lab2FranciscoSandoval1100723 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;
	using namespace System::Drawing;
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
	private: System::Windows::Forms::Button^ Ej1;
	protected:
	private: System::Windows::Forms::Button^ Ej2;
	private: System::Windows::Forms::Button^ Ej3;
	private: System::Windows::Forms::Button^ Salir;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ Mult1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ Mult2;
	private: System::Windows::Forms::Label^ Resultado1;
	private: System::Windows::Forms::Button^ Calcular1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ Convertir;
	private: System::Windows::Forms::Label^ Conversion;
	private: System::Windows::Forms::TextBox^ BaseFinal;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ BaseOrigen;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ NumBase;
	private: System::Windows::Forms::Button^ BtnCrearArchivo;
	private: System::Windows::Forms::Button^ BtnVerificar;
	private: System::Windows::Forms::Label^ NoPalindromos;
	private: System::Windows::Forms::Timer^ Timer;
	private: System::Windows::Forms::Label^ label8;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->Ej1 = (gcnew System::Windows::Forms::Button());
			this->Ej2 = (gcnew System::Windows::Forms::Button());
			this->Ej3 = (gcnew System::Windows::Forms::Button());
			this->Salir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Mult1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Mult2 = (gcnew System::Windows::Forms::TextBox());
			this->Resultado1 = (gcnew System::Windows::Forms::Label());
			this->Calcular1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Convertir = (gcnew System::Windows::Forms::Button());
			this->Conversion = (gcnew System::Windows::Forms::Label());
			this->BaseFinal = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->BaseOrigen = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->NumBase = (gcnew System::Windows::Forms::TextBox());
			this->BtnCrearArchivo = (gcnew System::Windows::Forms::Button());
			this->BtnVerificar = (gcnew System::Windows::Forms::Button());
			this->NoPalindromos = (gcnew System::Windows::Forms::Label());
			this->Timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Ej1
			// 
			this->Ej1->Location = System::Drawing::Point(44, 43);
			this->Ej1->Name = L"Ej1";
			this->Ej1->Size = System::Drawing::Size(83, 22);
			this->Ej1->TabIndex = 0;
			this->Ej1->Text = L"Ejercicio 1";
			this->Ej1->UseVisualStyleBackColor = true;
			this->Ej1->Click += gcnew System::EventHandler(this, &MyForm::Ej1_Click);
			// 
			// Ej2
			// 
			this->Ej2->Location = System::Drawing::Point(46, 145);
			this->Ej2->Name = L"Ej2";
			this->Ej2->Size = System::Drawing::Size(82, 22);
			this->Ej2->TabIndex = 1;
			this->Ej2->Text = L"Ejercicio 3";
			this->Ej2->UseVisualStyleBackColor = true;
			this->Ej2->Click += gcnew System::EventHandler(this, &MyForm::Ej2_Click);
			// 
			// Ej3
			// 
			this->Ej3->Location = System::Drawing::Point(46, 99);
			this->Ej3->Name = L"Ej3";
			this->Ej3->Size = System::Drawing::Size(81, 22);
			this->Ej3->TabIndex = 2;
			this->Ej3->Text = L"Ejercicio 2";
			this->Ej3->UseVisualStyleBackColor = true;
			this->Ej3->Click += gcnew System::EventHandler(this, &MyForm::Ej3_Click);
			// 
			// Salir
			// 
			this->Salir->Location = System::Drawing::Point(46, 203);
			this->Salir->Name = L"Salir";
			this->Salir->Size = System::Drawing::Size(81, 22);
			this->Salir->TabIndex = 3;
			this->Salir->Text = L"Salir";
			this->Salir->UseVisualStyleBackColor = true;
			this->Salir->Click += gcnew System::EventHandler(this, &MyForm::Salir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(161, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Multiplo 1";
			// 
			// Mult1
			// 
			this->Mult1->Enabled = false;
			this->Mult1->Location = System::Drawing::Point(219, 38);
			this->Mult1->Name = L"Mult1";
			this->Mult1->Size = System::Drawing::Size(50, 20);
			this->Mult1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(161, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Multiplo 2";
			// 
			// Mult2
			// 
			this->Mult2->Enabled = false;
			this->Mult2->Location = System::Drawing::Point(219, 73);
			this->Mult2->Name = L"Mult2";
			this->Mult2->Size = System::Drawing::Size(50, 20);
			this->Mult2->TabIndex = 7;
			// 
			// Resultado1
			// 
			this->Resultado1->AutoSize = true;
			this->Resultado1->Location = System::Drawing::Point(184, 137);
			this->Resultado1->Name = L"Resultado1";
			this->Resultado1->Size = System::Drawing::Size(58, 13);
			this->Resultado1->TabIndex = 8;
			this->Resultado1->Text = L"Resultado:";
			// 
			// Calcular1
			// 
			this->Calcular1->Enabled = false;
			this->Calcular1->Location = System::Drawing::Point(164, 101);
			this->Calcular1->Name = L"Calcular1";
			this->Calcular1->Size = System::Drawing::Size(83, 22);
			this->Calcular1->TabIndex = 9;
			this->Calcular1->Text = L"Calcular";
			this->Calcular1->UseVisualStyleBackColor = true;
			this->Calcular1->Click += gcnew System::EventHandler(this, &MyForm::Calcular1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(184, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Ejercicio 1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(696, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(56, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Ejercicio 3";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// Convertir
			// 
			this->Convertir->Enabled = false;
			this->Convertir->Location = System::Drawing::Point(676, 128);
			this->Convertir->Name = L"Convertir";
			this->Convertir->Size = System::Drawing::Size(83, 22);
			this->Convertir->TabIndex = 16;
			this->Convertir->Text = L"Convertir";
			this->Convertir->UseVisualStyleBackColor = true;
			this->Convertir->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Conversion
			// 
			this->Conversion->AutoSize = true;
			this->Conversion->Location = System::Drawing::Point(694, 154);
			this->Conversion->Name = L"Conversion";
			this->Conversion->Size = System::Drawing::Size(58, 13);
			this->Conversion->TabIndex = 15;
			this->Conversion->Text = L"Resultado:";
			this->Conversion->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// BaseFinal
			// 
			this->BaseFinal->Enabled = false;
			this->BaseFinal->Location = System::Drawing::Point(731, 73);
			this->BaseFinal->Name = L"BaseFinal";
			this->BaseFinal->Size = System::Drawing::Size(50, 20);
			this->BaseFinal->TabIndex = 14;
			this->BaseFinal->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(664, 76);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(53, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"BaseFinal";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// BaseOrigen
			// 
			this->BaseOrigen->Enabled = false;
			this->BaseOrigen->Location = System::Drawing::Point(731, 38);
			this->BaseOrigen->Name = L"BaseOrigen";
			this->BaseOrigen->Size = System::Drawing::Size(50, 20);
			this->BaseOrigen->TabIndex = 12;
			this->BaseOrigen->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(664, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"BaseOrigen";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(643, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(82, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Numero Original";
			// 
			// NumBase
			// 
			this->NumBase->Enabled = false;
			this->NumBase->Location = System::Drawing::Point(731, 99);
			this->NumBase->Name = L"NumBase";
			this->NumBase->Size = System::Drawing::Size(50, 20);
			this->NumBase->TabIndex = 19;
			// 
			// BtnCrearArchivo
			// 
			this->BtnCrearArchivo->Enabled = false;
			this->BtnCrearArchivo->Location = System::Drawing::Point(384, 32);
			this->BtnCrearArchivo->Name = L"BtnCrearArchivo";
			this->BtnCrearArchivo->Size = System::Drawing::Size(83, 22);
			this->BtnCrearArchivo->TabIndex = 20;
			this->BtnCrearArchivo->Text = L"Crear Archivo";
			this->BtnCrearArchivo->UseVisualStyleBackColor = true;
			this->BtnCrearArchivo->Click += gcnew System::EventHandler(this, &MyForm::CrearArchivo_Click);
			// 
			// BtnVerificar
			// 
			this->BtnVerificar->Enabled = false;
			this->BtnVerificar->Location = System::Drawing::Point(384, 76);
			this->BtnVerificar->Name = L"BtnVerificar";
			this->BtnVerificar->Size = System::Drawing::Size(83, 22);
			this->BtnVerificar->TabIndex = 21;
			this->BtnVerificar->Text = L"Vetificar";
			this->BtnVerificar->UseVisualStyleBackColor = true;
			this->BtnVerificar->Click += gcnew System::EventHandler(this, &MyForm::BtnVerificar_Click);
			// 
			// NoPalindromos
			// 
			this->NoPalindromos->AutoSize = true;
			this->NoPalindromos->Location = System::Drawing::Point(381, 110);
			this->NoPalindromos->Name = L"NoPalindromos";
			this->NoPalindromos->Size = System::Drawing::Size(95, 13);
			this->NoPalindromos->TabIndex = 22;
			this->NoPalindromos->Text = L"No de palindromos";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(397, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Ejercicio 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(995, 303);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->NoPalindromos);
			this->Controls->Add(this->BtnVerificar);
			this->Controls->Add(this->BtnCrearArchivo);
			this->Controls->Add(this->NumBase);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Convertir);
			this->Controls->Add(this->Conversion);
			this->Controls->Add(this->BaseFinal);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->BaseOrigen);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Calcular1);
			this->Controls->Add(this->Resultado1);
			this->Controls->Add(this->Mult2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Mult1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Salir);
			this->Controls->Add(this->Ej3);
			this->Controls->Add(this->Ej2);
			this->Controls->Add(this->Ej1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//funciones
		int Multiplicacion(int a, int b) {
			try {
				if (a == 0 || b == 0) {
					return 0;
				}
				if (b == 1) {
					return a;
				}
				else {
					return (a + Multiplicacion(a, b - 1));
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error de multiplicacion, revisar datos ingresados " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return 0;
			}


		}
		//la division a los 
		int ConversionPro(int numero, int baseOrigen, int baseFinal) {
			try {
				if (baseOrigen != 10) {
					int resultado = 0;
					int potencia = 1;

					while (numero > 0) {
						int digito = numero % 10; // Obtiene el dígito menos significativo
						if (digito >= baseOrigen) {
							return -1;
						}
						resultado += digito * potencia;
						potencia *= baseOrigen;
						numero /= 10; // Elimina el dígito menos significativo
					}

					return ConversionPro(resultado, 10, baseFinal); // Conversión a base 10
				}
				else {
					int resultado = 0;
					int potencia = 1;

					if (numero == 0) {
						return 0; // Si el número es cero, el resultado en cualquier base es '0'
					}
					else {
						while (numero > 0) {
							int residuo = numero % baseFinal;
							resultado += residuo * potencia;
							numero /= baseFinal;
							potencia *= 10; // Multiplica por 10 para posicionar los dígitos en la base 10
						}
					}

					return resultado;
				}
			}

			catch (Exception^ ex) {
				MessageBox::Show("Error de conversion, revisar datos ingresados " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return 0;
			}
			
		}


		void CrearArchivoPro() {
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

		bool esPalindromo(String^ palabra) {
			int inicio = 0;
			int fin = palabra->Length - 1;

			while (fin > inicio) {
				if (palabra[inicio] != palabra[fin]) {
					return false;
				}
				inicio++;
				fin--;
			}

			return true;
		}

		int contarPalindromos(String^ contenido) {
			array<Char>^ delimitadores = gcnew array<Char>{','};
			array<String^>^ palabras = contenido->Split(delimitadores, StringSplitOptions::RemoveEmptyEntries);
			int totalPalindromos = 0;

			for each (String ^ palabra in palabras) {
				if (esPalindromo(palabra)) {
					Console::WriteLine(palabra + " es un palíndromo.");
					totalPalindromos++;
				}
			}

			return totalPalindromos;
		}
		
			
		
		



		



		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Ej1_Click(System::Object^ sender, System::EventArgs^ e) {

		Mult1->Enabled = true;
		Mult2->Enabled = true;
		Calcular1->Enabled = true;
		BaseOrigen->Enabled = false;
		BaseFinal->Enabled = false;
		Convertir->Enabled = false;
		NumBase->Enabled = false;
		BtnCrearArchivo->Enabled = false;
		BtnVerificar->Enabled = false;

	}
	private: System::Void Calcular1_Click(System::Object^ sender, System::EventArgs^ e) {
		Timer->Start();
		this->Resultado1->Text=(Convert::ToString(Multiplicacion(Convert::ToInt32(Mult1->Text), Convert::ToInt32(Mult2->Text))));
		Timer->Stop();
	};
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Timer->Start();
	this->Conversion->Text = (Convert::ToString(ConversionPro(Convert::ToInt32(NumBase->Text), Convert::ToInt32(BaseOrigen->Text), Convert::ToInt32(BaseFinal->Text))));
	Timer->Stop();
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Ej2_Click(System::Object^ sender, System::EventArgs^ e) {
	BaseOrigen->Enabled = true;
	BaseFinal->Enabled = true;
	Convertir->Enabled = true;
	NumBase->Enabled = true;
	Mult1->Enabled = false;
	Mult2->Enabled = false;
	Calcular1->Enabled = false;
	BtnCrearArchivo->Enabled = false;
	BtnVerificar->Enabled = false;
}
private: System::Void Ej3_Click(System::Object^ sender, System::EventArgs^ e) {
	BaseOrigen->Enabled = false;
	BaseFinal->Enabled = false;
	Convertir->Enabled = false;
	NumBase->Enabled = false;
	Mult1->Enabled = false;
	Mult2->Enabled = false;
	Calcular1->Enabled = false;
	BtnCrearArchivo->Enabled = true;
	BtnVerificar->Enabled = true;
}
private: System::Void CrearArchivo_Click(System::Object^ sender, System::EventArgs^ e) {
	CrearArchivoPro();
	String^ fileName = "MapaInicial.txt"; // Nombre del archivo
	try {
		Process::Start(fileName);
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error al abrir el archivo: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void BtnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {
	//sacado de chat gpt para leer el archivo
	Timer->Start();
	FileStream^ archivo = gcnew FileStream("MapaInicial.txt", FileMode::Open, FileAccess::Read);
	StreamReader^ lector = gcnew StreamReader(archivo);
	String^ contenido = lector->ReadToEnd();


	int totalPalindromos = contarPalindromos(contenido);
	this->NoPalindromos->Text = (Convert::ToString(totalPalindromos));
	lector->Close();
	archivo->Close();
	Timer->Stop();

}
private: System::Void Salir_Click(System::Object^ sender, System::EventArgs^ e) {
	//crashearlo porque si literal
	int lol = Convert::ToInt32(label1);
}
};
}
