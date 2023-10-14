#include<bits/stdc++.h>
using namespace std;
void mergeTextFiles(){
    string FileName;
    cout<<"Drag file to te your install path.Merge file name(type exit to exit):";
    cin>>FileName;
    if(FileName=="exit")
        return;
    cout<<endl;
    string runsys="copy *.txt "+FileName;
    system(runsys.c_str());
    cout<<"Copy Comeplete!"<<endl;
    return;
}
void help(){
    cout<<"1.Type merge to merge text files!"<<endl;
    cout<<"2.Type close to exit easytool!"<<endl;
    return;
}
int main(){
    cout<<"Welcome to use easytool v1.0.0! Type help to get help."<<endl;
    string st;
    while(1){
        cin>>st;
        if(st=="merge")
            mergeTextFiles();
        else if(st=="help")
            help();
        else if(st=="close")
            return 0;
        else 
            cout<<"Not a command. Type help to get commands."<<endl;
    }
    return 0;
}