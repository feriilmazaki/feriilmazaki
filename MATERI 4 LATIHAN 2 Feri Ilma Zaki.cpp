#include <iostream>

using namespace std;
int main()
{
	int jml;
	cout<<"masukkan jumlah hewan yang dibeli = ";
	cin>> jml;
	string jenis_hewan[100] = {};
	for (int i = 0; i < jml; i++)
	{
		cout<<"masukkan nama hewan ke "<<i +1<< " = ";
		cin>> jenis_hewan[i];
	}
	for (int j = 0; j < jml; j++)
	{
		cout<<"nama hewan ke "<< j + 1 << " adalah "<< jenis_hewan[j]<<endl;
		
	}
	system("pause");
	return 0;
}
