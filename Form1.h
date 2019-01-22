#pragma once
#include <string>
#include "../Qbot_GUI/SolverBackend/CubeSimulation.h"
#include <msclr\marshal_cppstd.h>

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

		void changePanelColor(int num, char face)
		{
			System::Drawing::Color filling = System::Drawing::Color::White;
			switch (face)
			{
				case 'U':
					filling = System::Drawing::Color::White;
					break;
				case 'F':
					filling = System::Drawing::Color::Lime;
					break;
				case 'R':
					filling = System::Drawing::Color::Red;
					break;
				case 'L':
					filling = System::Drawing::Color::Orange;
					break;
				case 'B':
					filling = System::Drawing::Color::Blue;
					break;
				case 'D':
					filling = System::Drawing::Color::Yellow;
					break;

				default:
					filling = System::Drawing::Color::Black;
					break;
			}
			
			this->getPanel(num)->BackColor= filling; 
		}

		System::Windows::Forms::Panel^ getPanel(int num)
		{
			switch (num)
			{
			
				case 1: return U1;
				case 2: return U2;
				case 3: return U3;
				case 4: return U4;
				case 5: return U5;
				case 6: return U6;
				case 7: return U7;
				case 8: return U8;
				case 9: return U9;
				case 10: return R1;
				case 11: return R2;
				case 12: return R3;
				case 13: return R4;
				case 14: return R5;
				case 15: return R6;
				case 16: return R7;
				case 17: return R8;
				case 18: return R9;
				case 19: return F1;
				case 20: return F2;
				case 21: return F3;
				case 22: return F4;
				case 23: return F5;
				case 24: return F6;
				case 25: return F7;
				case 26: return F8;
				case 27: return F9;
				case 28: return D1;
				case 29: return D2;
				case 30: return D3;
				case 31: return D4;
				case 32: return D5;
				case 33: return D6;
				case 34: return D7;
				case 35: return D8;
				case 36: return D9;
				case 37: return L1;
				case 38: return L2;
				case 39: return L3;
				case 40: return L4;
				case 41: return L5;
				case 42: return L6;
				case 43: return L7;
				case 44: return L8;
				case 45: return L9;
				case 46: return B1;
				case 47: return B2;
				case 48: return B3;
				case 49: return B4;
				case 50: return B5;
				case 51: return B6;
				case 52: return B7;
				case 53: return B8;
				case 54: return B9;

			default:
				break;
			}
		}

		void colorPanelsFromString(std::string cubestring)
		{
			//cubestring = "DUUBULDBFRBFRRULLLBRDFFFBLURDBFDFDRFRULBLUFDURRBLBDUDL";

			for (size_t i = 1; i < cubestring.length()+1; i++)
			{
				changePanelColor(i, cubestring[i - 1]);
			}
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  U1;
	private: System::Windows::Forms::Panel^  U2;
	private: System::Windows::Forms::Panel^  U3;
	private: System::Windows::Forms::Panel^  U4;
	private: System::Windows::Forms::Panel^  U5;
	private: System::Windows::Forms::Panel^  U6;
	private: System::Windows::Forms::Panel^  U7;
	private: System::Windows::Forms::Panel^  U8;
	private: System::Windows::Forms::Panel^  U9;
	private: System::Windows::Forms::Panel^  F1;
	private: System::Windows::Forms::Panel^  F2;
	private: System::Windows::Forms::Panel^  F3;
	private: System::Windows::Forms::Panel^  F4;
	private: System::Windows::Forms::Panel^  F5;
	private: System::Windows::Forms::Panel^  F6;
	private: System::Windows::Forms::Panel^  F7;
	private: System::Windows::Forms::Panel^  F8;
	private: System::Windows::Forms::Panel^  F9;
	private: System::Windows::Forms::Panel^  R1;
	private: System::Windows::Forms::Panel^  R2;
	private: System::Windows::Forms::Panel^  R3;
	private: System::Windows::Forms::Panel^  R4;
	private: System::Windows::Forms::Panel^  R5;
	private: System::Windows::Forms::Panel^  R6;
	private: System::Windows::Forms::Panel^  R7;
	private: System::Windows::Forms::Panel^  R8;
	private: System::Windows::Forms::Panel^  R9;
	private: System::Windows::Forms::Panel^  B1;
	private: System::Windows::Forms::Panel^  B2;
	private: System::Windows::Forms::Panel^  B3;
	private: System::Windows::Forms::Panel^  B4;
	private: System::Windows::Forms::Panel^  B5;
	private: System::Windows::Forms::Panel^  B6;
	private: System::Windows::Forms::Panel^  B7;
	private: System::Windows::Forms::Panel^  B8;
	private: System::Windows::Forms::Panel^  B9;
	private: System::Windows::Forms::Panel^  D1;
	private: System::Windows::Forms::Panel^  D2;
	private: System::Windows::Forms::Panel^  D3;
	private: System::Windows::Forms::Panel^  D4;
	private: System::Windows::Forms::Panel^  D5;
	private: System::Windows::Forms::Panel^  D6;
	private: System::Windows::Forms::Panel^  D7;
	private: System::Windows::Forms::Panel^  D8;
	private: System::Windows::Forms::Panel^  D9;
	private: System::Windows::Forms::Panel^  L1;
	private: System::Windows::Forms::Panel^  L2;
	private: System::Windows::Forms::Panel^  L3;
	private: System::Windows::Forms::Panel^  L4;
	private: System::Windows::Forms::Panel^  L5;
	private: System::Windows::Forms::Panel^  L6;
	private: System::Windows::Forms::Panel^  L7;
	private: System::Windows::Forms::Panel^  L8;
	private: System::Windows::Forms::Panel^  L9;
	private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Button^  btn_R;
private: System::Windows::Forms::Button^  btn_U;
private: System::Windows::Forms::Button^  btn_F;
private: System::Windows::Forms::Button^  btn_D;
private: System::Windows::Forms::Button^  btn_L;
private: System::Windows::Forms::Button^  btn_B;
private: System::Windows::Forms::Button^  btn_Ri;
private: System::Windows::Forms::Button^  btn_Ui;
private: System::Windows::Forms::Button^  btn_Fi;
private: System::Windows::Forms::Button^  btn_Di;
private: System::Windows::Forms::Button^  btn_Li;
private: System::Windows::Forms::Button^  btn_Bi;
private: System::Windows::Forms::Button^  btn_Reset;
private: System::Windows::Forms::Button^  btn_GenSolution;

private: System::Windows::Forms::TextBox^  txt_SolutionString;
private: System::Windows::Forms::Button^  btn_scrambleString;



















	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->U1 = (gcnew System::Windows::Forms::Panel());
			this->U2 = (gcnew System::Windows::Forms::Panel());
			this->U3 = (gcnew System::Windows::Forms::Panel());
			this->U4 = (gcnew System::Windows::Forms::Panel());
			this->U5 = (gcnew System::Windows::Forms::Panel());
			this->U6 = (gcnew System::Windows::Forms::Panel());
			this->U7 = (gcnew System::Windows::Forms::Panel());
			this->U8 = (gcnew System::Windows::Forms::Panel());
			this->U9 = (gcnew System::Windows::Forms::Panel());
			this->F1 = (gcnew System::Windows::Forms::Panel());
			this->F2 = (gcnew System::Windows::Forms::Panel());
			this->F3 = (gcnew System::Windows::Forms::Panel());
			this->F4 = (gcnew System::Windows::Forms::Panel());
			this->F5 = (gcnew System::Windows::Forms::Panel());
			this->F6 = (gcnew System::Windows::Forms::Panel());
			this->F7 = (gcnew System::Windows::Forms::Panel());
			this->F8 = (gcnew System::Windows::Forms::Panel());
			this->F9 = (gcnew System::Windows::Forms::Panel());
			this->R1 = (gcnew System::Windows::Forms::Panel());
			this->R2 = (gcnew System::Windows::Forms::Panel());
			this->R3 = (gcnew System::Windows::Forms::Panel());
			this->R4 = (gcnew System::Windows::Forms::Panel());
			this->R5 = (gcnew System::Windows::Forms::Panel());
			this->R6 = (gcnew System::Windows::Forms::Panel());
			this->R7 = (gcnew System::Windows::Forms::Panel());
			this->R8 = (gcnew System::Windows::Forms::Panel());
			this->R9 = (gcnew System::Windows::Forms::Panel());
			this->B1 = (gcnew System::Windows::Forms::Panel());
			this->B2 = (gcnew System::Windows::Forms::Panel());
			this->B3 = (gcnew System::Windows::Forms::Panel());
			this->B4 = (gcnew System::Windows::Forms::Panel());
			this->B5 = (gcnew System::Windows::Forms::Panel());
			this->B6 = (gcnew System::Windows::Forms::Panel());
			this->B7 = (gcnew System::Windows::Forms::Panel());
			this->B8 = (gcnew System::Windows::Forms::Panel());
			this->B9 = (gcnew System::Windows::Forms::Panel());
			this->D1 = (gcnew System::Windows::Forms::Panel());
			this->D2 = (gcnew System::Windows::Forms::Panel());
			this->D3 = (gcnew System::Windows::Forms::Panel());
			this->D4 = (gcnew System::Windows::Forms::Panel());
			this->D5 = (gcnew System::Windows::Forms::Panel());
			this->D6 = (gcnew System::Windows::Forms::Panel());
			this->D7 = (gcnew System::Windows::Forms::Panel());
			this->D8 = (gcnew System::Windows::Forms::Panel());
			this->D9 = (gcnew System::Windows::Forms::Panel());
			this->L1 = (gcnew System::Windows::Forms::Panel());
			this->L2 = (gcnew System::Windows::Forms::Panel());
			this->L3 = (gcnew System::Windows::Forms::Panel());
			this->L4 = (gcnew System::Windows::Forms::Panel());
			this->L5 = (gcnew System::Windows::Forms::Panel());
			this->L6 = (gcnew System::Windows::Forms::Panel());
			this->L7 = (gcnew System::Windows::Forms::Panel());
			this->L8 = (gcnew System::Windows::Forms::Panel());
			this->L9 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_R = (gcnew System::Windows::Forms::Button());
			this->btn_U = (gcnew System::Windows::Forms::Button());
			this->btn_F = (gcnew System::Windows::Forms::Button());
			this->btn_D = (gcnew System::Windows::Forms::Button());
			this->btn_L = (gcnew System::Windows::Forms::Button());
			this->btn_B = (gcnew System::Windows::Forms::Button());
			this->btn_Ri = (gcnew System::Windows::Forms::Button());
			this->btn_Ui = (gcnew System::Windows::Forms::Button());
			this->btn_Fi = (gcnew System::Windows::Forms::Button());
			this->btn_Di = (gcnew System::Windows::Forms::Button());
			this->btn_Li = (gcnew System::Windows::Forms::Button());
			this->btn_Bi = (gcnew System::Windows::Forms::Button());
			this->btn_Reset = (gcnew System::Windows::Forms::Button());
			this->btn_GenSolution = (gcnew System::Windows::Forms::Button());
			this->txt_SolutionString = (gcnew System::Windows::Forms::TextBox());
			this->btn_scrambleString = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// U1
			// 
			this->U1->BackColor = System::Drawing::Color::White;
			this->U1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U1->Location = System::Drawing::Point(208, 13);
			this->U1->Name = L"U1";
			this->U1->Size = System::Drawing::Size(40, 40);
			this->U1->TabIndex = 0;
			// 
			// U2
			// 
			this->U2->BackColor = System::Drawing::Color::White;
			this->U2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U2->Location = System::Drawing::Point(254, 13);
			this->U2->Name = L"U2";
			this->U2->Size = System::Drawing::Size(40, 40);
			this->U2->TabIndex = 0;
			// 
			// U3
			// 
			this->U3->BackColor = System::Drawing::Color::White;
			this->U3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U3->Location = System::Drawing::Point(300, 13);
			this->U3->Name = L"U3";
			this->U3->Size = System::Drawing::Size(40, 40);
			this->U3->TabIndex = 0;
			// 
			// U4
			// 
			this->U4->BackColor = System::Drawing::Color::White;
			this->U4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U4->Location = System::Drawing::Point(208, 59);
			this->U4->Name = L"U4";
			this->U4->Size = System::Drawing::Size(40, 40);
			this->U4->TabIndex = 0;
			// 
			// U5
			// 
			this->U5->BackColor = System::Drawing::Color::White;
			this->U5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U5->Location = System::Drawing::Point(254, 59);
			this->U5->Name = L"U5";
			this->U5->Size = System::Drawing::Size(40, 40);
			this->U5->TabIndex = 0;
			// 
			// U6
			// 
			this->U6->BackColor = System::Drawing::Color::White;
			this->U6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U6->Location = System::Drawing::Point(300, 59);
			this->U6->Name = L"U6";
			this->U6->Size = System::Drawing::Size(40, 40);
			this->U6->TabIndex = 0;
			// 
			// U7
			// 
			this->U7->BackColor = System::Drawing::Color::White;
			this->U7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U7->Location = System::Drawing::Point(208, 105);
			this->U7->Name = L"U7";
			this->U7->Size = System::Drawing::Size(40, 40);
			this->U7->TabIndex = 0;
			// 
			// U8
			// 
			this->U8->BackColor = System::Drawing::Color::White;
			this->U8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U8->Location = System::Drawing::Point(254, 105);
			this->U8->Name = L"U8";
			this->U8->Size = System::Drawing::Size(40, 40);
			this->U8->TabIndex = 0;
			// 
			// U9
			// 
			this->U9->BackColor = System::Drawing::Color::White;
			this->U9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->U9->Location = System::Drawing::Point(300, 105);
			this->U9->Name = L"U9";
			this->U9->Size = System::Drawing::Size(40, 40);
			this->U9->TabIndex = 0;
			// 
			// F1
			// 
			this->F1->BackColor = System::Drawing::Color::Lime;
			this->F1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F1->Location = System::Drawing::Point(208, 151);
			this->F1->Name = L"F1";
			this->F1->Size = System::Drawing::Size(40, 40);
			this->F1->TabIndex = 0;
			// 
			// F2
			// 
			this->F2->BackColor = System::Drawing::Color::Lime;
			this->F2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F2->Location = System::Drawing::Point(254, 151);
			this->F2->Name = L"F2";
			this->F2->Size = System::Drawing::Size(40, 40);
			this->F2->TabIndex = 0;
			// 
			// F3
			// 
			this->F3->BackColor = System::Drawing::Color::Lime;
			this->F3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F3->Location = System::Drawing::Point(300, 151);
			this->F3->Name = L"F3";
			this->F3->Size = System::Drawing::Size(40, 40);
			this->F3->TabIndex = 0;
			// 
			// F4
			// 
			this->F4->BackColor = System::Drawing::Color::Lime;
			this->F4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F4->Location = System::Drawing::Point(208, 197);
			this->F4->Name = L"F4";
			this->F4->Size = System::Drawing::Size(40, 40);
			this->F4->TabIndex = 0;
			// 
			// F5
			// 
			this->F5->BackColor = System::Drawing::Color::Lime;
			this->F5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F5->Location = System::Drawing::Point(254, 197);
			this->F5->Name = L"F5";
			this->F5->Size = System::Drawing::Size(40, 40);
			this->F5->TabIndex = 0;
			// 
			// F6
			// 
			this->F6->BackColor = System::Drawing::Color::Lime;
			this->F6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F6->Location = System::Drawing::Point(300, 197);
			this->F6->Name = L"F6";
			this->F6->Size = System::Drawing::Size(40, 40);
			this->F6->TabIndex = 0;
			// 
			// F7
			// 
			this->F7->BackColor = System::Drawing::Color::Lime;
			this->F7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F7->Location = System::Drawing::Point(208, 243);
			this->F7->Name = L"F7";
			this->F7->Size = System::Drawing::Size(40, 40);
			this->F7->TabIndex = 0;
			// 
			// F8
			// 
			this->F8->BackColor = System::Drawing::Color::Lime;
			this->F8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F8->Location = System::Drawing::Point(254, 243);
			this->F8->Name = L"F8";
			this->F8->Size = System::Drawing::Size(40, 40);
			this->F8->TabIndex = 0;
			// 
			// F9
			// 
			this->F9->BackColor = System::Drawing::Color::Lime;
			this->F9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->F9->Location = System::Drawing::Point(300, 243);
			this->F9->Name = L"F9";
			this->F9->Size = System::Drawing::Size(40, 40);
			this->F9->TabIndex = 0;
			// 
			// R1
			// 
			this->R1->BackColor = System::Drawing::Color::Red;
			this->R1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R1->Location = System::Drawing::Point(346, 151);
			this->R1->Name = L"R1";
			this->R1->Size = System::Drawing::Size(40, 40);
			this->R1->TabIndex = 0;
			// 
			// R2
			// 
			this->R2->BackColor = System::Drawing::Color::Red;
			this->R2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R2->Location = System::Drawing::Point(392, 151);
			this->R2->Name = L"R2";
			this->R2->Size = System::Drawing::Size(40, 40);
			this->R2->TabIndex = 0;
			// 
			// R3
			// 
			this->R3->BackColor = System::Drawing::Color::Red;
			this->R3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R3->Location = System::Drawing::Point(438, 151);
			this->R3->Name = L"R3";
			this->R3->Size = System::Drawing::Size(40, 40);
			this->R3->TabIndex = 0;
			// 
			// R4
			// 
			this->R4->BackColor = System::Drawing::Color::Red;
			this->R4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R4->Location = System::Drawing::Point(346, 197);
			this->R4->Name = L"R4";
			this->R4->Size = System::Drawing::Size(40, 40);
			this->R4->TabIndex = 0;
			// 
			// R5
			// 
			this->R5->BackColor = System::Drawing::Color::Red;
			this->R5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R5->Location = System::Drawing::Point(392, 197);
			this->R5->Name = L"R5";
			this->R5->Size = System::Drawing::Size(40, 40);
			this->R5->TabIndex = 0;
			// 
			// R6
			// 
			this->R6->BackColor = System::Drawing::Color::Red;
			this->R6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R6->Location = System::Drawing::Point(438, 197);
			this->R6->Name = L"R6";
			this->R6->Size = System::Drawing::Size(40, 40);
			this->R6->TabIndex = 0;
			// 
			// R7
			// 
			this->R7->BackColor = System::Drawing::Color::Red;
			this->R7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R7->Location = System::Drawing::Point(346, 243);
			this->R7->Name = L"R7";
			this->R7->Size = System::Drawing::Size(40, 40);
			this->R7->TabIndex = 0;
			// 
			// R8
			// 
			this->R8->BackColor = System::Drawing::Color::Red;
			this->R8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R8->Location = System::Drawing::Point(392, 243);
			this->R8->Name = L"R8";
			this->R8->Size = System::Drawing::Size(40, 40);
			this->R8->TabIndex = 0;
			// 
			// R9
			// 
			this->R9->BackColor = System::Drawing::Color::Red;
			this->R9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->R9->Location = System::Drawing::Point(438, 243);
			this->R9->Name = L"R9";
			this->R9->Size = System::Drawing::Size(40, 40);
			this->R9->TabIndex = 0;
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::Blue;
			this->B1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B1->Location = System::Drawing::Point(484, 151);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(40, 40);
			this->B1->TabIndex = 0;
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::Blue;
			this->B2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B2->Location = System::Drawing::Point(530, 151);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(40, 40);
			this->B2->TabIndex = 0;
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::Blue;
			this->B3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B3->Location = System::Drawing::Point(576, 151);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(40, 40);
			this->B3->TabIndex = 0;
			// 
			// B4
			// 
			this->B4->BackColor = System::Drawing::Color::Blue;
			this->B4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B4->Location = System::Drawing::Point(484, 197);
			this->B4->Name = L"B4";
			this->B4->Size = System::Drawing::Size(40, 40);
			this->B4->TabIndex = 0;
			// 
			// B5
			// 
			this->B5->BackColor = System::Drawing::Color::Blue;
			this->B5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B5->Location = System::Drawing::Point(530, 197);
			this->B5->Name = L"B5";
			this->B5->Size = System::Drawing::Size(40, 40);
			this->B5->TabIndex = 0;
			// 
			// B6
			// 
			this->B6->BackColor = System::Drawing::Color::Blue;
			this->B6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B6->Location = System::Drawing::Point(576, 197);
			this->B6->Name = L"B6";
			this->B6->Size = System::Drawing::Size(40, 40);
			this->B6->TabIndex = 0;
			// 
			// B7
			// 
			this->B7->BackColor = System::Drawing::Color::Blue;
			this->B7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B7->Location = System::Drawing::Point(484, 243);
			this->B7->Name = L"B7";
			this->B7->Size = System::Drawing::Size(40, 40);
			this->B7->TabIndex = 0;
			// 
			// B8
			// 
			this->B8->BackColor = System::Drawing::Color::Blue;
			this->B8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B8->Location = System::Drawing::Point(530, 243);
			this->B8->Name = L"B8";
			this->B8->Size = System::Drawing::Size(40, 40);
			this->B8->TabIndex = 0;
			// 
			// B9
			// 
			this->B9->BackColor = System::Drawing::Color::Blue;
			this->B9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->B9->Location = System::Drawing::Point(576, 243);
			this->B9->Name = L"B9";
			this->B9->Size = System::Drawing::Size(40, 40);
			this->B9->TabIndex = 0;
			// 
			// D1
			// 
			this->D1->BackColor = System::Drawing::Color::Yellow;
			this->D1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D1->Location = System::Drawing::Point(208, 289);
			this->D1->Name = L"D1";
			this->D1->Size = System::Drawing::Size(40, 40);
			this->D1->TabIndex = 0;
			// 
			// D2
			// 
			this->D2->BackColor = System::Drawing::Color::Yellow;
			this->D2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D2->Location = System::Drawing::Point(254, 289);
			this->D2->Name = L"D2";
			this->D2->Size = System::Drawing::Size(40, 40);
			this->D2->TabIndex = 0;
			// 
			// D3
			// 
			this->D3->BackColor = System::Drawing::Color::Yellow;
			this->D3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D3->Location = System::Drawing::Point(300, 289);
			this->D3->Name = L"D3";
			this->D3->Size = System::Drawing::Size(40, 40);
			this->D3->TabIndex = 0;
			// 
			// D4
			// 
			this->D4->BackColor = System::Drawing::Color::Yellow;
			this->D4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D4->Location = System::Drawing::Point(208, 335);
			this->D4->Name = L"D4";
			this->D4->Size = System::Drawing::Size(40, 40);
			this->D4->TabIndex = 0;
			// 
			// D5
			// 
			this->D5->BackColor = System::Drawing::Color::Yellow;
			this->D5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D5->Location = System::Drawing::Point(254, 335);
			this->D5->Name = L"D5";
			this->D5->Size = System::Drawing::Size(40, 40);
			this->D5->TabIndex = 0;
			// 
			// D6
			// 
			this->D6->BackColor = System::Drawing::Color::Yellow;
			this->D6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D6->Location = System::Drawing::Point(300, 335);
			this->D6->Name = L"D6";
			this->D6->Size = System::Drawing::Size(40, 40);
			this->D6->TabIndex = 0;
			// 
			// D7
			// 
			this->D7->BackColor = System::Drawing::Color::Yellow;
			this->D7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D7->Location = System::Drawing::Point(208, 381);
			this->D7->Name = L"D7";
			this->D7->Size = System::Drawing::Size(40, 40);
			this->D7->TabIndex = 0;
			// 
			// D8
			// 
			this->D8->BackColor = System::Drawing::Color::Yellow;
			this->D8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D8->Location = System::Drawing::Point(254, 381);
			this->D8->Name = L"D8";
			this->D8->Size = System::Drawing::Size(40, 40);
			this->D8->TabIndex = 0;
			// 
			// D9
			// 
			this->D9->BackColor = System::Drawing::Color::Yellow;
			this->D9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->D9->Location = System::Drawing::Point(300, 381);
			this->D9->Name = L"D9";
			this->D9->Size = System::Drawing::Size(40, 40);
			this->D9->TabIndex = 0;
			// 
			// L1
			// 
			this->L1->BackColor = System::Drawing::Color::Orange;
			this->L1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L1->Location = System::Drawing::Point(70, 151);
			this->L1->Name = L"L1";
			this->L1->Size = System::Drawing::Size(40, 40);
			this->L1->TabIndex = 0;
			// 
			// L2
			// 
			this->L2->BackColor = System::Drawing::Color::Orange;
			this->L2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L2->Location = System::Drawing::Point(116, 151);
			this->L2->Name = L"L2";
			this->L2->Size = System::Drawing::Size(40, 40);
			this->L2->TabIndex = 0;
			// 
			// L3
			// 
			this->L3->BackColor = System::Drawing::Color::Orange;
			this->L3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L3->Location = System::Drawing::Point(162, 151);
			this->L3->Name = L"L3";
			this->L3->Size = System::Drawing::Size(40, 40);
			this->L3->TabIndex = 0;
			// 
			// L4
			// 
			this->L4->BackColor = System::Drawing::Color::Orange;
			this->L4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L4->Location = System::Drawing::Point(70, 197);
			this->L4->Name = L"L4";
			this->L4->Size = System::Drawing::Size(40, 40);
			this->L4->TabIndex = 0;
			// 
			// L5
			// 
			this->L5->BackColor = System::Drawing::Color::Orange;
			this->L5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L5->Location = System::Drawing::Point(116, 197);
			this->L5->Name = L"L5";
			this->L5->Size = System::Drawing::Size(40, 40);
			this->L5->TabIndex = 0;
			// 
			// L6
			// 
			this->L6->BackColor = System::Drawing::Color::Orange;
			this->L6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L6->Location = System::Drawing::Point(162, 197);
			this->L6->Name = L"L6";
			this->L6->Size = System::Drawing::Size(40, 40);
			this->L6->TabIndex = 0;
			// 
			// L7
			// 
			this->L7->BackColor = System::Drawing::Color::Orange;
			this->L7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L7->Location = System::Drawing::Point(70, 243);
			this->L7->Name = L"L7";
			this->L7->Size = System::Drawing::Size(40, 40);
			this->L7->TabIndex = 0;
			// 
			// L8
			// 
			this->L8->BackColor = System::Drawing::Color::Orange;
			this->L8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L8->Location = System::Drawing::Point(116, 243);
			this->L8->Name = L"L8";
			this->L8->Size = System::Drawing::Size(40, 40);
			this->L8->TabIndex = 0;
			// 
			// L9
			// 
			this->L9->BackColor = System::Drawing::Color::Orange;
			this->L9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->L9->Location = System::Drawing::Point(162, 243);
			this->L9->Name = L"L9";
			this->L9->Size = System::Drawing::Size(40, 40);
			this->L9->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 24);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ApplyDemoString";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// btn_R
			// 
			this->btn_R->Location = System::Drawing::Point(398, 13);
			this->btn_R->Name = L"btn_R";
			this->btn_R->Size = System::Drawing::Size(40, 25);
			this->btn_R->TabIndex = 2;
			this->btn_R->Text = L"R";
			this->btn_R->UseVisualStyleBackColor = true;
			this->btn_R->Click += gcnew System::EventHandler(this, &Form1::btn_R_Click);
			// 
			// btn_U
			// 
			this->btn_U->Location = System::Drawing::Point(352, 13);
			this->btn_U->Name = L"btn_U";
			this->btn_U->Size = System::Drawing::Size(40, 25);
			this->btn_U->TabIndex = 3;
			this->btn_U->Text = L"U";
			this->btn_U->UseVisualStyleBackColor = true;
			this->btn_U->Click += gcnew System::EventHandler(this, &Form1::btn_U_Click);
			// 
			// btn_F
			// 
			this->btn_F->Location = System::Drawing::Point(444, 13);
			this->btn_F->Name = L"btn_F";
			this->btn_F->Size = System::Drawing::Size(40, 25);
			this->btn_F->TabIndex = 4;
			this->btn_F->Text = L"F";
			this->btn_F->UseVisualStyleBackColor = true;
			this->btn_F->Click += gcnew System::EventHandler(this, &Form1::btn_F_Click);
			// 
			// btn_D
			// 
			this->btn_D->Location = System::Drawing::Point(490, 13);
			this->btn_D->Name = L"btn_D";
			this->btn_D->Size = System::Drawing::Size(40, 25);
			this->btn_D->TabIndex = 5;
			this->btn_D->Text = L"D";
			this->btn_D->UseVisualStyleBackColor = true;
			this->btn_D->Click += gcnew System::EventHandler(this, &Form1::btn_D_Click);
			// 
			// btn_L
			// 
			this->btn_L->Location = System::Drawing::Point(536, 13);
			this->btn_L->Name = L"btn_L";
			this->btn_L->Size = System::Drawing::Size(40, 25);
			this->btn_L->TabIndex = 6;
			this->btn_L->Text = L"L";
			this->btn_L->UseVisualStyleBackColor = true;
			this->btn_L->Click += gcnew System::EventHandler(this, &Form1::btn_L_Click);
			// 
			// btn_B
			// 
			this->btn_B->Location = System::Drawing::Point(582, 13);
			this->btn_B->Name = L"btn_B";
			this->btn_B->Size = System::Drawing::Size(40, 25);
			this->btn_B->TabIndex = 7;
			this->btn_B->Text = L"B";
			this->btn_B->UseVisualStyleBackColor = true;
			this->btn_B->Click += gcnew System::EventHandler(this, &Form1::btn_B_Click);
			// 
			// btn_Ri
			// 
			this->btn_Ri->Location = System::Drawing::Point(398, 44);
			this->btn_Ri->Name = L"btn_Ri";
			this->btn_Ri->Size = System::Drawing::Size(40, 25);
			this->btn_Ri->TabIndex = 2;
			this->btn_Ri->Text = L"R\'";
			this->btn_Ri->UseVisualStyleBackColor = true;
			this->btn_Ri->Click += gcnew System::EventHandler(this, &Form1::btn_Ri_Click);
			// 
			// btn_Ui
			// 
			this->btn_Ui->Location = System::Drawing::Point(352, 44);
			this->btn_Ui->Name = L"btn_Ui";
			this->btn_Ui->Size = System::Drawing::Size(40, 25);
			this->btn_Ui->TabIndex = 3;
			this->btn_Ui->Text = L"U\'";
			this->btn_Ui->UseVisualStyleBackColor = true;
			this->btn_Ui->Click += gcnew System::EventHandler(this, &Form1::btn_Ui_Click);
			// 
			// btn_Fi
			// 
			this->btn_Fi->Location = System::Drawing::Point(444, 44);
			this->btn_Fi->Name = L"btn_Fi";
			this->btn_Fi->Size = System::Drawing::Size(40, 25);
			this->btn_Fi->TabIndex = 4;
			this->btn_Fi->Text = L"F\'";
			this->btn_Fi->UseVisualStyleBackColor = true;
			this->btn_Fi->Click += gcnew System::EventHandler(this, &Form1::btn_Fi_Click);
			// 
			// btn_Di
			// 
			this->btn_Di->Location = System::Drawing::Point(490, 44);
			this->btn_Di->Name = L"btn_Di";
			this->btn_Di->Size = System::Drawing::Size(40, 25);
			this->btn_Di->TabIndex = 5;
			this->btn_Di->Text = L"D\'";
			this->btn_Di->UseVisualStyleBackColor = true;
			this->btn_Di->Click += gcnew System::EventHandler(this, &Form1::btn_Di_Click);
			// 
			// btn_Li
			// 
			this->btn_Li->Location = System::Drawing::Point(536, 44);
			this->btn_Li->Name = L"btn_Li";
			this->btn_Li->Size = System::Drawing::Size(40, 25);
			this->btn_Li->TabIndex = 6;
			this->btn_Li->Text = L"L\'";
			this->btn_Li->UseVisualStyleBackColor = true;
			this->btn_Li->Click += gcnew System::EventHandler(this, &Form1::btn_Li_Click);
			// 
			// btn_Bi
			// 
			this->btn_Bi->Location = System::Drawing::Point(582, 44);
			this->btn_Bi->Name = L"btn_Bi";
			this->btn_Bi->Size = System::Drawing::Size(40, 25);
			this->btn_Bi->TabIndex = 7;
			this->btn_Bi->Text = L"B\'";
			this->btn_Bi->UseVisualStyleBackColor = true;
			this->btn_Bi->Click += gcnew System::EventHandler(this, &Form1::btn_Bi_Click);
			// 
			// btn_Reset
			// 
			this->btn_Reset->Location = System::Drawing::Point(23, 44);
			this->btn_Reset->Name = L"btn_Reset";
			this->btn_Reset->Size = System::Drawing::Size(99, 25);
			this->btn_Reset->TabIndex = 8;
			this->btn_Reset->Text = L"Reset Cube";
			this->btn_Reset->UseVisualStyleBackColor = true;
			this->btn_Reset->Click += gcnew System::EventHandler(this, &Form1::btn_Reset_Click);
			// 
			// btn_GenSolution
			// 
			this->btn_GenSolution->Location = System::Drawing::Point(23, 76);
			this->btn_GenSolution->Name = L"btn_GenSolution";
			this->btn_GenSolution->Size = System::Drawing::Size(120, 23);
			this->btn_GenSolution->TabIndex = 9;
			this->btn_GenSolution->Text = L"Generate Solution";
			this->btn_GenSolution->UseVisualStyleBackColor = true;
			this->btn_GenSolution->Click += gcnew System::EventHandler(this, &Form1::btn_GenSolution_Click);
			// 
			// txt_SolutionString
			// 
			this->txt_SolutionString->Location = System::Drawing::Point(9, 434);
			this->txt_SolutionString->Name = L"txt_SolutionString";
			this->txt_SolutionString->Size = System::Drawing::Size(646, 20);
			this->txt_SolutionString->TabIndex = 10;
			this->txt_SolutionString->Text = L"Solution goes here";
			// 
			// btn_scrambleString
			// 
			this->btn_scrambleString->Location = System::Drawing::Point(23, 105);
			this->btn_scrambleString->Name = L"btn_scrambleString";
			this->btn_scrambleString->Size = System::Drawing::Size(120, 23);
			this->btn_scrambleString->TabIndex = 11;
			this->btn_scrambleString->Text = L"Scramble from String";
			this->btn_scrambleString->UseVisualStyleBackColor = true;
			this->btn_scrambleString->Click += gcnew System::EventHandler(this, &Form1::btn_scrambleString_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 464);
			this->Controls->Add(this->btn_scrambleString);
			this->Controls->Add(this->txt_SolutionString);
			this->Controls->Add(this->btn_GenSolution);
			this->Controls->Add(this->btn_Reset);
			this->Controls->Add(this->btn_Bi);
			this->Controls->Add(this->btn_B);
			this->Controls->Add(this->btn_Li);
			this->Controls->Add(this->btn_L);
			this->Controls->Add(this->btn_Di);
			this->Controls->Add(this->btn_D);
			this->Controls->Add(this->btn_Fi);
			this->Controls->Add(this->btn_F);
			this->Controls->Add(this->btn_Ui);
			this->Controls->Add(this->btn_Ri);
			this->Controls->Add(this->btn_U);
			this->Controls->Add(this->btn_R);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->D9);
			this->Controls->Add(this->B9);
			this->Controls->Add(this->R9);
			this->Controls->Add(this->F9);
			this->Controls->Add(this->L9);
			this->Controls->Add(this->U9);
			this->Controls->Add(this->D8);
			this->Controls->Add(this->B8);
			this->Controls->Add(this->R8);
			this->Controls->Add(this->F8);
			this->Controls->Add(this->L8);
			this->Controls->Add(this->U8);
			this->Controls->Add(this->D7);
			this->Controls->Add(this->B7);
			this->Controls->Add(this->R7);
			this->Controls->Add(this->F7);
			this->Controls->Add(this->L7);
			this->Controls->Add(this->U7);
			this->Controls->Add(this->D6);
			this->Controls->Add(this->B6);
			this->Controls->Add(this->R6);
			this->Controls->Add(this->F6);
			this->Controls->Add(this->D5);
			this->Controls->Add(this->B5);
			this->Controls->Add(this->R5);
			this->Controls->Add(this->F5);
			this->Controls->Add(this->L6);
			this->Controls->Add(this->U6);
			this->Controls->Add(this->D4);
			this->Controls->Add(this->B4);
			this->Controls->Add(this->R4);
			this->Controls->Add(this->F4);
			this->Controls->Add(this->L5);
			this->Controls->Add(this->U5);
			this->Controls->Add(this->D3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->R3);
			this->Controls->Add(this->F3);
			this->Controls->Add(this->L4);
			this->Controls->Add(this->U4);
			this->Controls->Add(this->D2);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->R2);
			this->Controls->Add(this->F2);
			this->Controls->Add(this->L3);
			this->Controls->Add(this->U3);
			this->Controls->Add(this->D1);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->R1);
			this->Controls->Add(this->L2);
			this->Controls->Add(this->F1);
			this->Controls->Add(this->L1);
			this->Controls->Add(this->U2);
			this->Controls->Add(this->U1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Qbot";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	colorPanelsFromString("DUUBULDBFRBFRRULLLBRDFFFBLURDBFDFDRFRULBLUFDURRBLBDUDL");
}

