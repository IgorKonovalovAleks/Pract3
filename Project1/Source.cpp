#include <string>
#include <iostream>



bool brackets(char s[]) {
	int c1 = 0, c2 = 0, c3 = 0;
	char c = s[0];
	for (int i = 0; c != '\0'; c = s[i]) {
		i++;
		if (c == '(')
			c1++;
		else if (c == ')')
			if (c1 == 0)
				return false;
			else
				c1--;

		if (c == '[')
			c2++;
		else if (c == ']')
			if (c2 == 0)
				return false;
			else
				c2--;

		if (c == '{')
			c3++;
		else if (c == '}')
			if (c3 == 0)
				return false;
			else
				c3--;
		
	}

	if (c1 == 0 && c2 == 0 && c3 == 0)
		return true;
	else
		return false;

}

int main(int argc, char* argv[]) {
	
	std::cout << (brackets(*argv) ? "true" : "false");
	return 0;
}

