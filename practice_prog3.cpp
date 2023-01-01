#include<iostream>
#include<string>
using namespace std;

class publication
{
    protected:
    string title;
    float price;

    public:
    publication()
    {
        title=" ";
        price=0.0;
    }
    publicaton(string t,float p)
    {
        title=t;
        price=p;
    }

};
class book:public publication
{
    int pagecount;
    public:
    book()
    {
        pagecount=0;
    }
    book(string t,float p,int pc):publication(p,t)
    {
        pagecount=pc;

    }
    void display()
    {
        cout<<"TItle of the Book :"<<title<<endl;
        cout<<"Price of the Book :"<<price<<endl;
        cout<<"Pagecount of the Book :"<<pagecount<<endl;
    }

};
class CD:public publication
{
    float time;
    public:
    CD()
    {
        time=0.0;
    }
    CD(string t,float p,float tim)
    
    {
        time=tim;
    }
    void display()
    {
        cout<<"Price of the CD is :"<<price<<endl;
        cout<<"Time in MInutes :"<<time<<endl;
    }

};
int main()
{
    cout<<endl<<"BOok Data"<<endl;
    book b("C++",250,300);
    b.display();
    cout<<endl<<"CD Data"<<endl;
    CD c("programming",110,25.50);
    c.display();
    return 0;
}