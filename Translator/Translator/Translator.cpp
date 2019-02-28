#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//What this is is babies first coding is what this really is. 
//This is still a massive work in progress, so there is not much right now, but more will progress will be made. So far only one and two work.
int main()
{
	cout << "This will be a pseudo code translator. WIP" << endl;
	cout << "It takes what you put in and translate it into C++. Hopefully other languages too" << endl;
	cout << "EX: say: hello world, this will translate to cout << hello world << endl;" << endl;
	cout << "First say what you would like to say. If you want to pick a statement, type the name of the number you want. EX: if you want a cout statement, type one" << endl;
	cout << "The list goes:" << endl;
	cout << "1. say: = cout << (your sentence) << endl;"<< endl << "2. if: = if()" << endl << "3. else if: = else if ()" << endl << "4. else: = else()" << endl << "5. for: = for ()" << endl << "6. while: = while ()" <<
	endl << "7. value: = int" << endl << "8. bigValue: = double" << endl <<	"9. pointValue: float" << endl << "10. sentence: = string" << endl << "11. letter: = char" <<
	endl << "12. module: = %" << endl << "13. equal: = =" << endl << "14. equivalent: = ==" << endl << "15. subtract: = -" << endl << "16. add: = +" << endl << "17. multiply: = *"  <<
	endl << "18. divide: = /" << endl << "19. notEquivalent: = !=" << endl << endl;

	string x;
	getline(cin, x);

	if(x == "one") //the say: input
	{
		cout << "Next say what you want to put into the sentence. EX: hello world" << endl;

		string sentence;
		getline(cin, sentence);

		cout << "cout << " << sentence << " << endl;" << endl;
	}
	else if(x == "two") //if statement
	{
		cout << "What do you want to say? EX: x is equal 1" << endl;

		string statement;
		getline(cin, statement);
		
		cout << "Now say what what would happin if that first statement was true" << endl;

		string outcome;
		getline(cin, outcome);
			
		cout << "if(" << statement << ")" << endl;
		cout << "{" << endl;
		cout << outcome << endl;
		cout << "}" << endl;

	}
	
/*string input;
	getline(cin, input);

	cout << "next say what you want to put into the sentence. EX: hello world"<< endl;

	string sentence;
	getline(cin, sentence);
	
	if (input == "say:")
	{
		cout << "cout << " << sentence << " << endl;" << endl;
	}*/


system("pause");
}

