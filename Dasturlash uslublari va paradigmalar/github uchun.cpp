#include<iostream> 
#include<string.h> 
#include<stdlib.h> 
using namespace std; 
class Oqituvchi{ 
 private: 
  string ismi;
  string familyasi;
  string sharifi; 
  int yoshi; 
  float oyligi; 
  string fani;
  public: 
   void show(){ 
   static int k=0; 
   cout<<++k<<" - Oqituvchi': "<<endl<<endl; 
   cout<<"Ismi: "<<ismi<<endl; 
   cout<<"Familyasi: "<<familyasi<<endl<<endl;
   cout<<"Sharifi: "<<sharifi<<endl<<endl; 
   cout<<"Yoshi: "<<yoshi<<endl<<endl;
   cout<<"Oyligi: "<<oyligi<<endl<<endl;
   cout<<"Fani nomi: "<<fani<<endl<<endl;
  }; 
  void input(){ 
   static int k=0;  
   cout<<++k<<" - Oqituvchi: "<<endl<<endl;
   cout<<"Ismi: "<<ismi; cin>>ismi; 
   cout<<"Familyasi: "; cin>>familyasi;
   cout<<"Sharifi: "; cin>> sharifi; 
   cout<<"Yoshi: "; cin>>yoshi; 
   cout<<"Oyligi: "; cin>>oyligi;
   cout<<"Fani: "; cin>> fani;  
   cout<<endl; 
  }
  void  qidir(string s){ 
      if(ismi.compare(s)==0)
    { 
    cout<<"Bunday oqituvchi mavjud: "<<endl; 
    show(); 
      }  
  }
}; 
int main(){ 
   Oqituvchi t[100]; 
   int N; cout<<"Oqituvchilar sonini kiriting: "; cin>>N; 
   for(int i=0; i<N; i++){ 
        t[i].input(); 
   } 
   string s; 
   cout<<endl<<"Qidirilayotgan oqituvchini ismini kiriting: "; cin>>s; 
   for(int i=0; i<N; i++){ 
       t[i].qidir(s); 
   }    
}

