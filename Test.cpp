#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
//	string input;
//cout << Enter Input: ";
//cin >> input; 
//This need to be converted into char array	
    char input[10] = "'W','e','l','c','o','m','e'";
    int no = strlen(input);
    
	for (int i=0;i<=no;i++)
	{	for (int x=0;x<=no;x++)
		{	if (x<=no-i)
			{
				cout<<" ";	
			}
			else
			{
				cout<<input[i/2];
			}
		}
	
	cout<<"\n";
	}
getch();
return 0;
}


