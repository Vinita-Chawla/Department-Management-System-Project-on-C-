#include<iostream>
#include<conio.h>
#include<windows.h>
#include<process.h>
#include<iomanip>
using namespace std;

void FacultyRecord();                // declaration of Faculty record function
void MeritoriousProfessor();         // decleration of meritorious professor function
void Associate_and_Chairman();       // declaration of associate and charimain function
void Professors();                   // declaration of professors function
void Associate_Professors();         // declaration of associate professors function
void Assistant_Professors();         // declaration of assistant professors function
void Lecturers();                    // declaration of lecturers function
void Lecturers_on_Contract();        // declaration of lecturers on contract function 
void StudentsRecord();               // declaration of students record function 
void StudentBio();                   // declaration of students bio function 
void StudentsMarkSheet();            // declaration of students mark sheet function 
void Exit();                         // declaration of Exit function
void Main();                         // declaration of Main function


int main()
{
system("cls");   
system("color 3E"); 	
ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);	
Main();

	
getch();
return 0;
	
}



void Main()         // Definition of Main function
{
system("cls");	
cout<<"\n\n\n\n\t\t\t\t====================================================================================================================== \n";
cout<<"\n\t\t\t\t C O M P U T E R   S Y S T E M S   E N G I N E E R I N G   D E P A R T M E N T   M A N A G E M E N T   S Y S T E M  \n";
cout<<"\n\t\t\t\t====================================================================================================================== \n";	

cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t 1: Faculty Record\n";
cout<<"\t\t\t\t\t\t\t\t\t 2: Students Record\n"; 
cout<<"\t\t\t\t\t\t\t\t\t 3: Exit\n";
cout<<"\n\n\t\t\t\t\t\t\t\t\t  Enter your Choice\t";		
	
	
int ch;
cin>>ch;

switch(ch)
{
case 1:
{
FacultyRecord();
break;	
}	
case 2:
{
StudentsRecord(); 
break;	
}
case 3:
{
Exit(); 
break;	
}
default:
{
cout<<"\n\n\a\t\t\t\t\t\t\t\t\t  Invalid choice ";
}	
}
}

void FacultyRecord()           // Definition of Faculty record function
{
system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------------------\n";
cout<<"\t\t\t\t\t\t F A C  U L T Y   O F   C S E   D E P A R T M E N T   M E H R A N   U E T   J A M S H O R O\n";
cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------------------\n";
cout<<endl<<endl<<endl;
cout<<" \t\t\t\t\t\t\t1: Meritorious Professor \t\t 2: Associate Professor and Chairman\n";
cout<<"\n\t\t\t\t\t\t\t3: Professors \t\t\t\t 4: Associate Professors\n";

cout<<"\n\t\t\t\t\t\t\t5: Assistant Professors  \t\t 6: Lecturers\n";
cout<<"\n\t\t\t\t\t\t\t7: Lecturers on Contract\n";
cout<<"\n\n\t\n\t\t\t\t\t\t\t\t\t\tEntre your Choice\t";

int cs;
cin>>cs;
switch(cs)
{
case 1:
{
MeritoriousProfessor();       // Calling Meritorious professor function
break;	
}
case 2:
{                          
Associate_and_Chairman();     // Calling Associate and Chairman function	
}
case 3:
{
Professors();	              // Calling professors function
}
case 4:
{
Associate_Professors();	     // Calling Associate Professors fucntion
}
case 5:
{
Assistant_Professors();	     // Calling Assistant Professors Function
}
case 6:
{
Lecturers();	            // Calling Lecturers function
}
case 7:
{
 Lecturers_on_Contract();	// Calling lecturers on contract function 
}	
}
}


void MeritoriousProfessor()    // definition of meritorious professor function
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\tDEAN OF THE FACULTY "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Prof. Dr. Mukhtiar Ali Unar"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  mukhtiar.unar@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Meritorious Professor at CSE Department & Dean, FEECE, MUET, Jamshoro."<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";

char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
FacultyRecord();	
}
else
{
Main();
}	
}

void Associate_and_Chairman()     // definition of Associate and Chairman function
{

system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\tCHAIRMAN OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Prof. Dr. Shahnawaz Talpur"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  shahnawaz.talpur@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Associate  Professor & Chairman at CSE Department and Co-Director at IICT"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";

char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
FacultyRecord();	
}
else
{
Main();
}			
}


