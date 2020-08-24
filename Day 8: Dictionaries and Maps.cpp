
#include <iostream>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map <string,long> pb;
    string name;
    long num;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name>>num;
        pb[name]=num;
    } 
    while(cin>>name){
        if (pb.find(name) != pb.end()) {
        cout << name << "=" << pb.find(name)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
    }
    return 0;
}
