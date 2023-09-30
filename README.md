# C - Sorting algorithms & Big O

> This project provided an excellent introduction to the concepts of sorting and Big O notation, offering a valuable opportunity to delve into how algorithms are assessed based on their time and space complexities. Within this project, I successfully implemented four fundamental sorting algorithms: bubble sort, insertion sort, selection sort, and quick sort. It was an engaging experience, with quick sorting posing a particular challenge that required additional effort to comprehend thoroughly.

<details><summary><h2>Big O</h2></summary>
        The big O notation is a way of determining how fast (time complexity) an algorithm would take to provide the desired output for a given input. To demonstrate the common known time complexity, consider the following:

```python
def function print_name(my_name):
    print(my_name)
```
- Whenever the function is called, the name is printed to the console, and this happens immediately without any form of looping construct. hence, we say that the Big O notation for such algorithm is `constant time` := `O(1)`

```python
def print_students(lists_of_students):
    for student in list_of_students:
        print(student)
```
- The number of times the print function is called depends on the number of students in the list_of_student object. Hence the more the bigger the list, the more time it takes to print all the students' names. Hence we say the time complexity of such an algorithm is `linear time` := `O(n)`

```python
def print_students(lists_of_students):
    for student in list_of_students:
        for subject in student.subject_offered:
            print(subject)
```
- The provided code iterates through a list of students, where each student has a list of subjects they are enrolled in. It begins by looping through the list of students, and for each student, it further loops through their list of subjects and prints each subject. For instance, if each student is enrolled in a minimum of 5 subjects, this results in the print statement being called 5 times for each student. Consequently, with, let's say, 5 students, this leads to a total of 25 print statements being executed. In algorithmic terms, when we encounter such scenarios where the number of operations grows with the square of the input size, it signifies a polynomial time complexity. In this specific case, it's referred to as quadratic time complexity, denoted as `O(n^2)`. Variations of this, such as `O(n^3)` (cubic), are encountered in nested loop constructs.

```python
# print numbers from 1 to last_number
def print_numbers(last_number = 100):
    num = 1
    while (num <= last_number)
        print(num)
        i = i * 2 # double num
```

The provided code generates a sequence of numbers from 0 up to a specified last_number. It's important to note that within the while loop, the variable num is doubled in each iteration, resulting in a rapidly increasing sequence: `1, 2, 4, 8, 16, 32 ...`.  This behavior characterizes an algorithm with a `logarithmic time complexity`, denoted as `O(logn)`, where the number of steps required is proportional to the logarithm of the input size, `n`.

</details>


**Note:** The best, average and worst-case scenario for each sorting implementation can be found in the accompanying files: `0-O, 1-O, 2-O ...`.

## Mandatory
`0-bubble_sort.c` - Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

- Prototype: `void insertion_sort_list(listint_t **list);`
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements (See example below)

`1-insertion_sort.c` - Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

- Prototype: `void insertion_sort_list(listint_t **list);`
- You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
- You’re expected to print the list after each time you swap two elements

`2-selection_sort.c` - Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

- Prototype: `void selection_sort(int *array, size_t size);`
- You’re expected to print the array after each time you swap two elements (See example below)

`3-quick_sort.c` - Write a function that sorts an array of integers in ascending order using the Quick sort algorithm
- Prototype: void quick_sort(int *array, size_t size);
- You must implement the Lomuto partition scheme.
- The pivot should always be the last element of the partition being sorted.
- You’re expected to print the array after each time you swap two elements (See example below)
- 
## Advanced
`...`
