#include <iostream>
using namespace std;
int main();
class calculate{
public:

   void result(){
   cout<<"avarega\t\tmark"<<endl;
   cout<<"92-100\t\tA+"<<endl;
   cout<<"86-91\t\tA"<<endl;
   cout<<"79-85\t\tB+"<<endl;
   cout<<"70-78\t\tB"<<endl;
   cout<<"63-69\t\tC+"<<endl;
   cout<<"56-62\t\tC"<<endl;
   cout<<"50-55\t\tD"<<endl;
   cout<<"0-49\t\tF"<<endl;
   cout<<endl;


}

  void display(){
   float total = 0;
   float subjectArray[4];
   for(int i = 0 ; i<=4 ; i++){
     cout<<"enter subject #"<< i + 1<<": ";
     cin>>subjectArray[i];
     total+=subjectArray[i];

   }
  string letter;
   if(total > 92)
       letter = "A+";

   else if (total > 85)
         letter = "B+";
   else if (total > 79)
         letter = "B+";
   else if (total > 70)
         letter = "B";
   else if (total > 63)
         letter = "c+";
   else if (total > 56)
         letter = "c";
   else if (total > 50)
         letter = "D";
   else
         letter = "F";
   float avrg = total / 5;
   cout<<"total is "<<total<<endl;
   cout<<"your grade is "<<letter<<endl;
   cout<<"average is %"<<avrg<<endl;
  }



};

int main(){

    calculate cal;
    cal.result();
    cal.display();


}
