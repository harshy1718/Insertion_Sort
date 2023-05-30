# Insertion_Sort
Insertion Sort is a simple and efficient sorting algorithm that builds the final sorted array one element at a time. It iterates through the array, comparing each element with the previous ones and placing it in the correct position. With a time complexity of O(n^2), it performs well on small or partially sorted arrays.

# Algo Visualisation
![image](https://github.com/harshy1718/Insertion_Sort/assets/129788726/a4c17ec4-6341-4de2-94f4-efb6e0d5fe99)

# Algo Complexity
## a. Time: 
The time complexity of Insertion Sort is O(n^2), where 'n' is the number of elements in the array. It involves nested loops to iterate through the array and compare elements, resulting in a quadratic time complexity. However, it performs well for small or partially sorted arrays, making it efficient in certain scenarios.

## b. Space:
The space complexity of Insertion Sort is O(1) since it operates directly on the input array without requiring additional space for data structures. It performs in-place sorting by swapping elements within the array itself, which means it does not consume extra memory proportional to the input size. Therefore, the space complexity remains constant, making it memory-efficient.

# Use Cases
Insertion Sort is particularly useful when:
1. Dealing with small input sizes or partially sorted arrays, as it has a favorable average-case time complexity of O(n) for such cases.
2. Sorting data in real-time scenarios where new elements are continuously added to a sorted list. Insertion Sort efficiently handles incremental sorting by inserting new elements at the appropriate position.
3. Implementing sorting algorithms for small arrays or sub-arrays within larger algorithms, such as in the "divide and conquer" approach of algorithms like Merge Sort or Quick Sort.
4. Sorting data that is already partially sorted or almost sorted, as Insertion Sort's adaptive nature allows it to perform efficiently in these scenarios.
5. Teaching and learning purposes, as Insertion Sort is a simple and intuitive algorithm that helps in understanding the basics of sorting algorithms before diving into more complex ones.

# Function Description 

