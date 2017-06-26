// Name: Ali Bayati 
// Average Number of Letters

#include<iostream>
#include<string>
#include<iomanip>

using namespace std;
int countstr(string,float*);

int main()
{
	float avgnumlet;
	int words;
		cout << "Enter a string: ";
		string x ;
		getline(cin, x);


	words = countstr(x,&avgnumlet);
	cout << fixed << setprecision(1);
	cout << "There are " << words << " words in that sentence."<<endl;
	cout << "The average number of letters per word is "<<avgnumlet  << endl;

	return 0;
}
int countstr(string y, float *avg)
{
int   i;
float spaces , strsize;
strsize = y.size();
spaces = 0;

for (i = 0; i < strsize; i++)
{
	if (y[i] == ' '&&y[i + 1] != ' ')
			spaces++;
}

*avg = (strsize  - spaces) / (spaces+1);

	
	return spaces+1;
}
/*Output
Enter a string: There are four words
There are 4 words in that sentence.
The average number of letters per word is 4.3
Press any key to continue . . .*/