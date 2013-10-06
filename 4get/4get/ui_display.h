#pragma once

#include "ui_convert.h"
#include <Windows.h>

namespace UIDisplay {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ui_display
	/// </summary>
	public ref class ui_display : public System::Windows::Forms::Form
	{
	public:
		ui_display(void);
	protected:
		~ui_display();
	private: System::Windows::Forms::TabControl^  tabContainer;
	private: System::Windows::Forms::TabPage^  tabTodo;
	private: System::Windows::Forms::TabPage^  tabCompleted;
	private: System::Windows::Forms::TabPage^  tabOverdue;
	private: System::Windows::Forms::TextBox^  textboxInput;
	private: System::Windows::Forms::FlowLayoutPanel^  inputContainer;
	private: System::Windows::Forms::ListView^  todoListView;

	private: System::Windows::Forms::ColumnHeader^  taskIndex;
	private: System::Windows::Forms::ColumnHeader^  taskDescription;
	private: System::Windows::Forms::ColumnHeader^  taskTime;
	private: System::Windows::Forms::ColumnHeader^  taskDueDate;
	private: System::Windows::Forms::ColumnHeader^  taskPriority;
	private: System::Windows::Forms::ColumnHeader^  taskLocation;
	private: System::Windows::Forms::FlowLayoutPanel^  messageContainer;
	private: System::Windows::Forms::ListView^  completedListView;
	private: System::Windows::Forms::ColumnHeader^  cTaskIndex;
	private: System::Windows::Forms::ColumnHeader^  cTaskDescription;
	private: System::Windows::Forms::ColumnHeader^  cTaskVenue;
	private: System::Windows::Forms::ColumnHeader^  cTaskTime;
	private: System::Windows::Forms::ColumnHeader^  cTaskDate;
	private: System::Windows::Forms::ColumnHeader^  cTaskPriority;

	private: System::Windows::Forms::ListView^  overdueListView;
	private: System::Windows::Forms::ColumnHeader^  oTaskIndex;
	private: System::Windows::Forms::ColumnHeader^  oTaskDescription;
	private: System::Windows::Forms::ColumnHeader^  oTaskVenue;
	private: System::Windows::Forms::ColumnHeader^  oTaskTime;
	private: System::Windows::Forms::ColumnHeader^  oTaskDate;
	private: System::Windows::Forms::ColumnHeader^  oTaskPriority;

	private: System::Windows::Forms::TabPage^  tabFloat;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  todayContainer;
	private: System::Windows::Forms::CheckedListBox^  checkedTaskList;
	private: System::Windows::Forms::DateTimePicker^  chooseDate;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  fTaskIndex;
	private: System::Windows::Forms::ColumnHeader^  fTaskDescription;
	private: System::Windows::Forms::ColumnHeader^  fTaskVenue;
	private: System::Windows::Forms::ColumnHeader^  fTaskTime;
	private: System::Windows::Forms::ColumnHeader^  fTaskDate;
	private: System::Windows::Forms::ColumnHeader^  fTaskPriority;

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
		void InitializeComponent(void);
#pragma endregion
	private: System::Void Display_Load(System::Object^  sender, System::EventArgs^  e){
				 //UiConvert UI;
			 }
	private: System::Void messageBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void completedListView_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
