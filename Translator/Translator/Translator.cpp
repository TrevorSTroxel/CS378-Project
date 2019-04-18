// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>
#include <vector>
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
			string cmd;
			cin >> cmd;
			cin.ignore();

			string sub;

			//vector<string> response;

			/*if (cmd == "say:") {
				cout << "What do you want your sentence to say?\n";
				string temStr = "";
				getline(cin, temStr);
				response.push_back(temStr);
			}*/

			if (cmd == "say:")
			{
				cout << "What do you want your sentence to say?\n";
				getline(cin, sub);
				trans_say(sub);
			}

		/*	else if (cmd == "if:")
			{
				cout << "What conditions do you want?\n";
				cout << "EX: x = 9\n";

				cout << "What happens if " << newSen << " is true?\n";
				cout << "EX: cout << \"Hello world\" << endl; ";
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
			}*/

			else
			{
				cout << "Here is a list of commands of possible commands for C++ and Java" << endl;
				cout << "say: cout << (your sentence) << endl; (C++) OR System.out.println(\"your sentence\"); (Java)\n" <<
					"if: = if (conditions);\n" <<
					"elseif: = else if (conditions);\n" <<
					"else: = else (conditions);\n" <<
					"for: = for(initialization; condition ; increment/decrement);\n" <<
					"while: = while (Boolean_expression);\n" <<
					"value: = int (variable name);\n" <<
					"bigValue: = double (variable name);\n" <<
					"pointValue: float (variable name);\n" <<
					"sentence: = string (variable name);\n" <<
					"letter: = char (variable name);\n\n" <<

					//Not what I want for the final product, but an ok sub for the time. Come back to this because this is like putting a band-aid over a broken bone
					"If you want to use any of these, just enter the name." << "Then you will get a promt to enter the two variables that you want and also calculate it for you.\n" <<
					"equal: = =\n" <<
					"equivalent: = ==\n" <<
					"notEquivalent: = !=\n" <<
					"module: = %\n" <<
					"subtract: = -\n" <<
					"add: = +\n" <<
					"multiply: = *\n" <<
					"divide: = /\n\n";

				cout << "Here is a list of commands of possible commands for Python" << endl;
				cout << "say: print(\"your sentence\")\n" <<
					"if: = if conditions\n" <<
					"elseif: = elif conditions\n" <<
					"else: = else conditions\n" <<
					"for: = for variable in variable\n" <<
					"while: = while boolean_expression\n" <<
					"value: = variable = int(number)\n" <<
					"bigValue: N/A\n" <<
					"pointValue: variable = float(number)\n" <<
					"sentence: = str = str(number))\n" <<
					"letter: = N\A\n\n" <<

					//Not what I want for the final product, but an ok sub for the time. Come back to this because this is like putting a band-aid over a broken bone
					"If you want to use any of these, just enter the name." << "Then you will get a promt to enter the two variables that you want and also calculate it for you.\n" <<
					"equal: = =\n" <<
					"equivalent: = ==\n" <<
					"notEquivalent: = !=\n" <<
					"module: = %\n" <<
					"subtract: = -\n" <<
					"add: = +\n" <<
					"multiply: = *\n" <<
					"divide: = /\n\n";
				cout << "If you are still confused by this, type \"examples\" to see examples of code and how it works.\n";
			}
		}
	}
};

