#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student : public Person {
private:
    vector<int> testScores;  
public:
    Student(string fn, string ln, int id, vector<int> scores) :
        Person(fn,ln,id),
        testScores (scores) {}

    char calculate() {
        int avg=0;
        for(auto i: testScores) avg += i;
        avg /= testScores.size();
        if(avg < 40) return 'T';
        else if(avg < 55) return 'D';
        else if(avg < 70) return 'P';
        else if(avg < 80) return 'A';
        else if(avg < 90) return 'E';
        else return 'O';
    }
};

      


int main() {
