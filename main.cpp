#include <bits/stdc++.h>
using namespace std;
namespace fs = filesystem;
void Add(int ID)
{
    string filename = to_string(ID);
    string name,surname;
    int age;
    filename.append(".txt");
    ofstream file("C:/Users/home/Desktop/projects/My Project/Data/" + filename);
    
    cin >> name >> surname >> age;
    file << name << " " << surname << " " << age;

}
 
void List()
{

    ifstream file("data.txt");
  if(file.is_open()) 
  cout << file.rdbuf();


}
void Modify()
{
    string name ;
    string  surname;
    cout << "Enter the the name and surname of whos's information you want to change";
    cin >> name >> surname; 
   


}
int main()
{
    int age;
    int id=1;
    string name,surname;
    int conditioner;

   do
   {
       cout << "My Project" << endl << endl;
       cout << "choose a number for the action you want"<< endl << endl;
       cout << "1. Add     Records"<<endl 
            << "2. List     Records"<<endl
            << "3. Modify      Records" <<endl
            << "4. Delete      Records" << endl
            << "5. Exit     Program"<< endl
            << "6. Clear     Terminal"<< endl;
        cin >> conditioner;
        switch(conditioner)
        {
        case 1:
        system("CLS"); 
        cout << "         Please Enter name,surname and age in the following order: " << endl;
        Add(id);
        id++;
        break;
        case 2: 
        system("CLS");
        cout << "         Listing the students " << endl;
            List();
            break;
            case 3: 
            system("CLS");
            Modify();
            break;
        case 6: system("CLS"); break;
        }
   }
   while (conditioner!=5);
 
   
}