class CPP : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "int main ()\n";
		cout << "{\n";
		cout << "cout << \"" << msg << "\" << endl;\n";
		cout << "}\n";
	}

	virtual void trans_if(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		cout << "if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_elseif(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		cout << "else if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}
	virtual void trans_else(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "else (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_for(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "for (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_while(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "while (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_value(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "int " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_bigValue(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "double " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_pointValue(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "float " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_sentence(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "string " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_letter(string expr, string bool_expr)
	{
		cout << "int main ()\n";
		cout << "{\n";
		
		cout << "char " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " = " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " == " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " != " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " % " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " - " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " + " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " * " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "int main ()\n";
		cout << "{\n";

		cout << bool_expr1 << " / " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}


};

class Java : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "System.out.print(\"" << msg << "\")\n;";
		cout << "}\n";
	}

	virtual void trans_if(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_elseif(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "else if (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}
	virtual void trans_else(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "else (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_for(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "for (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_while(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "while (" << expr << ")\n" << "{\n" << bool_expr << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_value(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "int " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_bigValue(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "double " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_pointValue(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "float " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_sentence(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "string " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_letter(string expr, string bool_expr)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << "char " << bool_expr << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " = " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " == " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " != " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " % " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " - " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " + " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " * " << bool_expr2 << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "public class Main\n";
		cout << "{\n";

		cout << bool_expr1 << " / " << bool_expr2 << endl;
		cout << "}\n";
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
		cout << "What do you want to make your statement true? (EX: <, >, <=, >=)\n";
		string bool_stmt;
		getline(cin, bool_stmt);
		cout << "while " << expr << " " << bool_stmt << " " << bool_expr << ":\n";
		getStatements();
	}

	virtual void trans_value(string expr, string bool_expr)
	{
		cout << "int(" << expr << ")" << endl;
		getStatements();
	}

	virtual void trans_bigValue(string expr, string bool_expr)
	{
		cout << "The double value dosn't exist in Python" << endl;
	}

	virtual void trans_pointValue(string expr, string bool_expr)
	{
		cout << "float(" << expr << ")" << endl;
		getStatements();
	}

	virtual void trans_sentence(string expr, string bool_expr)
	{
		cout << "str("<< expr << ")" << endl;
		getStatements();
	}

	virtual void trans_letter(string expr, string bool_expr)
	{
		cout << expr << " = " << "\"" << bool_expr << "\"" << endl;
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

	int i;
	string lang = "";

	getline(cin, lang);

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

	else if (lang == "Info" || lang == "info")
	{
		cout << "What program do you want to learn about? We have C++, Java, or Python" << endl;
		string prg;
		getline(cin, prg);

		if (prg == "C++" || prg == "c++" )
		{
			cout << "\n";
			cout << "General Info:\n";
			cout << "C++ is more than likely the first language that any one tries to learn.\n";
			cout << "Most code will look something like this:\n";
			cout << "int main()\n";
			cout << "{\n";
			cout << "code\n";
			cout << "}\n\n";
			cout << "It is an extremely simple and intuitive language that most programs are made out of.\n";
			cout << "Being both simple and easy, this program will help you learn the basics of C++ in no time.\n\n";
			cout << "Code Examples\n";
			cout << "say: = cout << (your sentence) << endl;\n" <<
				"if: = if (conditions)\n" <<
				"elseif: = else if (conditions)\n" <<
				"else: = else\n" <<
				"for: = for(initialization; condition ; increment/decrement)\n" <<
				"while: = while (boolean_expression)\n" <<
				"value: = int (variable)\n" <<
				"bigValue: = double (variable)\n" <<
				"pointValue: float (variable)\n" <<
				"sentence: = string (variable)\n" <<
				"letter: = char (variable)\n\n" <<

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

			cout << "Choose C++, Java, or Python: \n";
			start();
		}

		else if (prg == "Java" || prg == "java")
		{
			cout << "\n";
			cout << "General Info:\n";
			cout << "Java is extremely similar to C++ in almost every way.\n";
			cout << "Most code will look something like this:\n";
			cout << "public class Main\n";
			cout << "{\n";
			cout << "code\n";
			cout << "}\n";
			cout << "After learning about C++, you should be able to understand how to do Java.\n\n";
			cout << "Codeing Info:";
			cout << "The biggest difference between C++ and Java is how you write things to the terminal. Java uses System.out.print("")\n";
			cout << "and C++ uses cout << \"\" << endl;\n\n";
			cout << "Code Examples:\n";
			cout << "say: = System.out.println(\"your sentence\")\n" <<
				"if: = if (conditions)\n" <<
				"elseif: = else if (conditions)\n" <<
				"else: = else\n" <<
				"for: = for(initialization; condition ; increment/decrement)\n" <<
				"while: = while (boolean_expression)\n" <<
				"value: = int (variable)\n" <<
				"bigValue: = double (variable)\n" <<
				"pointValue: float (variable)\n" <<
				"sentence: = string (variable)\n" <<
				"letter: = char (variable)\n\n" <<

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
			cout << "Choose C++, Java, or Python: \n";
			start();
		}

		else if (prg == "Python" || prg == "python")
		{
			cout << "\n";
			cout << "General Info:\n";
			cout << "Python is both more complex and simpler at the same time.\n";
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
			cout << "Unlike C++ or Java, when assigning a value to a variable, you don't need to declare what it is.\n";
			cout << "Python will auto detect what you want a assign the variable with out you having too.\n";
			cout << "EX:\n";
			cout << "x = 1, Python assumes this is a int.\n";
			cout << "y = 2.8, Python assumes this is a float.\n";
			cout << "z = 1j Python assumes this is a complex.\n";
			cout << "However, if you want you can specify what each number is, despite if it is true or not.\n\n";
			cout << "Code Examples:\n";
			cout << "say: print(\"your sentence\")\n" <<
				"if: = if conditions\n" <<
				"elseif: = elif conditions\n" <<
				"else: = else conditions\n" <<
				"for: = for variable in variable\n" <<
				"while: = while boolean_expression\n" <<
				"value: = variable = int(number)\n" <<
				"bigValue: N/A\n" <<
				"pointValue: variable = float(number)\n" <<
				"sentence: = str = str(number))\n" <<
				"letter: = N\A\n\n" <<

				//Not what I want for the final product, but an ok sub for the time. Come back to this because this is like putting a band-aid over a broken bone
				"If you want to use any of these, just enter the name." << "Then you will get a promt to enter the two variables that you want and also calculate it for you.\n" <<
				"equal: = =\n" <<
				"equivalent: = ==\n" <<
				"notEquivalent: = !=\n" <<
				"module: = %\n" <<
				"subtract: = -\n" <<
				"add: = +\n" <<
				"multiply: = *\n" <<
				"divide: = /\n\n";
			cout << "Choose C++, Java, or Python: \n";
			start();
		}

		else
		{
			cout << "Thats not a language, at least at the time of writing this code." << endl;
			start();
		}
	}

	else if(lang == "example")
	{
		cout << "";
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
	cout << "To get started, type \"Info\".\n";
	start();
	return 0;
}
