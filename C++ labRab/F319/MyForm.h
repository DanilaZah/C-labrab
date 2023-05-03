#pragma once

namespace F319 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_left_angle;
	protected:

	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_right_angle;
	protected:

	protected:

	protected:


	private: System::Windows::Forms::Label^ input_label;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ counter;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_left_angle = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_right_angle = (gcnew System::Windows::Forms::Button());
			this->input_label = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->counter = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_left_angle
			// 
			this->button_left_angle->Location = System::Drawing::Point(37, 128);
			this->button_left_angle->Name = L"button_left_angle";
			this->button_left_angle->Size = System::Drawing::Size(75, 23);
			this->button_left_angle->TabIndex = 0;
			this->button_left_angle->Text = L"<";
			this->button_left_angle->UseVisualStyleBackColor = true;
			this->button_left_angle->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button_minus
			// 
			this->button_minus->Location = System::Drawing::Point(131, 128);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(75, 23);
			this->button_minus->TabIndex = 1;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button_right_angle
			// 
			this->button_right_angle->Location = System::Drawing::Point(223, 128);
			this->button_right_angle->Name = L"button_right_angle";
			this->button_right_angle->Size = System::Drawing::Size(75, 23);
			this->button_right_angle->TabIndex = 2;
			this->button_right_angle->Text = L">";
			this->button_right_angle->UseVisualStyleBackColor = true;
			this->button_right_angle->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// input_label
			// 
			this->input_label->AutoSize = true;
			this->input_label->Location = System::Drawing::Point(34, 72);
			this->input_label->Name = L"input_label";
			this->input_label->Size = System::Drawing::Size(12, 13);
			this->input_label->TabIndex = 3;
			this->input_label->Text = L"/";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 316);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"посчитать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::count_Click);
			// 
			// counter
			// 
			this->counter->AutoSize = true;
			this->counter->Location = System::Drawing::Point(131, 272);
			this->counter->Name = L"counter";
			this->counter->Size = System::Drawing::Size(13, 13);
			this->counter->TabIndex = 5;
			this->counter->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->counter);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->input_label);
			this->Controls->Add(this->button_right_angle);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_left_angle);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);


		if (this->input_label->Text == "/")
			this->input_label->Text = button->Text;
		else
			this->input_label->Text = this->input_label->Text + button->Text;

	}

	private: System::Void count_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->input_label->Text->Contains(">>-->"))
		{
			this->input_label->Text = this->input_label->Text->Replace(">>-->", "*");
			int counter_temp = System::Convert::ToInt32(this->counter->Text) + 1;
			this->counter->Text = System::Convert::ToString(counter_temp);
		}
		else if (this->input_label->Text->Contains("<--<<")) {
			this->input_label->Text = this->input_label->Text->Replace("<--<<", "*");
			int counter_temp = System::Convert::ToInt32(this->counter->Text) + 1;
			this->counter->Text = System::Convert::ToString(counter_temp);
		}
	};
	};
}