void Professors()             // definition of professor function
{

system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Prof. Dr. Tariq Jamil Saifullah Khanzada(on lien)"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  tariq.khanzada@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";

char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
FacultyRecord();	
}
else
{
Main();
}			

}


void Associate_Professors()        // definition of Associate professors function
{ 

system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t1: Prof. Dr. Sheeraz Memon\n";
cout<<"\n\t\t\t\t\t\t\t\t\t2: Dr. M.  Moazzam Jawaid\n";
cout<<"\n\t\t\t\t\t\t\t\t\t Entre your choice\t";	

int cf;
cin>>cf;
switch(cf)
{
case 1:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSOCIATE PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Prof. Dr. Sheeraz Memon(on lien)"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  sheeraz.memon@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Associate Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
Associate_Professors();	
}
else
{
Main();
}				
}	
case 2:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSOCIATE PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Prof. Dr. M.Moazzam Jawaid"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  moazzam.jawaid@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Associate Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
Associate_Professors();	
}
else
{
Main();
}					
}	
}
}	


void Assistant_Professors()        // definition of Assistant professors function
{
system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t1:Engr.Arbab Ali Samejo\t\t\t 2:Engr Rizwan Badar Baloch \n";
cout<<"\n\t\t\t\t\t\t3:Dr. Adnan Ashraf Arain\t\t 4:Engr Ali Ashghar Monjotho\n";
cout<<"\n\t\t\t\t\t\t5:Dr.Sammer Zai\t\t\t\t 6:Dr. Ahsan Ansari\n";
cout<<"\n\t\t\t\t\t\t7:Dr.Sanam Narejo\t\t\t 8: Dr. Irfan Ali Bhacho\n";
cout<<"\n\t\t\t\t\t\t9:Dr. Bushra Naz\t\t\t10: Engr. Zartasha Baloch";
cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Entre your choice\t";
int ce;
cin>>ce;
switch(ce)
{
case 1:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Arbab Ali Samejo"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  arbab.samejo@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}						
}	
case 2:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Rizwan Badar Baloch"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  baloch.rizwan@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}							
}	
case 3:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Dr. Adnan Ashraf Arain"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  adnan.arain@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}								
}	
case 4:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Ali Asghar Manjotho(On Study Leave Abroad)"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  ali.manjotho@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}										
}
case 5:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Dr. Sammer Zai"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  sammer.zai@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else
{
Main();
}										
}	
case 6:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Dr. Ahsan Ansari"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  ahsan.ansari@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
Assistant_Professors();	
}
else{
Main();
}											
}	
case 7:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Dr. Sanam Narejo"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  sanam.narejo@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}		
}	
case 8:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Dr. Irfan Ali Bhacho"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  irfan.ali@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}		
}	
case 9:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Dr. Bushra Naz"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  bushra.naz@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}		
}	
case 10:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  ASSISTANT PROFESSOR OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Zartasha Baloch"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  zartasha.baloch@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Assistant Professor at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Assistant_Professors();	
}
else{
Main();
}		
}	
}  
}

void Lecturers()            /// definition of lecturers function
{
system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t1: Engr. Jokhio Sultan Salahuddin Kohistani\n";
cout<<"\n\t\t\t\t\t\t\t\t\t2: Engr. Fawad Mangi\n";
cout<<"\n\t\t\t\t\t\t\t\t\t   Entre your choice\t";	
int cf;
cin>>cf;
switch(cf)
{
case 1:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  LECTURER OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    = Engr. Jokhio Sultan Salahuddin Kohistani(On study leave Abroad) "<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  salah.jokhio@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Lecturer at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Lecturers();	
}
else{
Main();
}				
}	
case 2:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  LECTURER OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Fawad Mangi (On Study Leave Abroad)"<<endl;
cout<<"\n\t\t\t\t\t\tGMAIL       =  fawad.mangi@faculty.muet.edu.pk"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Lecturer at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Lecturers();	
}
else{
Main();
}					
}	
}	
}


