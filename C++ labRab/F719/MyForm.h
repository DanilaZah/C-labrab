#pragma once

namespace F719 {

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
	private: System::Windows::Forms::Button^ Startbutton;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->Startbutton = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// Startbutton
			// 
			this->Startbutton->Location = System::Drawing::Point(171, 366);
			this->Startbutton->Name = L"Startbutton";
			this->Startbutton->Size = System::Drawing::Size(75, 23);
			this->Startbutton->TabIndex = 0;
			this->Startbutton->Text = L"Start";
			this->Startbutton->UseVisualStyleBackColor = true;
			this->Startbutton->Click += gcnew System::EventHandler(this, &MyForm::Startbutton_Click);
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(65, 23);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(300, 300);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 401);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->Startbutton);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Startbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			try
			{
				double f = 0.01; // f маленькое, потому что гипербола
				double l;
				this->chart1->Series[0]->Points->Clear(); // очистка пол€ от точек
				double small_increase = 0.01; //мелка€ прибавка, чтобы лини€ шла точнее
				for (int i; i < 2500; i++) //можно ставить любое положительное int
				{
					l = f + (1 / f); // сама формула
					this->chart1->Series[0]->Points->AddXY(f, l); // l от f
					f = f + small_increase; //как f++, только меньше				
				}
			}
			catch (networkIOException& e)
			{
				MessageBox::Show("„то-то пошло не так...");
			}
		}
	}
	};
}
