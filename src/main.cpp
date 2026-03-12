#include "learn.hpp"

using namespace std;
uint32 full_name(array<string,5> *bandname,array<string,5> bandname1)
{
    for (size_t i = 0; i < 5; i++)
    {
        //array set must be that
        (*bandname)[i] = bandname1[i];
    }
    return true;
    
}

uint32 show_name(array<string,5> bandname)
{
    for (size_t i = 0; i < 5; i++)
    {
        cout<<bandname[i]<<"**";
    }    
    cout<< endl;
    return true;
}
uint32 teststring()
{
    cout<<"define but not used "<< endl;
}
uint32 teststring(string* test1)
{
    
    *test1 = "mygo";
    cout<<*test1<<endl;
    test1->clear();
    test1->append("mygo");
    cout<<*test1<<endl;
    test1->clear();
    string mygo = "mygo";
    string fuhao = "!!!!!";
    *test1 = mygo + fuhao;
    cout<<*test1<<endl;
    array<string,5> bandname1 = {"tomorin","gihaya","riki","rana","soyo"};
    array<string,5> bandname;
    full_name(&bandname,bandname1);
    show_name(bandname);
    string duiming = "popin party";
    string duiming2 = "mygo !!!!!";
    if(test1->compare(duiming))
    {
        cout<<*test1<<" not eaqul "<<duiming << endl;
    }
    else if(test1->compare(duiming2))
    {
        cout<<*test1<<" not eaqul "<<duiming2 << endl;
    }
    else
    {
        cout<<"hyw" << endl;
    }

    return true;
}

uint32 testband()
{
    //10 band vector & for base c++

}

int main(int argc, char const *argv[])
{
    cout<<"hello world"<<endl;
#if string_test
    string* test1 = new string;
    if (teststring(test1))
    {
        string band = "bang dream ";
        string party = "live band party";
        string bang_dream;
        bang_dream = band;
        bang_dream.append(party);
        cout<<bang_dream<<endl;
    }
    delete test1;
#endif
#if band_test
#endif
    return 0;
}