void  Lecturers_on_Contract()      // definition of lecturers on contract function
{
system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t1:Engr.Anam Memon\t\t 2:Engr. Haleema Sadia \n";
cout<<"\n\t\t\t\t\t\t3:Engr. Madeha Memon\t\t 4:Engr. Mashal Afzal Memon\n";
cout<<"\n\n\n\t\t\t\t\t\t\t\t Entre your choice\t";
int ce;
cin>>ce;
switch(ce)
{
case 1:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  LECTURER  OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Anam Memon"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Lecturer on contract at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Lecturers_on_Contract();	
}
else{
Main();
}						
}	
case 2:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  LECTURER OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Haleema Sadia"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Lecturer on contract at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
Lecturers_on_Contract();	
}
else{
Main();
}							
}	
case 3:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  LECTURER OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Madeha Memon"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Lecturer on contract at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
Lecturers_on_Contract();	
}
else
{
Main();
}								
}	
case 4:
{
system("cls");
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  LECTURER OF THE DEPARTMENT "<<endl;
cout<<"\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\tNAME\t    =  Engr. Mashal Afzal Memon"<<endl;
cout<<"\n\t\t\t\t\t\tDESIGNATION =  Lecturer on contract at Department of Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\tUNIVERSITY  =  Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\tClick (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
Lecturers_on_Contract();	
}
else
{
Main();
}											
}
}
}






void StudentsRecord()       // Definition of students record function
{
system("cls");
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------------------\n";
cout<<"\t\t\t\t\t\t 2 0 C S  S E C T I O N (II)  S T U D E N T S   C S E   D E P A R T M E N T  R E C O R D\n";
cout<<"\t\t\t\t\t\t---------------------------------------------------------------------------------------------\n";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t1. Students Bio data "<<endl;
cout<<"\n\t\t\t\t\t\t\t\t\t\t2. Students Mark sheet "<<endl;
cout<<"\n\n\t\t\t\t\t\t\t\t\t\t   Entre your Choice\t ";
int cp;
cin>>cp;
switch(cp)
{
case 1:
{
 StudentBio();	          // Calling student bio function
break;
}	
case 2:
{
StudentsMarkSheet(); 	 // calling student marksheet function
break;
}	
}
}
void StudentBio()     // definition of student bio function
{
system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t [01] 20CS002\t\t [02] 20CS006\t\t [03] 20CS008\n";
cout<<"\n\t\t\t\t\t\t [04] 20CS010\t\t [05] 20CS012\t\t [06] 20CS014\n";
cout<<"\n\t\t\t\t\t\t [07] 20CS016\t\t [08] 20CS018\t\t [09] 20CS020\n";
cout<<"\n\t\t\t\t\t\t [10] 20CS022\t\t [11] 20CS024\t\t [12] 20CS026\n";
cout<<"\n\t\t\t\t\t\t [13] 20CS028\t\t [14] 20CS030\t\t [15] 20CS032\n";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t Entre your Choice\t ";

int choice;
cin>>choice;
switch(choice)
{
case 1:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS002 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Airaf abro"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
StudentBio();	
}
else{
Main();
}			
}		
case 2:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS006 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Masood Ali Mugheri"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
StudentBio();	
}
else{
Main();
}			
}		
case 3:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS008 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Inam Ali Chandio"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 4:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS010 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Haseebullah Channa"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 5:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS012 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Vinita Chawla"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 6:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS014 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Abdul Qadir Magsi"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 7:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS016 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Abdul Rasheed Chandio"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 8:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS018 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Arsalan Ahmed Mahar"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 9:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS020 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Ali Meer Soomro"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 10:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS022 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Vankesh Mathrani"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 11:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS024 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Maheen Sheikh"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 12:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS026 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Muhammad Talha Mirani"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 13:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS028 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Syeda Insharah Sultana"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 14:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS030 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Syed Faseeh"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
case 15:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t\t  S T U D E N T   B I O   D A T A "<<endl;
cout<<"\t\t\t\t\t\t\t===================================================================================\n";
cout<<endl<<endl;
cout<<"\t\t\t\t\t\t\t ROLL NUMBER :\t\t 20CS032 \n";
cout<<"\n\t\t\t\t\t\t\t NAME        :           Ahmed Nawaz"<<endl;
cout<<"\n\t\t\t\t\t\t\t DEPARTMENT  :           Computer Systems Engineering"<<endl;
cout<<"\n\t\t\t\t\t\t\t SECTION     :           Two"<<endl;
cout<<"\n\t\t\t\t\t\t\t INSTITUTE   :           Mehran University of Engineering and Technology Jamshoro"<<endl;
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentBio();	
}
else
{
Main();
}			
}		
}
}


