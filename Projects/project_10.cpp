#include<iostream>
#include<string>

using namespace std;

void Student_Info();
void CourseMark();
float CourseGrade(float);
void Display_GradeRport();
void Culculate_CGPA();
void Status(float);

struct student
{
    int ID,age,year;
    char fname[15];
    char lname[15];
    char sex[8];
    char semester[10];
    float CGPA;
    struct 
    {
        float prog1;
        float Int_CS;
        float prog2;
        float comEng;
    }course;
    
    struct 
    {
        float prog1g;
        float Intg;
        float prog2g;
        float comeg;
    }grade;
    
};
struct student s[100];

int n;
int main()
{
    cout<<"====================================================\n";
    
        cout<<"    Student Grade Report System Using C++\n";
        cout<<"    Brought To you By: code-projects.org\n\n";
        
        cout<<"           Welcome To Student Grade Report:\n";
    
    cout<<"====================================================\n";
    
    Student_Info();
    
    CourseMark();
    
    Culculate_CGPA();
    
    Display_GradeRport();
    
}

void Student_Info()
{
    int i;
    cout<<"How many Students you have less than 100:";
    cin>>n;
    cout<<"\nStudent Information:\n\n";
    
    for(i=0;i<n;i++)
    {
        cout<<"Enter student_"<<i+1<<" First name:\n";
        cin>>s[i].fname;
        cout<<"Enter student_"<<i+1<<" Last name:\n";
        cin>>s[i].lname;
        cout<<"Enter student_"<<i+1<<" ID number:\n";
        cin>>s[i].ID;
        cout<<"Enter student_"<<i+1<<" Sex:\n";
        cin>>s[i].sex;
        cout<<"Enter student_"<<i+1<<" Age:\n";
        cin>>s[i].age;
        cout<<"Enter student_"<<i+1<<" Year:\n";
        cin>>s[i].year;
        cout<<"Enter student_"<<i+1<<" Semester(in character):\n";
        cin>>s[i].semester;
        
        
    }
    
}
void CourseMark()
{
    int mark;
    system("cls");
    cout<<"\n";
    cout<<"====================================================\n";
    cout<<"Enter Students mark to corresponding course:\n";
    cout<<"====================================================\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Enter student_"<<i+1<<" programming mark:\n";
        cin>>s[i].course.prog1;
        
    
        cout<<"Enter student_"<<i+1<<" Introduction to CS:\n";
        cin>>s[i].course.Int_CS;
        
        
        
        cout<<"Enter student_"<<i+1<<" Programming II:\n";
        cin>>s[i].course.prog2;
        
        
        cout<<"Enter student_"<<i+1<<" Communicative English:\n";
        cin>>s[i].course.comEng;
        
        
        
    }
    
    
}


float CourseGrade(float mark)
{
    float result;               
            
            if(mark<=100 && mark>90)
            {
                result=4.0;
                cout<<"A+\n";
            }
            else if(mark<=90 && mark>85)
            {
                result=4;
                cout<<"A\n";
            }
            else if(mark<=85 && mark>80)
            {
                result=3.75;
                cout<<"A-\n";
            }
            else if(mark<=80 && mark>75)
            {
                result=3.5;
                cout<<"B+\n";
            }
            else if(mark<=75 && mark>70)
            {
                result=3;
                cout<<"B\n";
            }
            else if(mark<=70 && mark>65)
            {
                result=2.75;
                cout<<"B-\n";
            }
            else if(mark<=65 && mark>60)
            {
                result=2.5;
                cout<<"C+\n";
            }
            else if(mark<=60 && mark>50)
            {
                result=2;
                cout<<"C\n";
            }
            else if(mark<=50 && mark>45)
            {
                result=1.75;
                cout<<"C-\n";
            }
            else if(mark<=45 && mark>40)
            {
                result=1.5;
                cout<<"D+\n";
            }
            else if(mark<=40 && mark>30)
            {
                result=1;
                cout<<"D\n";
            }
            else if(mark<=30 && mark>0)
            {
                result=0;
                cout<<"F\n";    
            }
            else
            {
                cout<<"mark out of range.\n";
            }
        
        return result;
        
}


