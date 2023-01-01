#include<iostream>
using namespace std;
template<class T>
class sort
{
    public:
    T a[50];
    int n;
    void accept()
    {
        cout<<"Enter the number of elements\n";
        cin>>n;
        cout<<"Enter the elements\n";
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
    }
    void selection_sort()
    {
        T temp;
        for (int i = 0; i < n; i++)
        {
            for(int j=i+1 ; j<n ; j++ )
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
            
                }
            } 
            
            
        }
        
    }
    void display()
    {
        for(int i=0 ; i<n ; i++ )
        {
            cout<<a[i]<<" ";
        }
    }
};
int main()
{
    int v;
    char ch;
    sort<int>s1;
    sort<float>s2;

    cout<<"********* SELECTION SORT *********";
    do
    {
        cout<<"\nsorting of integer and ffloat array"<<"\n";
        cout<<"\n1.For integer array \n";
        cout<<"\n2.For floating array \n";
        cout<<"\nEnter your choice \n";
        cin>>v;
        switch (v)
        {
        case 1:
            s1.accept();
            cout<<"\nYour elements are\n";
            s1.display();
            s1.selection_sort();
            cout<<"\nYour Sorted Elements Are :\n";
            s1.display();
            break;
        
        case 2:
        s2.accept();
            cout<<"\nYour elements are \n";
            s2.display();
            s2.selection_sort();
            cout<<"\nYour Sorted Elements Are :\n";
            s2.display();
            break;
        }
        cout<<endl;
        cout<<"\nDo you want to continue (y/n) : ";
        cin>>ch;


    } while (ch=='y' || ch=='Y');
    return 0;
    
}