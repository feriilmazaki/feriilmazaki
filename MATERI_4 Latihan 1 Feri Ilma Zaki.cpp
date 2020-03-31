#include <iostream>
using namespace std;
int i;
int main()
{
	for(i=1;i<=5;i++)
	{
		cout<<"perulangan dengan for. nilai i="<<i<<endl;
		
	}
	i=1;
	while (i<=5)
	{
		cout<<"perulangan dengan while. nilai i="<<i<<endl;
		i++;
		
	}
	i=1;
	do
	{
		cout<<"perulangan do-while. nilai i="<<i++<<endl;
		
	}
	while (i<=5);
	
	system("pause");
	return 0;
}
