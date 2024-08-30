//---------------------------------------------------------------------------

#include <fmx.h>
#include <queue>
#pragma hdrstop

#include "QuizForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

 class Question{
public:
	char*Text;
	char*Answer1;
	char*Answer2;
	char*Answer3;
	int CorrectAnswer;
	Question(){}
	Question(char* text,char*ans1,char*ans2,char*ans3,int correctAns){
	Text = text;
	Answer1 = ans1;
	Answer2 = ans2;
	Answer3 = ans3;
	CorrectAnswer = correctAns;

	}
};

std::queue<Question> LoadQuestions(){

Question q1 = Question(" 1. Which animal is known as the 'Ship of the Deserts ? ","Camel", " Horse","Donkey",1);
Question q2 = Question(" 2. How many days are there in a week? ","7", "5","6",1);
Question q3 = Question(" 3. How many hours are there in a day? ","25", " 24","12",2);
Question q4 = Question(" 4. How many letters are there in the English alphabet? ","22","26","21",2);
Question q5 = Question(" 5. Rainbow consist of how many colours? ","7", "10","4",1) ;
std::queue<Question> questions;
questions.push(q1);
questions.push(q2);
questions.push(q3);
questions.push(q4);
questions.push(q5);

return questions;

}
std::queue<Question> questions;
   Question currentQuestion;
   int selectedAnswer;
   int points = 0;




//
TMyQuizForm *MyQuizForm;
//---------------------------------------------------------------------------
__fastcall TMyQuizForm::TMyQuizForm(TComponent* Owner)
	: TForm(Owner)
{
questions = LoadQuestions();
 currentQuestion =    questions.front();
 QuestionLabel ->Text = currentQuestion.Text;
  Answer1RadioButton->Text = currentQuestion.Answer1;
  Answer2RadioButton->Text = currentQuestion.Answer2;
  Answer3RadioButton->Text = currentQuestion.Answer3;
	questions.pop();
	PointsLabel->Text= points;
 }
//---------------------------------------------------------------------------
void __fastcall TMyQuizForm::Answer1RadioButtonChange(TObject *Sender)
{
		selectedAnswer = 1;

}
//---------------------------------------------------------------------------
void __fastcall TMyQuizForm::Answer2RadioButtonChange(TObject *Sender)
{
	   selectedAnswer = 2;
}
//---------------------------------------------------------------------------
void __fastcall TMyQuizForm::Answer3RadioButtonChange(TObject *Sender)
{
	  selectedAnswer = 3;
}
//---------------------------------------------------------------------------
void __fastcall TMyQuizForm::ConfirmButtonClick(TObject *Sender)
{
 if(selectedAnswer== currentQuestion.CorrectAnswer)
		   {
		   points+= 10;
		   PointsLabel->Text= points;
			}


	if(!questions.empty())
  {

	 PointsLabel->Text= points;
	 currentQuestion  = questions.front();
	 QuestionLabel ->Text = currentQuestion.Text;
	 Answer1RadioButton->Text = currentQuestion.Answer1;
	 Answer2RadioButton->Text = currentQuestion.Answer2;
	 Answer3RadioButton->Text = currentQuestion.Answer3;
		  questions.pop();

  Answer1RadioButton->IsChecked=  false;
  Answer2RadioButton->IsChecked = false;
  Answer3RadioButton->IsChecked = false;

  }
	else
	{
	ConfirmButton->Enabled = false;
	ConfirmButton->Text = " Quiz Finished ";
	}
}

//---------------------------------------------------------------------------