void StudentsMarkSheet()      // definition of student mark sheet function
{
system("cls");	
cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t [01] 20CS002\t\t [02] 20CS006\t\t [03] 20CS008\n";
cout<<"\n\t\t\t\t\t\t [04] 20CS010\t\t [05] 20CS012\t\t [06] 20CS014\n";
cout<<"\n\t\t\t\t\t\t [07] 20CS016\t\t [08] 20CS018\t\t [09] 20CS020\n";
cout<<"\n\t\t\t\t\t\t [10] 20CS022\t\t [11] 20CS024\t\t [12] 20CS026\n";
cout<<"\n\t\t\t\t\t\t [13] 20CS028\t\t [14] 20CS030\t\t [15] 20CS032\n";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t Entre your Choice\t ";
int choice;
cin>>choice;
switch(choice)
{
case 1:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<setw(20)<<"\t\t\t\t"<<"****************"<<" "<<" 20CS002 MARKSHEET  " <<" *****************"<<endl<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(12)<<"\t\t\t"<<"Subject"<<setw(45)<<"Total marks"<<setw(37)<<"Obtained marks"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Basic Electrical Engineering"<<setw(25)<<"100"<<setw(32)<<"75"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"BEE Practical"<<setw(39)<<"50"<<setw(33)<<"41"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Computer Fundamentals"<<setw(32)<<"100"<<setw(32)<<"85"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"CF Practical"<<setw(40)<<"50"<<setw(33)<<"45"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Functional English"<<setw(35)<<"100"<<setw(32)<<"71"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Applied Calculus"<<setw(37)<<"100"<<setw(32)<<"78"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Electronics"<<setw(42)<<"100"<<setw(32)<<"69"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"ES Practical"<<setw(40)<<"50"<<setw(33)<<"32"<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(11)<<"\t\t\t    "<<"Total"<<setw(48)<<"650"<<setw(33)<<"496"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
float percentage=(496.0/650.0)*100;
cout<<"\t\t\t    "<<"Percentage : "<<percentage<<"%"<<endl;
if(percentage>=85)
cout<<"\t\t\t    "<<"Grade : A+ "<<endl;
else if(percentage>=80 && percentage<85)
cout<<"\t\t\t    "<<"Grade : A "<<endl;
else if(percentage>=75 && percentage<80)
cout<<"\t\t\t    "<<"Grade : B+ "<<endl;
else if(percentage>=70 && percentage<75)
cout<<"\t\t\t    "<<"Grade : B "<<endl;
else if(percentage>=65 && percentage<70)
cout<<"\t\t\t    "<<"Grade : C+ "<<endl;
else if(percentage>=60 && percentage<65)
cout<<"\t\t\t    "<<"Grade : C "<<endl;
else if(percentage>=55 && percentage<60)
cout<<"\t\t\t    "<<"Grade : D+ "<<endl;
else if(percentage>=50 && percentage<55)
cout<<"\t\t\t    "<<"Grade : D "<<endl;
else if(percentage<50)
cout<<"\t\t\t    "<<"Grade : F "<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
StudentsMarkSheet();	
}
else{
Main();
}			
}		

