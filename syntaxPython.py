
####################### MATH #######################
import math
math.sqrt()                                              # square root

######################  LIST #######################
my_list = [1, 2, 3]                                      # Creating a list

my_list[0]                                               # 1st element
my_list[-1]                                              # Last element

my_list[1:3]                                             # Slicing (2nd to 3rd) not included 4th

my_list.append(4)                                        # Add to end
my_list.insert(1, 99)                                    # Insert at index 1
my_list.extend([5, 6])                                   # Add multiple items

my_list.remove(3)                                        # Remove first occurrence of 3
del my_list[0]                                           # Remove item at index 0
item = my_list.pop()                                     # Remove last and return it
my_list.clear()                                          # Remove all items

my_list.index(10)                                        # Index of first occurrence of 10
my_list.count(10)                                        # Count how many times 10 appears
my_list.sort()                                           # Sort in place

my_list = [False] * 3                                    # Create a list of all False with len = 3

#######################  MAP #######################
from collections import defaultdict

my_dict = {}                                            # initilise
map = defaultdict(set)                                  # initialise a map with value is a set
map = defaultdict(list)                                 # initialise a map with value is a list

for key in my_dict:                                     # Iterate Over Keys
    pass
for key in my_dict.values():                            # Iterate Over Values
    pass
for key, value in my_dict.items():                      # Iterate Over Key-Value Pairs:
    pass
for index, (key, value) in enumerate(my_dict.items()):  # Using enumerate() to Get Index:
    pass


#######################  SET #######################
my_set = set()                                            # Creating a Set
my_set.add(4)                                             # Add one element O(1)
my_set.update([5, 6, 7])                                  # Add multiple elements
my_set.remove(2)                                          # Removes 2 (KeyError if not found) O(1)
my_set.discard(10)                                        # Removes 10 if it exists (no error if not) O(1)
my_set.pop()                                              # Removes and returns a random item
my_set.clear()                                            # Empties the set



###################### QUEUE #######################
from collections import deque
dq = deque([1, 2, 3])
dq.append(4)                                             # Append right [1, 2, 3, 4]
dq.appendleft(0)                                         # Append left [0, 1, 2, 3, 4]
dq.pop()                                                 # Pop right Removes 4 → [0, 1, 2, 3]
dq.popleft()                                             # Pop left Removes 0 → [1, 2, 3]
dq.clear()                                               # Remove all elements -> deque([])
top= dq[0]                                               # Access the first element 
top= dq[-1]                                              # Access the last element 

#####################  STACK #######################




####################### HEAP #######################
import heapq
# MIN_HEAP

heap = []                                                # Create a heap 
heapq.heappush(heap, 3)                                  # Push elements onto the heap
min_element = heapq.heappop(heap)                        # Pop the smallest element
smallest = heap[0]                                       # Peek at the smallest element without removing it
arr = [4, 6, 8, 2, 9]                                    # Convert a list into a heap
heapq.heapify(arr)

# MAX-HEAP (Using Negation)

max_heap = []                                            # Create an empty max-heap
heapq.heappush(max_heap, -3)                             # Insert elements by negating them
print(-heapq.heappop(max_heap))                          # Convert back when popping
nums = [4, 1, 7, 3, 8, 5]                                # Converting a List into a Max-Heap
max_heap = [-num for num in nums]                        # Convert all numbers to negative
heapq.heapify(max_heap)                                  # Heapify the list
print(-heapq.heappop(max_heap))                          # Get max element by negating

##################### STRING #######################
s = "Hello, world!"                                      # Create a string

char = s[0]                                              # Access first character: 'H'
last_char = s[-1]                                        # Access last character: '!'

part = s[0:5]                                            # Slice string from index 0 to 4: 'Hello'
part2 = s[:5]                                            # Same as above: 'Hello'
part3 = s[7:]                                            # Slice from index 7 to end: 'world!'

greeting = "Hello" + " " + "World"                       # Concatenate strings: 'Hello World'
laugh = "ha" * 3                                         # Repeat string 3 times: 'hahaha'

lowercase = s.lower()                                    # Convert to lowercase: 'hello, world!'
uppercase = s.upper()                                    # Convert to uppercase: 'HELLO, WORLD!'
titlecase = s.title()                                    # Convert to title case: 'Hello, World!'

trimmed = "  hi  ".strip()                               # Remove leading/trailing whitespace: 'hi'

s += ":)"                                                # Append string


replaced = s.replace("world", "there")                   # Replace substring: 'Hello, there!'

words = s.split(", ")                                    # Split string by ', ': ['Hello', 'world!']

name = "Chris"
greet1 = f"Hello, {name}!"                               # f-string formatting: 'Hello, Chris!'
greet2 = "Hello, {}".format(name)                        # format() method: 'Hello, Chris!'

has_world = "world" in s                                 # Check if 'world' is in s: True
starts = s.startswith("Hello")                           # Check if s starts with 'Hello': True
ends = s.endswith("!")                                   # Check if s ends with '!': True

length = len(s)                                          # Get length of string: 13