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
	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_module(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_add(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2) = 0;

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

				trans_elseif(newSen, bool_expr);
			}

			else if (cmd == "else:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_else(newSen, bool_expr);
			}

			else if (cmd == "for:")
			{
				cout << "What is the boolean expression?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_for(newSen, bool_expr);
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

				trans_value(newSen, bool_expr);
			}

			else if (cmd == "bigValue:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_bigValue(newSen, bool_expr);
			}

			else if (cmd == "pointValue:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_pointValue(newSen, bool_expr);
			}

			else if (cmd == "sentence:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_sentence(newSen, bool_expr);
			}

			else if (cmd == "letter:")
			{
				cout << "What is the statement conditions?\n";
				string bool_expr;
				getline(cin, bool_expr);

				trans_letter(newSen, bool_expr);
			}

			// These are commands that give you the ability to make commands such as equal signs.
			else if (cmd == "equal:")
			{
				cout << "What two variables do you want make equal to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_equal(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "equivalent:")
			{
				cout << "What two variables do you want make equivalent to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_equivalent(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "notEquivalent:")
			{
				cout << "What two variables do you want make not equivalent to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_notEquivalent(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "module:")
			{
				cout << "What two variables do you want make module to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_module(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "subtract:")
			{
				cout << "What two variables do you want make subtract each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_subtract(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "add:")
			{
				cout << "What two variables do you want make add to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_add(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "multiply:")
			{
				cout << "What two variables do you want make multiply to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_multiply(newSen, bool_expr1, bool_expr2);
			}

			else if (cmd == "divide:")
			{
				cout << "What two variables do you want make divide to each other\n";
				string bool_expr1, bool_expr2;
				getline(cin, bool_expr1);
				getline(cin, bool_expr2);

				trans_divide(newSen, bool_expr1, bool_expr2);
			}

			else
			{
				cout << "Here is a list of commands of possible commands, depending on the language:" << endl;
				cout << "say:\n" <<
					"if: = if (conditions)\n" <<
					"elseif: = else if (conditions)\n" <<
					"else: = else\n" <<
					"for: = for(initialization; condition ; increment/decrement)\n" <<
					"while: = while (Boolean_expression)\n" <<
					"value: = int\n" <<
					"bigValue: = double\n" <<
					"pointValue: float\n" <<
					"sentence: = string\n" <<
					"letter: = char\n\n" <<

					//Not what I want for the final product, but an ok sub for the time. Come back to this because this is like putting a band-aid over a broken bone
					"If you want to use any of these, just enter the name." << "Then you will get a promt to enter the two variables that you want and also calculate it for you.\n" <<
					"equal: = =\n" <<
					"equivalent: = ==\n" <<
					"notEquivalent: = !=\n" <<
					"module: = %\n" <<
					"subtract: = -\n" <<
					"add: = +\n" <<
					"multiply: = *\n" <<
					"divide: = /\n" << endl;
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

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " = " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " == " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " != " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " % " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " - " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " + " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " * " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " / " << bool_expr2 << endl;
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

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " = " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " == " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " != " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " % " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " - " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " + " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " * " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " / " << bool_expr2 << endl;
		getStatements();
	}


};

class Python : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "print(\"" << msg << "\");\n";
	}

	virtual void trans_if(string expr, string bool_expr)
	{
		cout << "if " << expr << " in "<< bool_expr << ":\n";
		getStatements();
	}

	virtual void trans_elseif(string expr, string bool_expr)
	{
		cout << "elif " << expr << " in " << bool_expr << ":\n";
		getStatements();
	}
	virtual void trans_else(string expr, string bool_expr)
	{
		cout << "else " << expr << " in " << bool_expr << ":\n";
		getStatements();
	}

	virtual void trans_for(string expr, string bool_expr)
	{
		cout << "for " << expr << " in " << bool_expr <<":\n";
		getStatements();
	}

	virtual void trans_while(string expr, string bool_expr)
	{
		cout << "What do you want to make your statement true?\n";
		string bool_stmt;
		getline(cin, bool_stmt);
		cout << "while " << expr  << " " << bool_stmt << " " << bool_expr << ":\n";
		getStatements();
	}

	virtual void trans_value(string expr, string bool_expr)
	{
		cout << expr << endl;
		getStatements();
	}

	virtual void trans_bigValue(string expr, string bool_expr)
	{
		cout << expr << endl;
		getStatements();
	}

	virtual void trans_pointValue(string expr, string bool_expr)
	{
		cout << expr << endl;
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

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " = " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " == " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " != " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " % " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " - " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " + " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " * " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << bool_expr1 << " / " << bool_expr2 << endl;
		getStatements();
	}
};

void start()
{
	cout << "Choose C++, Java, or Python: ";
	
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

	else if (lang == "Python")
	{
		l = new Python();
	}

	else if (lang == "info")
	{
		cout << "What program do you want to learn about?" << endl;
		string prg;
		cin >> prg;
		if (prg == "C++")
		{
			cout << "General Info:\n";
			cout << "C++ is more than likely the first language that any one tries to learn.\n";
			cout << "It is an extremely simple and intuitive language that most programs are made out of.\n";
			cout << "Being both simple and easy, this program will help you learn the basics of C++ in no time.\n\n";
			start();
		}
		else if (prg == "Java")
		{
			cout << "General Info:\n";
			cout << "Java is extremely similar to C++ in almost every way.\n";
			cout << "After learning about C++, you should be able to understand how to do Java.\n\n";
			cout << "Codeing Info:";
			cout << "The biggest difference between C++ and Java is how you write things to the terminal. Java uses System.out.print("")\n";
			cout << "and C++ uses cout << \"\" << endl;\n\n";
			start();
		}
		else if (prg == "Python")
		{
			cout << "General Info:\n";
			cout << "Python is a bit more complex.\n";
			cout << "Python is more englished based, so when you actually read it, is should somewhat read like a book of sorts.\n";
			cout << "All python scripts will not use \";\" at any point, you will be using \":\" sometimes, but not often.\n";
			cout << "Another big difference between Python and the other languages, is that it relies heavily on indentation.\n";
			cout << "If you miss an indentation, then your program won't work\n\n";
			cout << "Codeing Info:\n";
			cout << "There are several statement that work differently.\n";
			cout << "The for statement is more complex then most. It goes like this; for [variable] in [variable].\n";
			cout << "EX:\n";
			cout << "fruits = [\"apple\", \"banana\", \"cherry\"]\n";
			cout << "for x in fruits:\n";
			cout << "print (x)\n";
			cout << "or\n";
			cout << "for x in \"fruits\":\n";
			cout << "print (x)\n\n";
			cout << "The while statement is also different. For it to work it must need a statement that is a boolian function.\n";
			cout << "EX:\n";
			cout << "i = 1\n";
			cout << "while i < 6:\n";
			cout << "print(i)\n\n";
			cout << "Unlike C++ or Java, when assigning a value to a variable, you don't need to delclare what it is.\n";
			cout << "EX:\n";
			start();
		}

		else
		{
			cout << "That’s not a language, at least at the time of writing this code." << endl;
		}
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
	cout << "If you are new to this and don't know what to do, type \"info\".\n";
	cout << "If you know what language you want, but don't know the commands; follow these commands.\n";
	cout << "First choose the language that you want, then type commands: to see a list commands you can try.\n";
	cout << "I would highly recommend looking at the info on Python, because it is a much more complicated language to learn.\n";
	start();
	return 0;
}

