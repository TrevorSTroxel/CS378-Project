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
	virtual void trans_if(string expr, string expr1, string expr2, string bool_expr) = 0;
	virtual void trans_elseif(string expr, string expr1, string expr2, string bool_expr) = 0;
	virtual void trans_else(string expr, string expr1, string expr2, string bool_expr) = 0;
	virtual void trans_for(string expr1, string expr2, string expr3, string expr4, string expr5, string expr6, string expr7, string bool_expr) = 0;
	virtual void trans_while(string expr, string expr1, string expr2, string expr3, string expr4, string expr5, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_value(string expr, string bool_expr, string bool_expr1) = 0;
	virtual void trans_bigValue(string expr, string bool_expr, string bool_expr1) = 0;
	virtual void trans_pointValue(string expr, string bool_expr, string bool_expr1) = 0;
	virtual void trans_sentence(string expr, string bool_expr, string bool_expr1) = 0;
	virtual void trans_letter(string expr, string bool_expr, string bool_expr1) = 0;
	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_module(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_add(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2) = 0;
	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2) = 0;

	string RemoveSemi(string bool_expr)
	{
		int i;
		string new_bool_expr = bool_expr;

		if (bool_expr.back() == ';')
		{
			new_bool_expr = "";
			for (i = 0; i < bool_expr.length() - 1; i++)
			{
				new_bool_expr += bool_expr.at(i);
				
			}
		}

		return new_bool_expr;
	}

	void getStatements() {
		bool quit = false;
		while (!quit)
		{
			cout << "What command do you want?\n";
			string cmd;
			cout << "Command: ";
			cin >> cmd;
			cin.ignore();

			string sub, sub1, sub2, sub3, sub4, sub5, sub6, sub7, bool_expr, bool_expr1, bool_expr2;
			
			if (cmd == "say:" || cmd == "say")
			{
				cout << "What do you want your sentence to say: ";
				getline(cin, sub);
				trans_say(sub);
			}

			else if (cmd == "if:" || cmd == "if")
			{
				cout << "What conditions do you want?\n";
				cout << "EX: x == 9\n";
				cout << "\n";
				cout << "EX: X\n";
				cout << "Variable (a letter): ";
				getline(cin, sub);
				cout << "\n";
				cout << "Comparison (<, >, ==, =): ";
				getline(cin, sub1);
				cout << "\n";
				cout << "Number: ";
				getline(cin, sub2);
				cout << "\n";
				cout << "What happens if " << sub << " is true?\n";
				cout << "\n";
				cout << "EX: cout << \"Hello world\" << endl; in C++\n";
				cout << "\n";
				cout << "EX: System.out.println(\"hello world\"); in Java\n";
				cout << "\n";
				cout << "EX: print(\"hello world\") in Python\n";
				cout << "Output: ";
				getline(cin, bool_expr);			
				
				string new_bool_expr = RemoveSemi(bool_expr);
				trans_if(sub, sub1, sub2, new_bool_expr);
			}

			else if (cmd == "elseif:" || cmd == "elseif")
			{
				cout << "What conditions do you want?\n";
				cout << "EX: x == 9\n";
				cout << "\n";
				cout << "EX: X\n";
				cout << "Variable (a letter): ";
				getline(cin, sub);
				cout << "\n";
				cout << "Comparison (<, >, ==, =): ";
				getline(cin, sub1);
				cout << "\n";
				cout << "Number: ";
				getline(cin, sub2);
				cout << "\n";
				cout << "What happens if " << sub << " is true?\n";
				cout << "\n";
				cout << "EX: cout << \"Hello world\" << endl; in C++\n";
				cout << "\n";
				cout << "EX: System.out.println(\"hello world\"); in Java\n";
				cout << "\n";
				cout << "EX: print(\"hello world\") in Python\n";
				cout << "Output: ";
				getline(cin, bool_expr);

				string new_bool_expr = RemoveSemi(bool_expr);
				trans_elseif(sub, sub1, sub2, new_bool_expr);
			}

			else if (cmd == "else:" || cmd == "else")
			{
				cout << "You do not need to make conditions for the else statement\n";
				cout << "What do you want to happen?\n";
				cout << "\n";
				cout << "EX: cout << \"Hello world\" << endl; in C++\n";
				cout << "\n";
				cout << "EX: System.out.println(\"hello world\"); in Java\n";
				cout << "\n";
				cout << "EX: print(\"hello world\") in Python\n";
				cout << "Output: ";
				getline(cin, bool_expr);

				string new_bool_expr = RemoveSemi(bool_expr);
				trans_else(sub, sub1, sub2, new_bool_expr);
			}

			else if (cmd == "for:" || cmd == "for")
			{
				cout << "What conditions do you want?\n";
				cout << "EX: i = 0\n";
				cout << "\n";
				cout << "Variable (a letter): ";
				getline(cin, sub1);
				cout << "Number: ";
				getline(cin, sub3);
				cout << "\n";
				cout << "What conditions do you want to make your variable follow?\n";
				cout << "EX: i < 2\n";
				cout << "\n";
				cout << "Variable (enter the same letter that you entered before): ";
				getline(cin, sub4);
				cout << "Comparison (<, >, !=): ";
				getline(cin, sub5);
				cout << "Number: ";
				getline(cin, sub6);
				cout << "\n";
				cout << "How do you want this to increment?\n";
				cout << "EX: i++\n";
				cout << "Increment (++ mean it will go up, -- means it will go down, also enter the same letter that you have used before): ";
				getline(cin, sub7);
				cout << "\n";
				cout << "While all these conitions are going on, what is happening?\n";
				cout << "EX: cout << \"Hello world\" << endl; in C++\n";
				cout << "\n";
				cout << "EX: System.out.println(\"hello world\"); in Java\n";
				cout << "\n";
				cout << "EX: print(\"hello world\") in Python\n";
				cout << "Output: ";
				getline(cin, bool_expr);

				string new_bool_expr = RemoveSemi(bool_expr);
				trans_for(sub1, sub2, sub3, sub4, sub5, sub6, sub7, new_bool_expr);
			}

			else if (cmd == "while:" || cmd == "while")
			{
				cout << "First you have to set what the variable to be.\n";
				cout << "EX: int a = 20\n";
				cout << "\n";
				cout << "Variable (a letter): ";
				getline(cin, sub);
				cout << "Number: ";
				getline(cin, sub2);
				cout << "What do you want the conditions to be?\n";
				cout << "EX: a < 20\n";
				cout << "Variable (uses the same letter that you used before): ";
				getline(cin, sub3);
				cout << "Comparison (<, >, ==, !=): ";
				getline(cin, sub4);
				cout << "Number: ";
				getline(cin, sub5);

				cout << "Wht do you want happening while this is going through?\n";
				cout << "You will need to enter two different inputs. Type one answer then hit enter.\n";
				cout << "Then type another answer, and then hit enter.\n";
				cout << "EX: \"cout << \"value of a: \" << a << endl; in C++\n";
				cout << "EX: a++, in C++\n";
				cout << "EX: System.out.print(\"hello world\"); in Java\n";
				cout << "EX: a++, in Java\n";
				cout << "EX: print(a) in Python\n";
				cout << "EX: a += 1 in Python\n";
				cout << "\n";
				cout << "Output 1: ";
				getline(cin, bool_expr1);
				cout << "Output 2: ";
				getline(cin, bool_expr2);

				string new_bool_expr1 = RemoveSemi(bool_expr1);
				string new_bool_expr2 = RemoveSemi(bool_expr2);

				trans_while(sub, sub1, sub2, sub3, sub4, sub5, new_bool_expr1, new_bool_expr2);
			}

			else if (cmd == "value:" || cmd == "value")
			{
				cout << "What do you want to name your variable?\n";
				cout << "Name: ";
				getline(cin, bool_expr);
				cout << "What do you want it to equal too? EX: 1\n";
				cout << "Value: ";
				getline(cin, bool_expr1);

				string new_bool_expr1 = RemoveSemi(bool_expr1);
				trans_value(sub, bool_expr, new_bool_expr1);
			}

			else if (cmd == "bigValue:" || cmd == "bigValue")
			{
				cout << "What do you want to name your variable?\n";
				cout << "Name: ";
				getline(cin, bool_expr);
				cout << "What do you want it to equal too? EX: 10000\n";
				cout << "Value: ";
				getline(cin, bool_expr1);

				string new_bool_expr1 = RemoveSemi(bool_expr1);
				trans_bigValue(sub, bool_expr, new_bool_expr1);
			}

			else if (cmd == "pointValue:" || cmd == "pointValue")
			{
				cout << "What do you want to name your variable?\n";
				cout << "Name: ";
				getline(cin, bool_expr);
				cout << "What do you want it to equal too? EX: 1.23456\n";
				cout << "Value: ";
				getline(cin, bool_expr1);

				string new_bool_expr1 = RemoveSemi(bool_expr1);
				trans_pointValue(sub, bool_expr, new_bool_expr1);
			}

			else if (cmd == "sentence:" || cmd == "sentence")
			{
				cout << "What do you want to name your variable?\n";
				cout << "Name: ";
				getline(cin, bool_expr);
				cout << "What do you want it to equal too? EX: \"Hello World\"\n";
				cout << "Sentence: ";
				getline(cin, bool_expr1);

				string new_bool_expr1 = RemoveSemi(bool_expr1);
				trans_sentence(sub, bool_expr, new_bool_expr1);
			}

			else if (cmd == "letter:" || cmd == "letter")
			{
				cout << "What do you want to name your variable?\n";
				cout << "Letter: ";
				getline(cin, bool_expr);
				cout << "What do you want it to equal too? EX: \'Hello World\'\n";
				cout << "Sentence: ";
				getline(cin, bool_expr1);

				string new_bool_expr1 = RemoveSemi(bool_expr1);
				trans_letter(sub, bool_expr, new_bool_expr1);
			}

			// These are commands that give you the ability to make commands such as equal signs.
			else if (cmd == "equal:" || cmd == "equal")
			{
				cout << "What two variables do you want make equal to each other\n";
				cout << "Variable (a letter): ";
				getline(cin, bool_expr1);
				cout << "Variable (a letter or number): ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_equal(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "equivalent:" || cmd == "equivalent")
			{
				cout << "What two variables do you want make equivalent to each other\n";
				cout << "Variable (a letter): ";
				getline(cin, bool_expr1);
				cout << "Variable (a letter or number): ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_equivalent(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "notEquivalent:" || cmd == "notEquivalent")
			{
				cout << "What two variables do you want make not equivalent to each other\n";
				cout << "Variable (a letter): ";
				getline(cin, bool_expr1);
				cout << "Variable (a letter or number): ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_notEquivalent(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "module:" || cmd == "module")
			{
				cout << "What two numbers do you want make module to each other\n";
				cout << "Number: ";
				getline(cin, bool_expr1);
				cout << "Number: ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_module(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "subtract:" || cmd == "subtract")
			{
				cout << "What two numbers do you want make subtract each other\n";
				cout << "Number: ";
				getline(cin, bool_expr1);
				cout << "Number: ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_subtract(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "add:" || cmd == "add")
			{
				cout << "What two numbers do you want make add to each other\n";
				cout << "Number: ";
				getline(cin, bool_expr1);
				cout << "Number: ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_add(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "multiply:" || cmd == "multiply")
			{
				cout << "What two numbers do you want make multiply to each other\n";
				cout << "Number: ";
				getline(cin, bool_expr1);
				cout << "Number: ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_multiply(sub, bool_expr1, new_bool_expr2);
			}

			else if (cmd == "divide:" || cmd == "divide")
			{
				cout << "What two numbers do you want make divide to each other\n";
				cout << "Number: ";
				getline(cin, bool_expr1);
				cout << "Number: ";
				getline(cin, bool_expr2);

				string new_bool_expr2 = RemoveSemi(bool_expr2);
				trans_divide(sub, bool_expr1, new_bool_expr2);
			}

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
				system("pause");
				system("CLS");
			}
		}
	}
};

class CPP : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "cout << \"" << msg << "\" << endl;\n";
		cout << "}\n";
	}

	virtual void trans_if(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "if (" << expr << " " << expr1 << " " << expr2 << ")\n" << "{\n" << bool_expr << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_elseif(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "else if (" << expr << " " << expr1 << " " << expr2 << ")\n" << "{\n" << bool_expr << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_else(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "else" << endl << bool_expr << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_for(string expr1, string expr2, string expr3, string expr4, string expr5, string expr6, string expr7, string bool_expr)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "for (" << expr1 << " " << "=" << " " << expr3 << "; " << expr4  << " " << expr5 << " " << expr6 << "; " << expr7 << ")\n" << "{\n" << bool_expr << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_while(string expr, string expr1, string expr2, string expr3, string expr4, string expr5, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << expr << " = " << expr2 << endl;
		cout << "while (" << expr3 << " " << expr4 << " " << expr5 << ")\n" << "{\n" << bool_expr1 << ";" << endl << bool_expr2 << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_value(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "int " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_bigValue(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "double " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_pointValue(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "float " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_sentence(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "string " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_letter(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << "char " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " = " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " == " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " != " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " % " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " - " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " + " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " * " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "int main ()\n";
		cout << "{\n";
		cout << bool_expr1 << " / " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}


};

class Java : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "System.out.print(\"" << msg << "\");\n";
		cout << "}\n";
	}

	virtual void trans_if(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "if (" << expr << " " << expr1 << " " << expr2 << ")\n" << "{\n" << bool_expr << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_elseif(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "else if (" << expr << " " << expr1 << " " << expr2 << ")\n" << "{\n" << bool_expr << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_else(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "else" << endl << bool_expr << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_for(string expr1, string expr2, string expr3, string expr4, string expr5, string expr6, string expr7, string bool_expr)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "for (" << expr1 << " " << "=" << " " << expr3 << "; " << expr4 << " " << expr5 << " " << expr6 << "; " << expr7 << ")\n" << "{\n" << bool_expr << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_while(string expr, string expr1, string expr2, string expr3, string expr4, string expr5, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << expr << " = " << expr2 << endl;
		cout << "{\n";
		cout << "while (" << expr3 << " " << expr4 << " " << expr5 << ")\n" << "{\n" << bool_expr1 << ";" << endl << bool_expr2 << ";" << endl << "}\n";
		cout << "}\n";
		getStatements();

	}

	virtual void trans_value(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "int " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_bigValue(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "double " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_pointValue(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "float " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_sentence(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "string " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_letter(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << "char " << bool_expr << " = " << bool_expr1 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " = " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " == " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " != " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " % " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " - " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " + " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " * " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << "public class Main\n";
		cout << "{\n";
		cout << bool_expr1 << " / " << bool_expr2 << ";" << endl;
		cout << "}\n";
		getStatements();

	}


};

class Python : public Language
{
public:
	virtual void trans_say(string msg)
	{
		cout << "\n";
		cout << "print(\"" << msg << "\");\n";
	}

	virtual void trans_if(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "if " << expr << " " << expr1 << " " << expr2 << ":" << endl << bool_expr << "\n";
		getStatements();
	}

	virtual void trans_elseif(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "elis " << expr << " " << expr1 << " " << expr2 << ":" << endl << bool_expr << "\n";
		getStatements();
	}

	virtual void trans_else(string expr, string expr1, string expr2, string bool_expr)
	{
		cout << "\n";
		cout << "else:" << endl << bool_expr << "\n";
		getStatements();
	}

	virtual void trans_for(string expr1, string expr2, string expr3, string expr4, string expr5, string expr6, string expr7, string bool_expr)
	{
		cout << "\n";
		cout << "for " << expr1 << " " << "=" << " " << expr3 << "; " << expr4 << " " << expr5 << " " << expr6 << "; " << expr7 << ":\n";
		cout << bool_expr << endl;
		getStatements();
	}

	virtual void trans_while(string expr, string expr1, string expr2, string expr3, string expr4, string expr5, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << expr << " = " << expr2 << endl;
		cout << "while " << expr3 << " " << expr4 << " " << expr5 <<":\n";
		cout << bool_expr1 << endl;
		cout << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_value(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << expr << " = " << bool_expr1 << endl;
		getStatements();
	}

	virtual void trans_bigValue(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << "The double value dosn't exist in Python" << endl;
	}

	virtual void trans_pointValue(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << expr << " = " << bool_expr1 << endl;
		getStatements();
	}

	virtual void trans_sentence(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << bool_expr << " = " << bool_expr1 << endl;
		getStatements();
	}

	virtual void trans_letter(string expr, string bool_expr, string bool_expr1)
	{
		cout << "\n";
		cout << bool_expr << " = " << bool_expr1 << endl;
		getStatements();
	}

	virtual void trans_equal(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " = " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_equivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " == " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_notEquivalent(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " != " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_module(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " % " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_subtract(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " - " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_add(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " + " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_multiply(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
		cout << bool_expr1 << " * " << bool_expr2 << endl;
		getStatements();
	}

	virtual void trans_divide(string expr, string bool_expr1, string bool_expr2)
	{
		cout << "\n";
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
				"else: = else (conditions)\n" <<
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
			cout << "Language: ";
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
			cout << "After learning about C++, you should have an easier time learning Java.\n\n";
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
			cout << "Language: ";
			start();
		}

		else if (prg == "Python" || prg == "python")
		{
			cout << "\n";
			cout << "General Info:\n";
			cout << "Python is both complex and simpler than both Java and  C++.\n";
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
			cout << "Despite this however, Python can be written like if it was a C++ or Java Program.\n";
			cout << "For this project, there will be some sections where, despite working on Python, it will look like you are doing C++";
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
			cout << "Language: ";
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
		cout << "Try again.\n";
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


