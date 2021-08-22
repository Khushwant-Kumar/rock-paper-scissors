#include<iostream>
#include<bits\stdc++.h>
using namespace std;

void game(string,string,char,char);
int cp1=0;
int cp2=0;

int main()
{
    string p1,p2;
    int c1,c2,wish,done=0;
    char A,B;
    cout<<"enter your name--"<<endl;
    cin>>p1>>p2;

    cout<<"\nenter in this sequence\nstone-S\npaper-P\nscissor-C\nthread-T\n\n";

    while(!done)
    {
        c1=c2=0;
        while(!c1)
        {
            cout<<"\""<<p1<<"\""<< "enter your choice"<<endl;
            cin>>A;
            switch(A)
            {
            case 's':
            case 'S':
            case 'p':
            case 'P':
            case 'c':
            case 'C':
            case 't':
            case 'T':
                c1=1;
                break;
            default :
                cout<<"enter valid choice"<<endl;
                break;
            }
        }

        while(!c2)
        {

            cout<<"\""<<p2<<"\""<<" enter your choice"<<endl;
            cin>>B;
            switch(B)
            {
            case 's':
            case 'S':
            case 'p':
            case 'P':
            case 'c':
            case 'C':
            case 't':
            case 'T':
                c2=1;
                break;
            default :
                cout<<"enter valid choice"<<endl;
                break;
            }
        }


      game(p1,p2,A,B);

        cout<<"do u wanna play further(1/0)"<<endl;
        cin>>wish;
        cout<<endl;
        if(wish==0)
            done=1;
    }

    if(cp1>cp2)
    cout<<"\""<<p1<<" won by "<<cp1-cp2<<" points"<<endl;
    else if(cp2>cp1)
    cout<<"\""<<p2<<" won by "<<cp2-cp1<<" points"<<endl;
    else
        cout<<"LOL!! TIED\n"<<endl;


    cout<<"\nwe hope you enjoyed"<<endl;
    return 0;
}

void game(string p1,string p2,char A,char B)
{
    if((A=='S'||A=='s')&&(B=='P'||B=='p'))
       {
           cout<<"\""<<p2<<"\""<<" wins"<<endl;
           cp2++;
       }
    else if((A=='P'||A=='p')&&(B=='S'||B=='s'))
       {
           cout<<"\""<<p1<<"\""<<" wins"<<endl;
           cp1++;
       }
    else if((A=='S'||A=='s')&&(B=='C'||B=='c'))
       {
           cout<<"\""<<p1<<"\""<<" wins"<<endl;
           cp1++;
       }
    else if((A=='C'||A=='c')&&(B=='S'||B=='s'))
       {
           cout<<"\""<<p2<<"\""<<" wins"<<endl;
           cp2++;
       }
    else if((A=='S'||A=='s')&&(B=='T'||B=='t'))
       {
           cout<<"\""<<p2<<"\""<<" wins"<<endl;
           cp2++;
       }
    else if((A=='T'||A=='t')&&(B=='S'||B=='s'))
       {
           cout<<"\""<<p1<<"\""<<" wins"<<endl;
           cp1++;
       }
    else if((A=='P'||A=='p')&&(B=='C'||B=='c'))
       {
           cout<<"\""<<p2<<"\""<<" wins"<<endl;
           cp2++;
       }
    else if((A=='C'||A=='c')&&(B=='P'||B=='p'))
       {
           cout<<"\""<<p1<<"\""<<" wins"<<endl;
           cp1++;
       }
    else if((A=='P'||A=='p')&&(B=='T'||B=='t'))
       {
           cout<<"\""<<p2<<"\""<<" wins"<<endl;
           cp2++;
       }
    else if((A=='T'||A=='t')&&(B=='P'||B=='p'))
       {
           cout<<"\""<<p1<<"\""<<" wins"<<endl;
           cp1++;
       }
    else if((A=='C'||A=='c')&&(B=='T'||B=='t'))
       {
           cout<<"\""<<p1<<"\""<<" wins"<<endl;
           cp1++;
       }
    else if((A=='T'||A=='t')&&(B=='C'||B=='c'))
       {
           cout<<"\""<<p2<<"\""<<" wins"<<endl;
           cp2++;
       }
       else
        cout<<"how to judge the same choices!! umm.......\n"<<endl;

       return;

}
