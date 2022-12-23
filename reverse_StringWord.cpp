#include <bits/stdc++.h>
using namespace std;

void reverse(string& s, int start, int end)
{

	while (start < end) 
    {
		swap(s[start++], s[end--]);
	}
}


void reverseWords(string& s)
{
	int word_begin = -1;

	int i = 0;

	while (i < s.size()) 
    {

		if ((word_begin == -1) && (s[i] != ' ')) 
        {
			word_begin = i;
		}
		if (word_begin != -1
			&& ((s[i + 1] == ' ') || (i + 1 == s.size()))) 
            {
			reverse(s, word_begin, i);
			word_begin = -1;
		}
		i++;
	} 

	reverse(s, 0, s.size() - 1);
}


int main()
{
	string s = "Lets learn at Letsupgrade";

	reverseWords(s);
	cout << s << endl;
	;
	return 0;
}

