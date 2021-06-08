

function findNextInt(y)
{
	var arr = [ 225, 256, 232, 1036, 532, 224, 10006 ];
	var result = -1;
	for(var i = 0; i < arr.length; i++) //durch kompletten Array laufen
	{

        var element = arr[i];

		if(element > y && (element < result || result == -1) ) //falls y kleiner als arr[i] sein soll, muss auch geprüft werden ob auch result größer als arr[i] ist
		{
			result = element;
		}
	}
	return result;
}


	console.log(findNextInt(226) );
	console.log(findNextInt(250) );
	console.log(findNextInt(2000) );
	console.log(findNextInt(10007) );