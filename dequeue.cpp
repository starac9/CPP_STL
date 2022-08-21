#include<iostream>
#include<deque>
using namespace std;
int main(){
  deque<int>d;
d.push_back(1);
d.push_front(2);
//d.pop_front();
cout << endl;
cout <<"Print First Index Element->"<< d.at(1)<< endl;
cout <<"front"<<d.front()<< endl;
cout <<"back"<< d.back()<< endl;
cout <<"Empty or not"<< d.empty()<< endl;
cout <<"before erase"<< d.size()<< endl;
d.erase(d.begin(),d.begin()+1);
cout <<"after erase"<< d.size()<< endl;
for(int i:d){
  cout <<i<< endl;
}
}
 
// ------------------OUTPUT-----------------------------

// Print First Index Element->1
// front2
// back1
// Empty or not
// before erase2
// after erasel
//  0