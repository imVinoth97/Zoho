#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	char input[10] = "Welcome";
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


