#include <iostream>
using namespace std;


int findNextInt(int y)
{
	int arr[7] = { 225, 256, 232, 1036, 532, 224, 10006 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int result = 0;
    bool foundResult = 0;

	for(int i = 0; i < length; i++) //durch kompletten Array laufen
	{
        if(i==0){
			result = arr[i];
        }
		if(arr[i] > y && result > arr[i]) //falls y kleiner als arr[i] sein soll, muss auch geprüft werden ob auch result größer als arr[i] ist
		{
			result = arr[i];
            foundResult = 1;
		}
	}
	cout << result << endl;

	return (foundResult) ? result : -1;
}
//test code from debug branch
int main()
{
	cout << findNextInt(226) << endl;
	cout << findNextInt(250) << endl;
	cout << findNextInt(2000) << endl;
	cout << findNextInt(1000) << endl;
}