case 2:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<setw(20)<<"\t\t\t\t"<<"****************"<<" "<<" 20CS006 MARKSHEET  " <<" *****************"<<endl<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(12)<<"\t\t\t"<<"Subject"<<setw(45)<<"Total marks"<<setw(37)<<"Obtained marks"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Basic Electrical Engineering"<<setw(25)<<"100"<<setw(32)<<"73"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"BEE Practical"<<setw(39)<<"50"<<setw(33)<<"41"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Computer Fundamentals"<<setw(32)<<"100"<<setw(32)<<"88"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"CF Practical"<<setw(40)<<"50"<<setw(33)<<"45"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Functional English"<<setw(35)<<"100"<<setw(32)<<"70"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Applied Calculus"<<setw(37)<<"100"<<setw(32)<<"75"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Electronics"<<setw(42)<<"100"<<setw(32)<<"67"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"ES Practical"<<setw(40)<<"50"<<setw(33)<<"35"<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(11)<<"\t\t\t    "<<"Total"<<setw(48)<<"650"<<setw(33)<<"408"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
float percentage=(408.0/650.0)*100;
cout<<"\t\t\t    "<<"Percentage : "<<percentage<<"%"<<endl;
if(percentage>=85)
cout<<"\t\t\t    "<<"Grade : A+ "<<endl;
else if(percentage>=80 && percentage<85)
cout<<"\t\t\t    "<<"Grade : A "<<endl;
else if(percentage>=75 && percentage<80)
cout<<"\t\t\t    "<<"Grade : B+ "<<endl;
else if(percentage>=70 && percentage<75)
cout<<"\t\t\t    "<<"Grade : B "<<endl;
else if(percentage>=65 && percentage<70)
cout<<"\t\t\t    "<<"Grade : C+ "<<endl;
else if(percentage>=60 && percentage<65)
cout<<"\t\t\t    "<<"Grade : C "<<endl;
else if(percentage>=55 && percentage<60)
cout<<"\t\t\t    "<<"Grade : D+ "<<endl;
else if(percentage>=50 && percentage<55)
cout<<"\t\t\t    "<<"Grade : D "<<endl;
else if(percentage<50)
cout<<"\t\t\t    "<<"Grade : F "<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y'){
StudentsMarkSheet();	
}
else{
Main();
}			
}			
case 3:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;	
cout<<setw(20)<<"\t\t\t\t\t"<<"****************"<<" "<<" 20CS008 MARKSHEET  " <<" *****************"<<endl<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(12)<<"\t\t\t"<<"Subject"<<setw(45)<<"Total marks"<<setw(37)<<"Obtained marks"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Basic Electrical Engineering"<<setw(25)<<"100"<<setw(32)<<"75"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"BEE Practical"<<setw(39)<<"50"<<setw(33)<<"41"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Computer Fundamentals"<<setw(32)<<"100"<<setw(32)<<"85"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"CF Practical"<<setw(40)<<"50"<<setw(33)<<"45"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Functional English"<<setw(35)<<"100"<<setw(32)<<"71"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Applied Calculus"<<setw(37)<<"100"<<setw(32)<<"80"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Electronics"<<setw(42)<<"100"<<setw(32)<<"72"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"ES Practical"<<setw(40)<<"50"<<setw(33)<<"35"<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(11)<<"\t\t\t    "<<"Total"<<setw(48)<<"650"<<setw(33)<<"504"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
float percentage=(504.0/650.0)*100;
cout<<"\t\t\t    "<<"Percentage : "<<percentage<<"%"<<endl;
if(percentage>=85)
cout<<"\t\t\t    "<<"Grade : A+ "<<endl;
else if(percentage>=80 && percentage<85)
cout<<"\t\t\t    "<<"Grade : A "<<endl;
else if(percentage>=75 && percentage<80)
cout<<"\t\t\t    "<<"Grade : B+ "<<endl;
else if(percentage>=70 && percentage<75)
cout<<"\t\t\t    "<<"Grade : B "<<endl;
else if(percentage>=65 && percentage<70)
cout<<"\t\t\t    "<<"Grade : C+ "<<endl;
else if(percentage>=60 && percentage<65)
cout<<"\t\t\t    "<<"Grade : C "<<endl;
else if(percentage>=55 && percentage<60)
cout<<"\t\t\t    "<<"Grade : D+ "<<endl;
else if(percentage>=50 && percentage<55)
cout<<"\t\t\t    "<<"Grade : D "<<endl;
else if(percentage<50)
cout<<"\t\t\t    "<<"Grade : F "<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentsMarkSheet();	
}
else
{
Main();  
 }
}

case 4:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;
cout<<setw(20)<<"\t\t\t\t\t"<<"****************"<<" "<<" 20CS010 MARKSHEET  " <<"  *****************"<<endl<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(12)<<"\t\t\t"<<"Subject"<<setw(45)<<"Total marks"<<setw(37)<<"Obtained marks"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Basic Electrical Engineering"<<setw(25)<<"100"<<setw(32)<<"78"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"BEE Practical"<<setw(39)<<"50"<<setw(33)<<"41"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Computer Fundamentals"<<setw(32)<<"100"<<setw(32)<<"87"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"CF Practical"<<setw(40)<<"50"<<setw(33)<<"45"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Functional English"<<setw(35)<<"100"<<setw(32)<<"75"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Applied Calculus"<<setw(37)<<"100"<<setw(32)<<"80"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Electronics"<<setw(42)<<"100"<<setw(32)<<"70"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"ES Practical"<<setw(40)<<"50"<<setw(33)<<"33"<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(11)<<"\t\t\t    "<<"Total"<<setw(48)<<"650"<<setw(33)<<"509"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
  float percentage=(509.0/650.0)*100;
 cout<<"\t\t\t    "<<"Percentage : "<<percentage<<"%"<<endl;
