/*
This programme will demonstrate how to encrypt a text using pointers.

The core of the programme lies in the FOR loop:

					for(char* p = s; *p; p++)
						*p += encrypt;
						
We first assign the strting address of string s to pointer p:

					char* p = s
						
The condition of the loop:

					*p
					
...is slightly puzzling at first; it should be read as: "as long as dereferEnced value of pointer p is TRUE (!= NULL character),
continue the job."

The encryption is done by prompting the user to enter an integer of his choice, and this value is then used to increment once or
several times the dereferenced value of pointer P, thus changing the character entirely.				
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	char s[] = "I bought 26 blueberry pies and 12 ice cream cones.";
	int encrypt;
	
	//printing initial array:
	cout << "Your initial text:\n\n\t";
	cout << s;
		
	//prompting user to enter "secret" value for encryption:
	cout << "\n\nEnter your secret number for encrypting the text:\n";
	cin >> encrypt;
			
	//"encrypting" the text:
	for(char* p = s; *p; p++)
		*p += encrypt;
		
	/*
	we can even elaborate the encrypting procedure by adding more code to the loop, therefore transforming the initial text even more:
	
		for(char* p = s; *p; p++) {
			*p += encrypt;
			if (ispunct(*p))
				*(p-1) = (*p);
		}
	...which assigns the punctuation nature of a character pointed to by p to the previous character!
	*/

	//printing encrypted text:
	cout << "\n\nYour encrypted text:\n\n\t";
	cout << s << endl;
	
	//"de-encrypting" the text:
	for(char* p = s; *p; p++)
		*p -= encrypt;
		
	//printing encrypted text:
	cout << "\n\nYour de-encrypted text:\n\n\t";
	cout << s << endl;
	
	return 0;
}
