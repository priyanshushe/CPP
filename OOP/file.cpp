#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string st1=" I am ChatGPT\n"
    "an ai model created by Openai\n"
     "designed to understand and generate human-like text.\n"
    " My foundation is built on a large dataset of information,\n"
    " which allows me to assist with a wide variety of topics such as programming,\n"
    " science, writing, learning, and problem-solving.\n"
    " I can explain concepts, create code, summarize information, and even generate creative content.\n"
    " My goal is to make learning and working easier, faster, and more engaging.\n"
    " While I do not have feelings or personal experiences, I adapt to your needs and style.\n"
    " Think of me as a knowledgeable, always-available study and work companion.\n";
    string st2;
    //ofstream f1("file.txt");//opening file using constructor.
    ofstream f1;
    f1.open("file.txt");//opening file using open() operator
    f1<<st1;
    f1.close();
    //ifstream in("file.txt");//using constructor
    ifstream in;
    in.open("file.txt");
    //in>>st2;//If we used this then the first word will be already pointed to st2 and then while
    //loop will start reading from 2nd word.
    while(in.eof()==0)
    //while(getline(in,st2))
    {
        getline(in,st2);
        cout<<st2<<endl;
    }
    in.close();
    //in>>st2;
    //cout<<st2;
}