if(percentage>=85)
cout<<"\t\t\t    "<<"Grade : A+ "<<endl;
else if(percentage>=80 && percentage<85)
cout<<"\t\t\t    "<<"Grade : A "<<endl;
else if(percentage>=75 && percentage<80)
cout<<"\t\t\t    "<<"Grade : B+ "<<endl;
else if(percentage>=70 && percentage<75)
cout<<"\t\t\t    "<<"Grade : B "<<endl;
else if(percentage>=65 && percentage<70)
cout<<"\t\t\t    "<<"Grade : C+ "<<endl;
else if(percentage>=60 && percentage<65)
cout<<"\t\t\t    "<<"Grade : C "<<endl;
else if(percentage>=55 && percentage<60)
cout<<"\t\t\t    "<<"Grade : D+ "<<endl;
else if(percentage>=50 && percentage<55)
cout<<"\t\t\t    "<<"Grade : D "<<endl;
else if(percentage<50)
cout<<"\t\t\t    "<<"Grade : F "<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;	
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentsMarkSheet();	
}
else
{
Main();
}			
}	
case 5:
{
system("cls");	
cout<<endl<<endl<<endl<<endl;	
cout<<setw(20)<<"\t\t\t\t\t"<<"****************"<<" "<<" 20CS012 MARKSHEET  " <<" *****************"<<endl<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(12)<<"\t\t\t"<<"Subject"<<setw(45)<<"Total marks"<<setw(37)<<"Obtained marks"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Basic Electrical Engineering"<<setw(25)<<"100"<<setw(32)<<"87"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"BEE Practical"<<setw(39)<<"50"<<setw(33)<<"45"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Computer Fundamentals"<<setw(32)<<"100"<<setw(32)<<"93"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"CF Practical"<<setw(40)<<"50"<<setw(33)<<"45"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Functional English"<<setw(35)<<"100"<<setw(32)<<"80"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Applied Calculus"<<setw(37)<<"100"<<setw(32)<<"93"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"Electronics"<<setw(42)<<"100"<<setw(32)<<"93"<<endl;
cout<<setw(14)<<"\t\t\t    "<<"ES Practical"<<setw(40)<<"50"<<setw(33)<<"45"<<endl<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
cout<<setw(11)<<"\t\t\t    "<<"Total"<<setw(48)<<"650"<<setw(33)<<"581"<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl;
  float percentage=(581.0/650.0)*100;
 cout<<"\t\t\t    "<<"Percentage : "<<percentage<<"%"<<endl;
if(percentage>=85)
cout<<"\t\t\t    "<<"Grade : A+ "<<endl;
else if(percentage>=80 && percentage<85)
cout<<"\t\t\t    "<<"Grade : A "<<endl;
else if(percentage>=75 && percentage<80)
cout<<"\t\t\t    "<<"Grade : B+ "<<endl;
else if(percentage>=70 && percentage<75)
cout<<"\t\t\t    "<<"Grade : B "<<endl;
else if(percentage>=65 && percentage<70)
cout<<"\t\t\t    "<<"Grade : C+ "<<endl;
else if(percentage>=60 && percentage<65)
cout<<"\t\t\t    "<<"Grade : C "<<endl;
else if(percentage>=55 && percentage<60)
cout<<"\t\t\t    "<<"Grade : D+ "<<endl;
else if(percentage>=50 && percentage<55)
cout<<"\t\t\t    "<<"Grade : D "<<endl;
else if(percentage<50)
cout<<"\t\t\t    "<<"Grade : F "<<endl;
cout<<"\t\t\t    "<<"-----------------------------------------------------------------------------------------------"<<endl<<endl;		
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t Click (Y/y) to continue or any key to go into main function..\t ";
char cf;
cin>>cf;
if (cf=='Y'||cf=='y')
{
StudentsMarkSheet();	
}
else
{
Main();
}			
}
}
}


void Exit()                       // definition of exit function
{
exit(0);	
}



