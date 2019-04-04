// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
using namespace std;

class Language
{
public:
	virtual void trans_say(string msg) = 0;
	virtual void trans_if(string expr, string bool_expr) = 0;
	virtual void trans_elseif(string expr, string bool_expr) = 0;
	virtual void trans_else(string expr, string bool_expr) = 0;
	virtual void trans_for(string expr, string bool_expr) = 0;
	virtual void trans_while(string expr, string bool_expr) = 0;
	virtual void trans_value(string expr, string bool_expr) = 0;
	virtual void trans_bigValue(string expr, string bool_expr) = 0;
	virtual void trans_pointValue(string expr, string bool_expr) = 0;
	virtual void trans_sentence(string expr, string bool_expr) = 0;
	virtual void trans_letter(string expr, string bool_expr) = 0;
	virtual void trans_equal(string expr, string bool_expr) = 0;
	virtual void trans_equivalent(string expr, string bool_expr) = 0;
	virtual void trans_notEquivalent(string expr, string bool_expr) = 0;
	virtual void trans_module(string expr, string bool_expr) = 0;
	virtual void trans_subtract(string expr, string bool_expr) = 0;
	virtual void trans_add(string expr, string bool_expr) = 0;
	virtual void trans_multiply(string expr, string bool_expr) = 0;
	virtual void trans_divide(string expr, string bool_expr) = 0;

	void getStatements() {
		bool quit = false;
		while (!quit)
		{
			cout << "What command do you want?\n";
			string cmd, sub;
			cin >> cmd;
			getline(cin, sub);

			int i;
			string newSen = "";
			for (i = 1; i < sub.length(); i++)
			{
				newSen += sub.at(i);
			}

			if (cmd == "say:")
			{
				trans_say(newSen);
			}

			else if (cmd == "if:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "elseif:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "else:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "for:")
			{
				cout << "What is the boolean expression?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "while:")
			{
				cout << "What is the boolean expression?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_while(newSen, bool_expr);
			}

			else if (cmd == "value:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "bigValue:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "pointValue:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "sentence:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "letter:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_if(newSen, bool_expr);
			}

			else if (cmd == "equal:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_equal(newSen, bool_expr);
			}

			else if (cmd == "equivalent:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_equivalent(newSen, bool_expr);
			}

			else if (cmd == "notEquivalent:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_notEquivalent(newSen, bool_expr);
			}

			else if (cmd == "module:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_module(newSen, bool_expr);
			}

			else if (cmd == "subtract:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_subtract(newSen, bool_expr);
			}

			else if (cmd == "add:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_add(newSen, bool_expr);
			}

			else if (cmd == "multiply:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_multiply(newSen, bool_expr);
			}

			else if (cmd == "divide:")
			{
			cout << "What is the statement conditions?\n";
			string bool_expr;
			getline(cin, bool_expr);

			trans_divide(newSen, bool_expr);
			}

			else
			{
				cout << "Here is a list of commands of possible commands, depending on the language:" << endl;
				cout << "say:\n" <<
					"if:\n" <<
					"elseif:\n" <<
					"else:\n" <<
					"for:\n" <<
					"while:\n" <<
					"value:\n" <<
					"bigValue:\n" <<
					"pointValue:\n" <<
					"sentence:\n" <<
					"letter:\n\n" <<

					//Not what I want for the final product, but an ok sub for the time. Come back to this because this is like putting a band-aid over a broken bone
					//"If you want to use any of these, just enter the name." << "Then you will get a promt to enter the two variables that you want and also calculate it for you.\n" <<
					"equal:\n" <<
					"equivalent:\n" <<
					"notEquivalent:\n" <<
					"module:\n" <<
					"subtract:\n" <<
					"add:\n" <<
					"multiply:\n" <<
					"divide:\n" << endl;
			}
		}
	}
};

class CPP : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "cout << \"" << msg << "\" << endl;\n";
	}

	virtual void trans_if(string expr, string bool_expr)
	{
		cout << "if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_elseif(string expr, string bool_expr)
	{
		cout << "else if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}
	virtual void trans_else(string expr, string bool_expr)
	{
		cout << "else (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_for(string expr, string bool_expr)
	{
		cout << "for (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_while(string expr, string bool_expr)
	{
		cout << "while (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_value(string expr, string bool_expr)
	{
		cout << "int " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_bigValue(string expr, string bool_expr)
	{
		cout << "double " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_pointValue(string expr, string bool_expr)
	{
		cout << "float " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_sentence(string expr, string bool_expr)
	{
		cout << "string " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_letter(string expr, string bool_expr)
	{
		cout << "char " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_equal(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}
	
	virtual void trans_equivalent(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_notEquivalent(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_module(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_subtract(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_add(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_multiply(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_divide(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	
};

class Java : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "System.out.print(\"" << msg << "\")\n;";
	}

	virtual void trans_if(string expr, string bool_expr)
	{
		cout << "if (" << expr << ")\n" <<  "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_elseif(string expr, string bool_expr)
	{
		cout << "else if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}
	virtual void trans_else(string expr, string bool_expr)
	{
		cout << "else (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_for(string expr, string bool_expr)
	{
		cout << "for (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_while(string expr, string bool_expr)
	{
		cout << "while (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		getStatements();
	}

	virtual void trans_value(string expr, string bool_expr)
	{
		cout << "int " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_bigValue(string expr, string bool_expr)
	{
		cout << "double " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_pointValue(string expr, string bool_expr)
	{
		cout << "float " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_sentence(string expr, string bool_expr)
	{
		cout << "string " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_letter(string expr, string bool_expr)
	{
		cout << "char " << bool_expr << endl;
		getStatements();
	}

	virtual void trans_equal(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_equivalent(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_notEquivalent(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_module(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_subtract(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_add(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_multiply(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_divide(string expr, string bool_expr)
	{
		cout << bool_expr << endl;
		getStatements();
	}

	
};

/*class Python : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "print(\"" << msg << "\");\n";
	}

	virtual void trans_if(string msg)
	{

	}
};*/

void start()
{
	cout << "Choose C++ or Java: ";
	int i;
	string lang = "";

	cin >> lang;
	cin.ignore();


	Language *l = NULL;
	if (lang == "C++")
	{
		l = new CPP();
	}
	else if (lang == "Java")
	{
		l = new Java();
	}

	else
	{
		cout << "Try again numb nuts\n";
		start();
	}
	
	l->getStatements();
}

int main()
{
	start();
	return 0;
}

