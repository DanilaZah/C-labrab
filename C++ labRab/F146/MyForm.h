#pragma once

namespace F146 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Start;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ Side_A;
	private: System::Windows::Forms::TextBox^ Side_B;
	private: System::Windows::Forms::TextBox^ Side_C;






	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Label^ label6;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Side_A = (gcnew System::Windows::Forms::TextBox());
			this->Side_B = (gcnew System::Windows::Forms::TextBox());
			this->Side_C = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->result = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(68, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Сторона прямоугольника А";
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(162, 348);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(75, 23);
			this->Start->TabIndex = 1;
			this->Start->Text = L"Посчитать";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(68, 89);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Сторона прямоугольника В";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(68, 133);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Сторона прямоугольника С";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(68, 181);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 4;
			// 
			// Side_A
			// 
			this->Side_A->Location = System::Drawing::Point(71, 66);
			this->Side_A->Name = L"Side_A";
			this->Side_A->Size = System::Drawing::Size(100, 20);
			this->Side_A->TabIndex = 5;
			// 
			// Side_B
			// 
			this->Side_B->Location = System::Drawing::Point(71, 106);
			this->Side_B->Name = L"Side_B";
			this->Side_B->Size = System::Drawing::Size(100, 20);
			this->Side_B->TabIndex = 6;
			// 
			// Side_C
			// 
			this->Side_C->Location = System::Drawing::Point(71, 150);
			this->Side_C->Name = L"Side_C";
			this->Side_C->Size = System::Drawing::Size(100, 20);
			this->Side_C->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(68, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(208, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Квадратов вычтено из прямоугольника";
			// 
			// result
			// 
			this->result->AutoSize = true;
			this->result->Location = System::Drawing::Point(286, 194);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(13, 13);
			this->result->TabIndex = 9;
			this->result->Text = L"0";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(71, 13);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Введите размер сторон";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(403, 402);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->result);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->Side_C);
			this->Controls->Add(this->Side_B);
			this->Controls->Add(this->Side_A);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Я вычитаю квадраты из прямоугльника";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int count= ((System::Convert::ToInt32(this->Side_A->Text) * System::Convert::ToInt32(this->Side_B->Text))/ System::Convert::ToInt32(this->Side_C->Text));
		this->result->Text = System::Convert::ToString(count);
	}

};
}

