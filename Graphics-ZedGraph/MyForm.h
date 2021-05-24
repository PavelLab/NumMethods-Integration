#pragma once
#include <math.h>
#include "..\NumMethods-Integration\Integrator.h"
#include "..\NumMethods-Integration\Utils.h"

namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: System::Windows::Forms::TextBox^ textBox6;
	public:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Label^ label13;
		   Integrator* pIntegrator;
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
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::Button^  button1;




	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label10;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;












	protected:
	private: System::ComponentModel::IContainer^  components;

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
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(51, 14);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(1018, 431);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(730, 478);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Task1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(650, 605);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(16, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"a";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(684, 602);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(46, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(650, 637);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(16, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"b";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(684, 632);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(46, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(528, 559);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(234, 17);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Число участков в интегрировании";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(782, 559);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"10";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(1051, 478);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 36);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Task2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(527, 601);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(81, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Границы";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(47, 522);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 40);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Функция:\r\nf(x)=sin(x)cos(2x)";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1093, 552);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(80, 22);
			this->textBox4->TabIndex = 17;
			this->textBox4->Text = L"100";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(915, 555);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(154, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Число разбиений по х";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(915, 599);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"альфа";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1093, 597);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(80, 22);
			this->textBox5->TabIndex = 20;
			this->textBox5->Text = L"0,5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(1219, 552);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 17);
			this->label8->TabIndex = 21;
			this->label8->Text = L"x [0,1]";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(240, 522);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 20);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Функция";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(223, 557);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(49, 21);
			this->radioButton1->TabIndex = 23;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"f(x)";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(223, 584);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(101, 21);
			this->radioButton2->TabIndex = 24;
			this->radioButton2->Text = L"f(x)+cos10x";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(223, 611);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(109, 21);
			this->radioButton3->TabIndex = 25;
			this->radioButton3->Text = L"f(x)+cos100x";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(398, 522);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 20);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Метод";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(393, 681);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(53, 20);
			this->label11->TabIndex = 30;
			this->label11->Text = L"Итог:";
			// 
			// label_result
			// 
			this->label_result->AutoSize = true;
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->Location = System::Drawing::Point(398, 710);
			this->label_result->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(0, 20);
			this->label_result->TabIndex = 31;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Location = System::Drawing::Point(351, 560);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(142, 21);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"Средних прямоуг";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(351, 587);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(95, 21);
			this->checkBox2->TabIndex = 33;
			this->checkBox2->Text = L"Трапеций";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(351, 611);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(95, 21);
			this->checkBox3->TabIndex = 34;
			this->checkBox3->Text = L"Симпсона";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1093, 644);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(80, 22);
			this->textBox6->TabIndex = 35;
			this->textBox6->Text = L"0,01";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(915, 647);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 17);
			this->label12->TabIndex = 36;
			this->label12->Text = L"eps";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(1209, 587);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(32, 22);
			this->textBox7->TabIndex = 37;
			this->textBox7->Text = L"0";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1249, 587);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(37, 22);
			this->textBox8->TabIndex = 38;
			this->textBox8->Text = L"1";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Location = System::Drawing::Point(1031, 721);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(121, 21);
			this->checkBox4->TabIndex = 39;
			this->checkBox4->Text = L"значение g(x)";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(1031, 748);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(128, 21);
			this->checkBox5->TabIndex = 40;
			this->checkBox5->Text = L"сложность T(x)";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(1027, 681);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 20);
			this->label13->TabIndex = 41;
			this->label13->Text = L"График";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1299, 811);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label_result);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"4 вариант";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (pIntegrator) {
			delete pIntegrator;
		}
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		panel->Title->Text = "График";
		
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

		// Интервал, где есть данные
		double a = Convert::ToDouble(textBox1->Text);
		double b = Convert::ToDouble(textBox2->Text);

		int n_integr = Convert::ToInt32(textBox3->Text);

		pIntegrator = new Integrator(a, b, n_integr);

		double xmin_limit = a - 0.1;
		double xmax_limit = b + 0.1;
		// Список точек
		
		double calculated_integral = 0;
		double exact_value = 0;
			//Добавление на график
		if (radioButton1->Checked) {
			exact_value = (-3 * cos(1) + 3 * cos(2) + cos(3) - cos(6)) / 6;
			for (int i = 0; i <= n_integr; i++) {
				double x = a + i * (b - a) / n_integr;
				f1_list->Add(x, utils::f_x(x));
			}
			if (checkBox1->Checked)
				calculated_integral=pIntegrator->MiddleRectangIntegral(utils::f_x);
			else if (checkBox2->Checked)
				calculated_integral = pIntegrator->TrapezoidalIntegral(utils::f_x);
			else if (checkBox3->Checked)
				calculated_integral = pIntegrator->SimpsonIntegral(utils::f_x);
		}
		else if (radioButton2->Checked) {
			exact_value = (-15 * cos(1) + 15 * cos(2) + 5 * cos(3) - 5 * cos(6) - 3 * sin(10) + 3 * sin(20)) / 30;
			for (int i = 0; i <= n_integr; i++) {
				double x = a + i * (b - a) / n_integr;
				f1_list->Add(x, utils::f_x_oscil_cos10(x));
			}
			if (checkBox1->Checked)
				calculated_integral = pIntegrator->MiddleRectangIntegral(utils::f_x_oscil_cos10);
			else if (checkBox2->Checked)
				calculated_integral = pIntegrator->TrapezoidalIntegral(utils::f_x_oscil_cos10);
			else if (checkBox3->Checked)
				calculated_integral = pIntegrator->SimpsonIntegral(utils::f_x_oscil_cos10);
		}
		else if (radioButton3->Checked) {
			exact_value = (-3 * cos(1) + 3 * cos(2) + cos(3) - cos(6)) / 6 + (-sin(100) + sin(200)) / 100;
			for (int i = 0; i <= n_integr; i++) {
				double x = a + i * (b - a) / n_integr;
				f1_list->Add(x, utils::f_x_oscil_cos100(x));
			}
			if (checkBox1->Checked)
				calculated_integral = pIntegrator->MiddleRectangIntegral(utils::f_x_oscil_cos100);
			else if (checkBox2->Checked)
				calculated_integral = pIntegrator->TrapezoidalIntegral(utils::f_x_oscil_cos100);
			else if (checkBox3->Checked)
				calculated_integral = pIntegrator->SimpsonIntegral(utils::f_x_oscil_cos100);
		}
		LineItem Curve1 = panel->AddCurve("F(x)", f1_list, Color::Red,SymbolType::None);

		label_result->Text = "Точное значение интеграла F(x) на [1,2]  "+ exact_value;
		label_result->Text += "\nВычисленное значение " + calculated_integral;
		label_result->Text += "\nПогрешность | I-I_n |= " + abs(exact_value- calculated_integral);


		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;


		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();

	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();
	panel->Title->Text = "График";

	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

	// Интервал, где есть данные
	double a = Convert::ToDouble(textBox7->Text);
	double b = Convert::ToDouble(textBox8->Text);

	double x_integr = Convert::ToDouble(textBox4->Text);
	double alpha = Convert::ToDouble(textBox5->Text);
	double eps = Convert::ToDouble(textBox6->Text);

	QuadratureInt* pQuadInt = new QuadratureInt(alpha);

	double xmin_limit = a - 0.1;
	double xmax_limit = b + 0.1;
	// Список точек
	
	/*pQuadInt->QuadratureFunc(-M_PI / 2.0, M_PI/2.0, eps, 0.8, utils::QuadMiddleRectangIntegral);
	label_result->Text = "";
	label_result->Text += pQuadInt->result;
	label_result->Text += "\n"+pQuadInt->number_of_recursions;*/


	for (int i = 0; i <= x_integr; i++)
	{
		double x = a + i * (b - a) / x_integr;
		//Добавление на график
		if (checkBox1->Checked)
			pQuadInt->QuadratureFunc(-M_PI / 2.0, M_PI / 2.0, eps, x, utils::QuadMiddleRectangIntegral);
		else if (checkBox2->Checked)
			pQuadInt->QuadratureFunc(-M_PI / 2.0, M_PI / 2.0, eps, x, utils::QuadTrapezoidalIntegral);
		else if (checkBox3->Checked)
			pQuadInt->QuadratureFunc(-M_PI / 2.0, M_PI / 2.0, eps, x, utils::QuadSimpsonIntegral);
		f1_list->Add(x, pQuadInt->result);
		f2_list->Add(x, pQuadInt->number_of_recursions);
	
	}
			

	if (checkBox4->Checked)
		LineItem Curve1 = panel->AddCurve("result", f1_list, Color::Red, SymbolType::Plus);
	if (checkBox5->Checked)
	LineItem Curve2 = panel->AddCurve("number_of_recursions", f2_list, Color::Blue, SymbolType::None);
/**/
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin_limit;
	panel->XAxis->Scale->Max = xmax_limit;
	/*
			// Устанавливаем интересующий нас интервал по оси Y
			panel->YAxis->Scale->Min = ymin_limit;
			panel->YAxis->Scale->Max = ymax_limit;
	*/
	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();
}
};
}
