#include <iostream>
#include <cstring>

using namespace std ;

// User Class created by IT21377594
class User {
  private :
      char Name [20] ;
      char NICno[12] ;
      char Email [30];
      char username[15] ;
      char password [8];

  public : 
      User ();
      User (char Name[] ,char NICno[] ,char Email[] ,char username[] ,char password[] );
      void RegisterUser ();
      void EditUser ();
      void Login ();
      void DisplayUser ();  
};

// Module Class created by IT21377594
class Module {
  private :
      char M_code [8];
      char M_name [15];
      int NoOfCredit ;

  public :
      Module();
      Module(char M_code [],char M_name [],int NoOfCredit);
};

//Book Class created by IT21182532
class Book{
  private :
    int Book_ID;
    char Book_Name [15];
    char Book_Type [5];

  public :
    Book();
    Book(int Book_ID,char Book_Name [],char Book_Type []);
    void DisplayBookDetails();
    void AddBookDetails();
};

//Online Library Class created by IT21182532
class Online_Library{
    private :
      char MemberName [20];
      int MemberID ;
      int BookID ;

    public :
      Online_Library();
      Online_Library(char MemberName [],int MemberID,int BookID);
      void DisplayLibraryDetails();
};

//Coordinator Class created by IT21307126
class Coordinator {
  private :
    char Co_ID [7] ;
    char CoName [20];
    char Copassword [8];

  public :
    Coordinator();
    Coordinator(char Co_ID [],char CoName [],char Copassword []);
    void DisplayCoDetails();
};

//Faculty Head Class created by IT21379574
class Faculty_Head {
    private:
      char H_ID [10];
      char Husername [20];
      char Hpassword [8];

    public : 
      Faculty_Head();
      Faculty_Head(char H_ID [],char Husername [],char Hpassword []);
      void DisplayFaculty_HeadDetails ();
      void RespondProblems();
};
// Lecture Materials created by IT21189180
class Lecture_Materials{
    private :
      char LectureMaterialsType [10];

    public :
      Lecture_Materials();
      Lecture_Materials(char LectureMaterialsType []);
};

// Problem Class created by IT21182532
class Problem {
    private :
      char ProblemType [10];
      char ProblemDescription [100];

    public :
      Problem ();
      Problem(char ProblemType [],char ProblemDescription []);
      void Displayproblem();
      void Addproblem ();

};

// Solution Class created by IT21182532
class Solution {
    private :
      char SolutionDescription [100];

    public :
      Solution();
      Solution(char SolutionDescription [100]);
      void DisplaySolution();
};

// Report Class created by IT21377594
class Report {
    private :
      int ReportID;

    public :
      Report();
      Report(int ReportID);
      void DisplayReport();
};

// Methord Implementatoin

//User Class Implementatoin
User :: User (){}
User :: User(char Uname[] ,char UNIC[] ,char Uemail[] ,char Uusername[] ,char Upassword[] ){
  strcpy(Name , Uname);
  strcpy(NICno , UNIC);
  strcpy(Email , Uemail);
  strcpy(username , Uusername);
  strcpy(password , Upassword);
}
void User :: RegisterUser (){}
void User :: EditUser (){}
void User :: Login (){}
void User :: DisplayUser (){
  cout << "Display User : "<< Name <<endl;
}


//Module Class Implementatoin
Module :: Module (){
   NoOfCredit = 0;
}
Module :: Module (char Mod_code [],char Mod_name [],int MNoOfCredit){
  strcpy (M_code , Mod_code);
  strcpy (M_name ,Mod_name);
  NoOfCredit = MNoOfCredit;
}


//Book Class Implementatoin
Book :: Book (){
  Book_ID = 0;
}
Book :: Book(int B_ID,char B_Name[],char B_Type []){
  Book_ID = B_ID;
  strcpy (Book_Name , B_Name);
  strcpy(Book_Type , B_Type);
}
void Book:: DisplayBookDetails(){
  cout << "Book ID : "<< Book_ID << endl;
  cout << "Book Name  : "<< Book_Name << endl;
  cout << "Book Type : "<< Book_Type << endl;
}
void Book:: AddBookDetails(){
}


//Online Library Class Implementatoin
Online_Library :: Online_Library(){}
Online_Library :: Online_Library(char OLMemberName [],int OLMemberID,int OLBookID ){
  strcpy (MemberName,OLMemberName);
  MemberID = OLMemberID;
  BookID = OLBookID;
}
void Online_Library ::  DisplayLibraryDetails(){
  cout << "Member Name : "<< MemberName << endl;
  cout << "Member ID  : "<< MemberID << endl;
  cout << "Book ID : "<< BookID << endl;
} 


//Coordinator Class Implementatoin
Coordinator :: Coordinator(){}
Coordinator :: Coordinator(char Coo_ID [] ,char CooName [],char Coopassword [] ){
  strcpy(Co_ID , Coo_ID);
  strcpy (CoName,CooName);
  strcpy (Copassword,Coopassword);    
}
void Coordinator :: DisplayCoDetails(){
  cout << "Coordinator ID : "<< Co_ID<<endl;
  cout << "Coordinator Name : "<< CoName<<endl;
}


//Faculty Head Class Implementatoin
Faculty_Head :: Faculty_Head(){}
Faculty_Head :: Faculty_Head(char FH_ID[],char FHusername [],char FHpassword [8]){
  strcpy (H_ID , FH_ID);
  strcpy (Husername , FHusername);
  strcpy (Hpassword , FHpassword);
}
void Faculty_Head :: DisplayFaculty_HeadDetails (){
  cout << "Faculty Head ID : "<<H_ID << endl;
}
void Faculty_Head :: RespondProblems(){}


// Lecture Materials Class Implementatoin
Lecture_Materials :: Lecture_Materials(){}
Lecture_Materials :: Lecture_Materials(char MaterialsType []){
  strcpy(LectureMaterialsType , MaterialsType );
}


// Problem Class Implementatoin
Problem :: Problem (){}
Problem :: Problem (char P_Type [],char P_Description []){
  strcpy(ProblemType,P_Type);
  strcpy(ProblemDescription,P_Description);
}
void Problem :: Displayproblem(){
  cout<<"Display Problem Type  : "<< ProblemType <<endl;
  cout << "Display problem : "<<ProblemDescription << endl;
}
void Problem :: Addproblem (){}


// Solution Class Implementatoin
Solution :: Solution(){}
Solution :: Solution(char S_Description []){
  strcpy (SolutionDescription ,S_Description);
}
void Solution :: DisplaySolution(){
  cout<<"Display Solution : "<< SolutionDescription << endl;
}


// Report Class Implementatoin
Report :: Report(){
  ReportID =0;
}
Report :: Report(int R_ID){
  ReportID = R_ID;
}
void Report ::  DisplayReport(){
  cout << "Display Report : "<<ReportID<<endl;
}

// MAIN PROGRAM.
int main() {
  User u1("Andrews Billy","992609796V","andrews@gmail.com","Andrews","A#567897");
  Module m1("BM3011","Marketing Strategy and Management",4);
  Book b1(1001,"Clean Code","Software");
  Online_Library OL1("Andrews",0012,1002);
  Coordinator co1("CO10001","Dr Ann","Ann@#565");
  Faculty_Head fh1("HD10345689","RayJones","RJ@#7854");
  Lecture_Materials lm1("PDF");
  Problem p1("Exam Excuses","unable to attend to the Exma...");
  Solution s1("You should e-mail the reason for absence to the examination to the relevant module coordinator.");
  Report r1(00015);
  
  //cout << "Hello World!\n";
  return 0;
}