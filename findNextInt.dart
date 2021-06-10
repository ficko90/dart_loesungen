int findNextInt(List<int> arr, int key)
{
  int length = arr.length;
  int result = -1;
  
  for(int i = 0; i < length; i++)
  {
    int element = arr[i];
    
    if(element > key && result == -1 || element < result)
    {
      result = arr[i];
    }
  }
  
  return result;
}

void main() 
{
  List<int> arr = [226, 224, 300, 512, 1002];
  
  print(findNextInt(arr, 223)  == 224);
  print(findNextInt(arr, 224));
  print(findNextInt(arr, 224)  == 226);
  print(findNextInt(arr, 299)  == 300);
}