#include <vector>
#include <string>
#include <iostream>

using namespace std;

// TODO: Write method to create and output all permutations of the list of names.
void PrintAllPermutations(const vector<string> &permList, const vector<string> &nameList) {

vector <string> tempVec;
tempVec.resize(nameList.size());
vector <string> tempPerm;

unsigned int i;

string tmpString;

if (nameList.size() == 0){
   
for (i = 0;i < permList.size(); i++){
cout << ""<< permList.at(i);
}
  
  cout << endl;
}
else {
   
for (int i = 0; i < nameList.size(); i++){
tempVec = nameList;
tmpString = tempVec.at(i);
cout << tmpString<< ", " ;
tempPerm.push_back(tmpString);
tempVec.erase(tempVec.begin() + i);

PrintAllPermutations(tempPerm, tempVec);

}
}
}

int main() {
vector<string> nameList;
vector<string> permList;
string name;

// TODO: Read in a list of names; stop when -1 is read. Then call recursive method.

cin >> name;
while (name != "-1"){
nameList.push_back(name);
cin >> name;
}
PrintAllPermutations(permList, nameList);

return 0;
}
