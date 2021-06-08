#include <iostream>
using namespace std;

int FindNextInt(int y)
{
	int arr[6] = { 225, 256, 232, 1036, 532, 224 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int result = 9999;

	for(int i = 0; i < length; i++) //durch kompletten Array laufen
	{
		if(arr[i] > y && result > arr[i]) //falls y kleiner als arr[i] sein soll, muss auch geprüft werden ob auch result größer als arr[i] ist
		{
			result = arr[i];
		}
	}

	if(result == 9999)
	{
		result = 0;
	}
	
	return result;
}

int main()
{
	cout << FindNextInt(226) << endl;
	cout << FindNextInt(250) << endl;
	cout << FindNextInt(2000) << endl;
	cout << FindNextInt(1000) << endl;
}