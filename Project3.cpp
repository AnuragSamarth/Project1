#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
struct emp
{
    string name,id,address;
    int contact,salary;
};
emp e[100];
int total=0;
void empdata()
{
   int choice;
   cout<<"How many employees data do you want to enter ??"<<endl;
   cin>>choice;
   for(int i=total;i<total+choice;i++)
   {
    cout<<"Enter data of employees"<<i+1<<endl;
    cout<<"Enter Name :";
    cin>>e[i].name;
    cout<<"ID :";
    cin>>e[i].id;
    cout<<"Contact :";
    cin>>e[i].contact;
    cout<<"Salary :";
    cin>>e[i].salary;
   }
   total=total+choice;
}
void show()
{
  if(total!=0)
  {
     for(int i=0;i<total;i++)
     {
        cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"Id :"<<e[i].id<<endl;
        cout<<"Address :"<<e[i].address<<endl;
        cout<<"Salary :"<<e[i].salary<<endl;
        cout<<"Contact :"<<e[i].contact<<endl;
     }
  }
  else
  {
    cout<<"Your record is empty"<<endl;
  }
}
void search()
{
    if(total!=0)
    {
     string id;
     cout<<"Enter id of data which you want to search"<<endl;
     cin>>id;
     for(int i=0;i<total;i++)
     {
      if(id==e[i].id)
      {
          cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"Id :"<<e[i].id<<endl;
        cout<<"Address :"<<e[i].address<<endl;
        cout<<"Salary :"<<e[i].salary<<endl;
        cout<<"Contact :"<<e[i].contact<<endl;
        break;
      }
      if(i==total-1)
      {
         cout<<"NO such record found"<<endl;
      }
     }
    }
    else
    {
       cout<<"Your record is empty"<<endl;
    }
}
void updata()
{
     if(total!=0)
     {
        string id;
     cout<<"Enter id of data which you want to update"<<endl;
     cin>>id;
     for(int i=0;i<total;i++)
     {
      if(id==e[i].id)
      {
         cout<<"Previous data"<<endl;
        cout<<"Data of employee "<<i+1<<endl;
        cout<<"Employee Name :"<<e[i].name<<endl;
        cout<<"Id :"<<e[i].id<<endl;
        cout<<"Address :"<<e[i].address<<endl;
        cout<<"Salary :"<<e[i].salary<<endl;
        cout<<"Contact :"<<e[i].contact<<endl;
        cout<<"Enter new data"<<endl;
        cout<<"Enter Name :";
        cin>>e[i].name;
        cout<<"ID :";
        cin>>e[i].id;
        cout<<"Contact :";
        cin>>e[i].contact;
        cout<<"Salary :";
        cin>>e[i].salary;
        break;
      }
      if(i==total-1)
      {
         cout<<"NO such record found"<<endl;
      }
     }
    }
     else
     {
      cout<<"Your record is empty"<<endl;
     }
}
void del()
{
  if(total!=0)
  {
     char user;
     cout<<"Press 1 to delete full record"<<endl;
     cout<<"Press 2 to delete specific record"<<endl;
     user=getch();
     if(user=='1')
     {
      total = 0;
      cout<<"All record is deleted"<<endl;
     }
    else if(user==2)
    {
      string id;
     cout<<"Enter id of data which you want to delete"<<endl;
     cin>>id;
     for(int i=0;i<total;i++)
     {
      if(id==e[i].id)
      {
         for(int j=i;j<total;j++)
        {
         e[j].name=e[j+1].name;
         e[j].id=e[j+1].id;
         e[j].address=e[j+1].address;
         e[j].contact=e[j+1].contact;
         e[j].salary=e[j+1].salary;
         total--;
         cout<<"Your required recored is deleted"<<endl;
         break;
        }
        if(i==total-1)
        {
         cout<<"No such record found"<<endl;
        }
     }
    }
  }
  }
  else
  {
   cout<<"Your record is empty"<<endl;
  }
}
int main()
{
    cout<<"\n\n\t\tEmployee Management System"<<endl;
    cout<<"\n\n\t\tSign Up"<<endl;
    string username,password;
    cout<<"\n\t\tEnter username :";
    cin>>username;
    cout<<"\n\t\tEnter password :";
    cin>>password;
    cout<<"\n\tYour id is creating please wait";
    for(int i=0;i<4;i++)
    {
        cout<<".";
        Sleep(1000);
    }
    cout<<"\n\n\t\tYoue Id cerated successfully"<<endl;
    system("CLS");
    stat:
    system("CLS");
     cout<<"\n\n\t\tEmployee Management System"<<endl;
     cout<<"\n\n\t\tLogin"<<endl;
     string username1,password1;
     cout<<"Username :";
     cin>>username1;
     cout<<"Password :";
     cin>>password1;
     if(username==username1&&password==password1)
     {
        system("CLS");
        char user;
        while(1)
        {
            cout<<"\n\nPress 1 to enter data"<<endl;
            cout<<"Press 2 to show data"<<endl;
            cout<<"Press 3 to search data"<<endl;
            cout<<"Press 4 to upload data"<<endl;
            cout<<"Press 5 to delete data"<<endl;
            cout<<"Press 6 to logout"<<endl;
            cout<<"Press 7 to exit"<<endl;
            user=getch();
            system("CLS");
            switch(user)
            {
                case '1':
                empdata();
                break;
                case '3':
                show();
                break;
                case '4':
                updata();
                break;
                case '5':
                del();
                break;
                case '6':
                goto stat;
                break;
                default:
                cout<<"\aInvalid input"<<endl;
                break;
            }

        }
     }
     else if(username1!=username)
     {
        cout<<"Your username is incorrect"<<endl;
        Sleep(3000);
        goto stat;
     }
     else if(password1!=password)
     {
        cout<<"Your password is incorrect"<<endl;
        Sleep(3000);
        goto stat;
     }
    return 0;
}