void Culculate_CGPA()
{

    int credit=5;//credit hour of each course
    int Tcredit=20;//total credit hour
    int a;
    float SumofGP[2]={0};
    
    for(a=0;a<n;a++)
    {

        if((s[a].grade.prog1g !=0 && s[a].grade.Intg !=0) && (s[a].grade.comeg !=0  && s[a].grade.prog2g !=0))
        {
            SumofGP[a]=(s[a].grade.prog1g * credit) + (s[a].grade.Intg * credit) + (s[a].grade.comeg * credit) + (s[a].grade.prog2g*credit);
        }
        else if(s[a].grade.prog1g ==0)
        {
            SumofGP[a]= (s[a].grade.Intg * credit) + (s[a].grade.comeg * credit) + (s[a].grade.prog2g*credit);
        }
        else if(s[a].grade.Intg ==0)
        {
            SumofGP[a]=(s[a].grade.prog1g * credit) + (s[a].grade.comeg * credit) + (s[a].grade.prog2g*credit);       
        }
        else if(s[a].grade.prog2g ==0)
        {
            SumofGP[a]=(s[a].grade.prog1g * credit) + (s[a].grade.Intg * credit) + (s[a].grade.comeg * credit);
        }
        else
        {
            SumofGP[a]=(s[a].grade.prog1g * credit) + (s[a].grade.Intg * credit) + (s[a].grade.prog2g*credit);
        }

        
        
        s[a].CGPA=SumofGP[a]/Tcredit;
    }
    
}


void Display_GradeRport()
{
    int i,j;
    float alpha;
    system("cls");
    cout<<"\n";
    cout<<"============================================================================\n";
    cout<<"                         Student Grade Report:\n";
    cout<<"============================================================================\n";
    for(i=0;i<n;i++)
    {
        cout<<"Full Name: "<<s[i].fname<<"\t"<<s[i].lname<<"\t"<<"\tYear:"<<s[i].year<<"\tSemester: "<<s[i].semester<<endl;
        cout<<"Sex: "<<s[i].sex<<"\t"<<"Age: "<<s[i].age<<endl<<endl;
        
        for(j=0;j<4;j++)
        {
            if(j==0)
            {
                alpha=s[i].grade.prog1g;
                cout<<"Programming I:       \t";
                s[i].grade.prog1g=CourseGrade(s[i].course.prog1);
            }
            else if(j==1)
            {
                alpha=s[i].grade.Intg;
                cout<<"Introduction to CS:   \t";
                s[i].grade.Intg=CourseGrade(s[i].course.Int_CS);
                
            }
            else if(j==2)
            {
                alpha=s[i].grade.prog2g;
                cout<<"Programming II:      \t";
                s[i].grade.prog2g=CourseGrade(s[i].course.prog2);
            }
            else
            {
                alpha=s[i].grade.comeg;
                cout<<"Communicative English:\t";
                s[i].grade.comeg=CourseGrade(s[i].course.comEng);
            }
        
        }
        
        Culculate_CGPA();
        cout<<"\n";
        cout<<">> CGPA = "<<s[i].CGPA<<endl;;
        
        Status(s[i].CGPA);    
        
        cout<<"============================================================================\n";    
    
}
        
      
        
}
    
    

void Status(float sta)
{
    if(sta==4)
    {
        cout<<"Status: Very great distinction.\n";
    }
    else if(sta>=3.75 && sta<=3.99)
    {
        cout<<"Status: Grate distinction.\n";
    }
    else if(sta>3.5 && sta<=3.74)
    {
        cout<<"Status: Distinction.\n";
    }
    else if(sta>3.49 && sta<=3.25)
    {
        cout<<"Status: dean's list.\n";
    }
    else if(sta>=2.0 && sta<=3.24)
    {
        cout<<"Status: Promoted.\n";
    }
    else if(sta>1.75 && sta<=1.99)
    {
        cout<<"Status: Warning.\n";
    }
    else if(sta>1.00 && sta<=1.74)
    {
        cout<<"Status: Readmission.\n";
    }
    else if(sta>0.0 && sta<1.0)
    {
        cout<<"Status: Distinction.\n";
    }
    
}