# Array

## 1. Array insert at end
```
Example 1:
    Input: arr[] = {1, 2, 3, 4, 5}, sizeOfArray = 6, element = 90
    Output: 1 2 3 4 5 90
  Explanation: After inserting 90 at the end, we have array elements as 
             1 2 3 4 5 90.

Example 2:
    Input: arr[] = {1, 2, 3}, sizeOfArray = 4, element = 50
    Output: 1 2 3 50
  Explanation: After inserting 50 at the end, we have array elements as 
             1 2 3 50.
```

### `Python`
```py
def insertAtEnd(arr, sizeOfArray, element):
    ##Your code here
    arr.append(element)
```

### `C++`
```cpp
void insertAtEnd(int arr[], int sizeOfArray, int element)
{
    //Your code here
    arr[sizeOfArray-1] = element;
}
```

### `Java`
```java
class Insert
{
    // You only need to insert the given element at 
    // the end, i.e., at index sizeOfArray - 1. You may 
    // assume that the array already has sizeOfArray - 1
    // elements. 
    public void insertAtEnd(int arr[], int sizeOfArray, int element)
    {
        //Your code here
        arr[sizeOfArray-1] = element;
    }
}
```

## 2. Array insert at index
```
Example 1:
      Input: arr[] = {1, 2, 3, 4, 5}, sizeOfArray = 6, index = 5, element = 90
      Output: 1 2 3 4 5 90
  Explanation: 90 is inserted at index 5(0-based indexing). After inserting, array elements are like
               1, 2, 3, 4, 5, 90.

Example 2:
      Input: arr[] = {1, 2, 3, 4, 5}, sizeOfArray = 6, index = 2, element = 90
      Output: 1 2 90 3 4 5
  Explanation: 90 is inserted at index 2(0-based indexing). After inserting, array elements are like 
               1, 2, 90, 3, 4, 5.
```

### `Python`
```py
class Solution:
    '''You need to insert the given element at the given index. 
    After inserting the elements at index, elements
    from index onward should be shifted one position ahead
     You may assume that the array already has sizeOfArray - 1
    elements.'''
    
    def insertAtIndex(self, arr, sizeOfArray, index, element):
        #Your code here
        if(index==sizeOfArray-1):
             arr[index]=element
             return 
   
        for i in range(sizeOfArray-1,index,-1):
            arr[i], arr[i-1]=arr[i-1], arr[i]
        
        arr[index]=element
```

### `C++`
```cpp
class Solution{
  public:
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here
        for(int i=sizeOfArray-1; i>index; i--)
            arr[i] = arr[i-1];
        arr[index]=element;
    }
};
```

### `Java`
```java
class Solution
{
    // You need to insert the given element at the given index. 
    // After inserting the elements at index, elements
    // from index onward should be shifted one position ahead
    // You may assume that the array already has sizeOfArray - 1
    // elements.
    public void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here, Geeks
        for(int i=sizeOfArray-1; i>index; i--)
            arr[i] = arr[i-1];
        arr[index]=element;
    }
}
```