//Move Buttons
private: System::Void btn_U_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.U();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
	}

private: System::Void btn_Ui_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.U_prime();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_R_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.R();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);	
}

private: System::Void btn_Ri_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.R_prime();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_F_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.F();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_Fi_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.F_prime();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_D_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.D();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_Di_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.D_prime();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_L_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.L();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_Li_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.L_prime();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_B_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.B();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}

private: System::Void btn_Bi_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.B_prime();
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}


private: System::Void btn_Reset_Click(System::Object^  sender, System::EventArgs^  e) {
	Erno.reset_cube(UP, FRONT, LEFT, BACK, RIGHT, DOWN);
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
	txt_SolutionString->Clear();
	
}

private: System::Void btn_GenSolution_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string cubestring = Erno.generate_cubestring();
	//convert from string to char*
	const char* const_cubestring = cubestring.c_str();

	int max_moves = 20;
	long timeout = 3;
	bool final_solve = 0, first_solve = 1; 
	std::string solution = ::solution(const_cubestring, max_moves, timeout, 0 , "cache");
	System::String^ solutionstring = gcnew String(solution.c_str());
	txt_SolutionString->Clear();
	txt_SolutionString->AppendText(solutionstring);
}
private: System::Void btn_scrambleString_Click(System::Object^  sender, System::EventArgs^  e) {
	std::string testscramble = "L2 D L' F' D R D' B' R' D2 L' D2 L F2 L' B2 R U2 F2";
	//convert C++/CLI string to std::string 
	System::String^ text_input = txt_SolutionString->Text;
	msclr::interop::marshal_context context;
	std::string textbox_scramble = context.marshal_as<std::string>(text_input);
	//bool success = Erno.scramble_from_string(testscramble);
	bool success = Erno.scramble_from_string(textbox_scramble);
	Erno.import_all_faces_to_facemap(Erno.ptr_UP_, Erno.ptr_LEFT_, Erno.ptr_FRONT_, Erno.ptr_RIGHT_, Erno.ptr_BACK_, Erno.ptr_DOWN_);
	std::string cubestring = Erno.generate_cubestring();
	colorPanelsFromString(cubestring);
}
};

	
}
